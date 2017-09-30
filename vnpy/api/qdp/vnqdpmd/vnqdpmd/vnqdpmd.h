//说明部分

//系统
#ifdef WIN32
#include "stdafx.h"
#endif
#include <queue>
#include <string>

// Boost
#define BOOST_PYTHON_STATIC_LIB
#include <boost/any.hpp>           //任务队列的任务实现
#include <boost/bind.hpp>          //任务队列的线程功能
#include <boost/python.hpp>        //python封装
#include <boost/python/def.hpp>    //python封装
#include <boost/python/dict.hpp>   //python封装
#include <boost/python/module.hpp> //python封装
#include <boost/python/object.hpp> //python封装
#include <boost/thread.hpp>        //任务队列的线程功能

// API
#include "QdpFtdcMdApi.h"

//命名空间
using namespace std;
using namespace boost::python;
using namespace boost;

//常量
#define ONFRONTCONNECTED 1
#define ONFRONTDISCONNECTED 2
#define ONHEARTBEATWARNING 3
#define ONPACKAGESTART 4
#define ONPACKAGEEND 5
#define ONRSPERROR 6
#define ONRSPUSERLOGIN 7
#define ONRSPUSERLOGOUT 8
#define ONRTNQMDINSTRUMENTSTATU 9
#define ONRSPSUBSCRIBETOPIC 10
#define ONRSPQRYTOPIC 11
#define ONRTNDEPTHMARKETDATA 12
#define ONRSPSUBMARKETDATA 13
#define ONRSPUNSUBMARKETDATA 14
#define ONRSPQRYDEPTHMARKETDATA 15
#define ONMULTIHEARTBEAT 16 //手动添加
#define UDPMARKETDATA 17    //手动添加

///-------------------------------------------------------------------------------------
/// API中的部分组件
///-------------------------------------------------------------------------------------

// GIL全局锁简化获取用，
//用于帮助C++线程获得GIL锁，从而防止python崩溃
class PyLock {
private:
  PyGILState_STATE gil_state;

public:
  //在某个函数方法中创建该对象时，获得GIL锁
  PyLock() { gil_state = PyGILState_Ensure(); }

  //在某个函数完成后销毁该对象时，解放GIL锁
  ~PyLock() { PyGILState_Release(gil_state); }
};

//任务结构体
struct Task {
  int task_name;  //回调函数名称对应的常量
  any task_data;  //数据结构体
  any task_error; //错误结构体
  int task_id;    //请求id
  bool task_last; //是否为最后返回

  int additional_int;     //整数型补充数据
  string additional_str1; //字符串型补充数据1
  string additional_str2; //字符串型补充数据2
};

///线程安全的队列
template <typename Data>

class ConcurrentQueue {
private:
  queue<Data> the_queue;                     //标准库队列
  mutable mutex the_mutex;                   // boost互斥锁
  condition_variable the_condition_variable; // boost条件变量

public:
  //存入新的任务
  void push(Data const &data) {
    mutex::scoped_lock lock(the_mutex);  //获取互斥锁
    the_queue.push(data);                //向队列中存入数据
    lock.unlock();                       //释放锁
    the_condition_variable.notify_one(); //通知正在阻塞等待的线程
  }

  //检查队列是否为空
  bool empty() const {
    mutex::scoped_lock lock(the_mutex);
    return the_queue.empty();
  }

  //取出
  Data wait_and_pop() {
    mutex::scoped_lock lock(the_mutex);

    while (the_queue.empty()) //当队列为空时
    {
      the_condition_variable.wait(lock); //等待条件变量通知
    }

    Data popped_value = the_queue.front(); //获取队列中的最后一个任务
    the_queue.pop();                       //删除该任务
    return popped_value;                   //返回该任务
  }
};

//从字典中获取某个建值对应的整数，并赋值到请求结构体对象的值上
void getInt(dict d, string key, int *value);

//从字典中获取某个建值对应的浮点数，并赋值到请求结构体对象的值上
void getDouble(dict d, string key, double *value);

//从字典中获取某个建值对应的字符，并赋值到请求结构体对象的值上
void getChar(dict d, string key, char *value);

//从字典中获取某个建值对应的字符串，并赋值到请求结构体对象的值上
void getStr(dict d, string key, char *value);

///-------------------------------------------------------------------------------------
/// C++ SPI的回调函数方法实现
///-------------------------------------------------------------------------------------

// API的继承实现
class MdApi : public CQdpFtdcMduserSpi {
private:
  CQdpFtdcMduserApi *api; // API对象
  thread *task_thread;    //工作线程指针（向python中推送数据）
  ConcurrentQueue<Task> task_queue; //任务队列

public:
  MdApi() {
    function0<void> f = boost::bind(&MdApi::processTask, this);
    thread t(f);
    this->task_thread = &t;
  };

  ~MdApi(){};

  //-------------------------------------------------------------------------------------
  // API回调函数
  //-------------------------------------------------------------------------------------

  ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
  virtual void OnFrontConnected();

  ///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
  ///@param nReason 错误原因
  ///        0x1001 网络读失败
  ///        0x1002 网络写失败
  ///        0x2001 接收心跳超时
  ///        0x2002 发送心跳失败
  ///        0x2003 收到错误报文
  virtual void OnFrontDisconnected(int nReason);

  ///心跳超时警告。当长时间未收到报文时，该方法被调用。
  ///@param nTimeLapse 距离上次接收报文的时间
  virtual void OnHeartBeatWarning(int nTimeLapse);

  ///报文回调开始通知。当API收到一个报文后，首先调用本方法，然后是各数据域的回调，最后是报文回调结束通知。
  ///@param nTopicID 主题代码（如私有流、公共流、行情流等）
  ///@param nSequenceNo 报文序号
  virtual void OnPackageStart(int nTopicID, int nSequenceNo);

  ///报文回调结束通知。当API收到一个报文后，首先调用报文回调开始通知，然后是各数据域的回调，最后调用本方法。
  ///@param nTopicID 主题代码（如私有流、公共流、行情流等）
  ///@param nSequenceNo 报文序号
  virtual void OnPackageEnd(int nTopicID, int nSequenceNo);

  //新增多播心跳接口 add by zbz 20150304
  virtual void OnMultiHeartbeat(char *CurrTime, char *MultiCastIP);

  //当广播收到值得时候，回调函数被调用，返回qmdata
  virtual void UdpMarketData(CQdpFtdcDepthMarketDataField *qmdata);

  ///错误应答
  virtual void OnRspError(CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  ///用户登录应答
  virtual void OnRspUserLogin(CQdpFtdcRspUserLoginField *pRspUserLogin,
                              CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                              bool bIsLast);

  ///用户退出应答
  virtual void OnRspUserLogout(CQdpFtdcRspUserLogoutField *pRspUserLogout,
                               CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                               bool bIsLast);

  ///郑州合约状态
  virtual void
  OnRtnQmdInstrumentStatu(CQdpFtdcQmdInstrumentStateField *pQmdInstrumentState);

  ///订阅主题应答
  virtual void OnRspSubscribeTopic(CQdpFtdcDisseminationField *pDissemination,
                                   CQdpFtdcRspInfoField *pRspInfo,
                                   int nRequestID, bool bIsLast);

  ///主题查询应答
  virtual void OnRspQryTopic(CQdpFtdcDisseminationField *pDissemination,
                             CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                             bool bIsLast);

  ///深度行情通知
  virtual void
  OnRtnDepthMarketData(CQdpFtdcDepthMarketDataField *pDepthMarketData);

  ///订阅合约的相关信息
  virtual void
  OnRspSubMarketData(CQdpFtdcSpecificInstrumentField *pSpecificInstrument,
                     CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                     bool bIsLast);

  ///退订合约的相关信息
  virtual void
  OnRspUnSubMarketData(CQdpFtdcSpecificInstrumentField *pSpecificInstrument,
                       CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                       bool bIsLast);

  ///行情查询应答
  virtual void
  OnRspQryDepthMarketData(CQdpFtdcRspMarketDataField *pRspMarketData,
                          CQdpFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast);

  //-------------------------------------------------------------------------------------
  // task：任务
  //-------------------------------------------------------------------------------------

  void processTask();

  void processFrontConnected(Task task);

  void processFrontDisconnected(Task task);

  void processHeartBeatWarning(Task task);

  void processPackageStart(Task task);

  void processPackageEnd(Task task);

  void processMultiHeartbeat(Task task);

  void processUdpMarketData(Task task);

  void processRspError(Task task);

  void processRspUserLogin(Task task);

  void processRspUserLogout(Task task);

  void processRtnQmdInstrumentStatu(Task task);

  void processRspSubscribeTopic(Task task);

  void processRspQryTopic(Task task);

  void processRtnDepthMarketData(Task task);

  void processRspSubMarketData(Task task);

  void processRspUnSubMarketData(Task task);

  void processRspQryDepthMarketData(Task task);

  //-------------------------------------------------------------------------------------
  // data：回调函数的数据字典
  // error：回调函数的错误字典
  // id：请求id
  // last：是否为最后返回
  // i：整数
  //-------------------------------------------------------------------------------------

  virtual void onFrontConnected(){};

  virtual void onFrontDisconnected(int i){};

  virtual void onHeartBeatWarning(int i){};

  virtual void onPackageStart(int topicID, int sequenceNo){};

  virtual void onPackageEnd(int topicID, int sequenceNo){};

  virtual void onMultiHeartbeat(string currTime, string multiCastIP){};

  virtual void udpMarketData(dict data){};

  virtual void onRspError(dict error, int id, bool last){};

  virtual void onRspUserLogin(dict data, dict error, int id, bool last){};

  virtual void onRspUserLogout(dict data, dict error, int id, bool last){};

  virtual void onRtnQmdInstrumentStatu(dict data){};

  virtual void onRspSubscribeTopic(dict data, dict error, int id, bool last){};

  virtual void onRspQryTopic(dict data, dict error, int id, bool last){};

  virtual void onRtnDepthMarketData(dict data){};

  virtual void onRspSubMarketData(dict data, dict error, int id, bool last){};

  virtual void onRspUnSubMarketData(dict data, dict error, int id, bool last){};

  virtual void onRspQryDepthMarketData(dict data, dict error, int id,
                                       bool last){};

  //-------------------------------------------------------------------------------------
  // req:主动函数的请求字典
  //-------------------------------------------------------------------------------------

  void createFtdcMdApi(string pszFlowPath = "");

  string getVersion(int major, int minor);

  void release();

  void setMultiCast(bool multicast);

  void regTopicMultiAddr(string multiAddr);

  void init();

  int join();

  int exit();

  string getTradingDay();

  void registerFront(string pszFrontAddress);

  void registerNameServer(string pszNsAddress);

  void subscribeMarketDataTopic(int topicID, int resumeType);

  int subMarketData(string instrumentID);

  int unSubMarketData(string instrumentID);

  void setHeartbeatTimeout(int timeout);

  void shmMarketData(dict req, dict defdata);

  void setUdpChannel(string udpid);

  int reqUserLogin(dict req, int nRequestID);

  int reqUserLogout(dict req, int nRequestID);

  int reqSubscribeTopic(dict req, int nRequestID);

  int reqQryTopic(dict req, int nRequestID);

  int reqSubMarketData(dict req, int nRequestID);

  int reqUnSubMarketData(dict req, int nRequestID);

  int reqQryDepthMarketData(dict req, int nRequestID);

  void activateMultiMarketData(string tradingDay);
};

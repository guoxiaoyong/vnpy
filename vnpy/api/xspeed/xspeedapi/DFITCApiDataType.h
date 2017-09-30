/**
 * 版权所有(C)2012-2016, 大连飞创信息技术有限公司
 * 文件名称：DFITCApiDataType.h
 * 文件说明：定义接口所需的数据类型的头文件
 * 当前版本：1.0.14.91
 * 作者：XSpeed项目组
 * 发布日期：2015年5月6日
 */

#ifndef DFITCAPIDATATYPE_H
#define DFITCAPIDATATYPE_H

////////////////////////////////////////////////////////////
/// DFITCUserIDType：用户ID数据类型
////////////////////////////////////////////////////////////
typedef char DFITCUserIDType[41];

////////////////////////////////////////////////////////////
/// DFITCAccountIDType：资金账户数据类型
////////////////////////////////////////////////////////////
typedef char DFITCAccountIDType[13];

////////////////////////////////////////////////////////////
/// DFITCExecStateType：执行状态数据类型
////////////////////////////////////////////////////////////
typedef int DFITCExecStateType;
///成功
#define DFITC_SUCCESS 0
///失败
#define DFITC_FAIL 1

////////////////////////////////////////////////////////////
/// DFITCClientIDType：交易编码数据类型
////////////////////////////////////////////////////////////
typedef char DFITCClientIDType[13];

////////////////////////////////////////////////////////////
/// DFITCClientStatusType：交易编码状态数据类型
////////////////////////////////////////////////////////////
typedef int DFITCClientStatusType;
///禁止开新仓
#define DFITC_PROHIBIT_OPEN 4
///允许开新仓
#define DFITC_ALLOW_OPEN 5

////////////////////////////////////////////////////////////
/// DFITCInstrumentIDType：合约代码数据类型
////////////////////////////////////////////////////////////
typedef char DFITCInstrumentIDType[64];

////////////////////////////////////////////////////////////
/// DFITCInstrumentPrefixType：品种名称数据类型
////////////////////////////////////////////////////////////
typedef char DFITCInstrumentPrefixType[31];

////////////////////////////////////////////////////////////
/// DFITCVarietyNameType：品种名称数据类型
////////////////////////////////////////////////////////////
typedef char DFITCVarietyNameType[31];

////////////////////////////////////////////////////////////
/// DFITCInstrumentNameType：合约名称数据类型
////////////////////////////////////////////////////////////
typedef char DFITCInstrumentNameType[64];

////////////////////////////////////////////////////////////
/// DFITCActiveContractType：有效合约数据类型
////////////////////////////////////////////////////////////
typedef char DFITCActiveContractType[1024];

////////////////////////////////////////////////////////////
/// DFITCLocalOrderIDType:本地委托号数据类型
////////////////////////////////////////////////////////////
typedef long DFITCLocalOrderIDType;

////////////////////////////////////////////////////////////
/// DFITCPriceType:价格数据类型
////////////////////////////////////////////////////////////
typedef double DFITCPriceType;

////////////////////////////////////////////////////////////
/// DFITCAmountType:委托数量数据类型
////////////////////////////////////////////////////////////
typedef long DFITCAmountType;

////////////////////////////////////////////////////////////
/// DFITCBuySellTypeType:买卖数据类型
////////////////////////////////////////////////////////////
typedef short DFITCBuySellTypeType;
///买
#define DFITC_SPD_BUY 1
///卖
#define DFITC_SPD_SELL 2

////////////////////////////////////////////////////////////
/// DFITCOpenCloseTypeType：开平标志数据类型
////////////////////////////////////////////////////////////
typedef int DFITCOpenCloseTypeType;
///开仓
#define DFITC_SPD_OPEN 1
///平仓
#define DFITC_SPD_CLOSE 2
///平今
#define DFITC_SPD_CLOSETODAY 4
///期权执行
#define DFITC_SPD_EXECUTE 6
///期权放弃
#define DFITC_SPD_GIVEUP 7
///期权履约
#define DFITC_SPD_PERFORM 8
///询价
#define DFITC_SPD_OPTQRYPRICE 9
///强平
#define DFITC_SPD_FORCECLOSE 12
///强平今
#define DFITC_SPD_FORCECLOSETODAY 14

////////////////////////////////////////////////////////////
/// DFITCSpeculationValueType:投机保值数据类型
////////////////////////////////////////////////////////////
typedef short DFITCSpeculationValueType;

////////////////////////////////////////////////////////////
/// DFITCExchangeIDType:交易所编码数据类型
////////////////////////////////////////////////////////////
typedef char DFITCExchangeIDType[8];
///大商所
#define DFITC_EXCHANGE_DCE "DCE"
///郑商所
#define DFITC_EXCHANGE_CZCE "CZCE"
///上期所
#define DFITC_EXCHANGE_SHFE "SHFE"
///中金所
#define DFITC_EXCHANGE_CFFEX "CFFEX"
///上能所
#define DFITC_EXCHANGE_INE "INE"

////////////////////////////////////////////////////////////
/// DFITCFrontAddrType:前置机地址数据类型
////////////////////////////////////////////////////////////
typedef char DFITCFrontAddrType[32];

////////////////////////////////////////////////////////////
/// DFITCCompanyIDType:开发商代码数据类型
////////////////////////////////////////////////////////////
typedef short DFITCCompanyIDType;

////////////////////////////////////////////////////////////
/// DFITCPasswdType:用户密码数据类型
///柜台端密码不能为空且有效长度最大为16位
////////////////////////////////////////////////////////////
typedef char DFITCPasswdType[41];

////////////////////////////////////////////////////////////
/// DFITCSPDOrderIDType:柜台委托号数据类型
///柜台委托号和条件单号使用相同字段表示
///当DFITCSPDOrderIDType的取值为正数[最小为1 ]，表示为柜台委
///托号，该笔报单已经到柜台
///当DFITCSPDOrderIDType的取值为负数[最大为-2]，标示为条件单
///号，该笔报单在条件单模块
////////////////////////////////////////////////////////////
typedef long DFITCSPDOrderIDType;

////////////////////////////////////////////////////////////
/// DFITCOrderSysIDType:报单编号数据类型
////////////////////////////////////////////////////////////
typedef char DFITCOrderSysIDType[64];

////////////////////////////////////////////////////////////
/// DFITCOrderType:报单类型
////////////////////////////////////////////////////////////
typedef int DFITCOrderTypeType;
///限价委托
#define DFITC_LIMITORDER 1
///市价委托
#define DFITC_MKORDER 2
///套利委托
#define DFITC_ARBITRAGE 4
///展期互换委托
#define DFITC_EXTENSION 8
///限价止盈委托
#define DFITC_PROFIT_LIMITORDER 32
///市价止盈委托
#define DFITC_PROFIT_MKORDER 34
///限价止损委托
#define DFITC_LOSS_LIMITORDER 48
///市价止损委托
#define DFITC_LOSS_MKORDER 50

////////////////////////////////////////////////////////////
/// DFITCOrderAnswerStatusType:委托回报类型
////////////////////////////////////////////////////////////
typedef short DFITCOrderAnswerStatusType;
///全部撤单
#define DFITC_SPD_CANCELED 1
///全部成交
#define DFITC_SPD_FILLED 2
///未成交还在队列中
#define DFITC_SPD_IN_QUEUE 3
///部分成交还在队列中
#define DFITC_SPD_PARTIAL 4
///部成部撤
#define DFITC_SPD_PARTIAL_CANCELED 5
///撤单中
#define DFITC_SPD_IN_CANCELING 6
///错误(废单错误)
#define DFITC_SPD_ERROR 7
///未成交不在队列中
#define DFITC_SPD_PLACED 8
///柜台已接收，但尚未到交易所
#define DFITC_SPD_TRIGGERED 10

///////////////////////////////////////////////////////////////
///基于算法单模块新增
///////////////////////////////////////////////////////////////

///未触发
#define DFITC_EXT_UNTRIGGER 13
///部分触发
#define DFITC_EXT_PART_TRIGGER 14
///全部触发
#define DFITC_EXT_ALL_TRIGGER 15
///已经撤单
#define DFITC_EXT_CANCELLED 16
///报单失败
#define DFITC_EXT_FAILED 17

////////////////////////////////////////////////////////////
/// DFITCMatchIDType:成交编号数据类型
////////////////////////////////////////////////////////////
typedef char DFITCMatchIDType[32];

////////////////////////////////////////////////////////////
/// DFITCDateType：时间数据类型
////////////////////////////////////////////////////////////
typedef char DFITCDateType[13];

////////////////////////////////////////////////////////////
/// DFITCMatchType:成交类型数据类型
////////////////////////////////////////////////////////////
typedef long DFITCMatchType;
///普通成交
#define DFITC_BASIC_TRADE 0

////////////////////////////////////////////////////////////
/// DFITCSpeculatorType:投保类型
////////////////////////////////////////////////////////////
typedef int DFITCSpeculatorType;
///投机
#define DFITC_SPD_SPECULATOR 0
///套保
#define DFITC_SPD_HEDGE 1
///套利
#define DFITC_SPD_ARBITRAGE 2

////////////////////////////////////////////////////////////
/// DFITCFeeType:手续费数据类型
////////////////////////////////////////////////////////////
typedef double DFITCFeeType;

////////////////////////////////////////////////////////////
/// DFITCErrorIDType:错误数据类型
////////////////////////////////////////////////////////////
typedef int DFITCErrorIDType;

////////////////////////////////////////////////////////////
/// DFITCErrorMsgInfoType:错误信息数据类型
////////////////////////////////////////////////////////////
typedef char DFITCErrorMsgInfoType[64];

////////////////////////////////////////////////////////////
/// DFITCMsgInfoType:消息信息数据类型
////////////////////////////////////////////////////////////
typedef char DFITCMsgInfoType[1024];

////////////////////////////////////////////////////////////
/// DFITCEquityType:权益数据类型
////////////////////////////////////////////////////////////
typedef double DFITCEquityType;

////////////////////////////////////////////////////////////
/// DFITCProfitLossType:盈亏数据类型
////////////////////////////////////////////////////////////
typedef double DFITCProfitLossType;

////////////////////////////////////////////////////////////
/// DFITCAccountLoginResultType:资金账户登录结果
////////////////////////////////////////////////////////////
typedef int DFITCAccountLoginResultType;
///登录成功
#define DFITC_LOGIN_SUCCESS 0
///登录失败
#define DFITC_LOGIN_FAILED 1
///已退出
#define DFITC_LOGIN_QUIT 2
///未操作
#define DFITC_LOGIN_NOT_OPERATE 9

////////////////////////////////////////////////////////////
/// DFITCSessionIDType:SessionID数据类型
////////////////////////////////////////////////////////////
typedef long DFITCSessionIDType;

////////////////////////////////////////////////////////////
/// DFITCAccountLogoutResultType:资金帐号登出结果
////////////////////////////////////////////////////////////
typedef int DFITCAccountLogoutResultType;
///登出成功
#define DFITC_LOGOUT_SUCCESS 0
///登出失败
#define DFITC_LOGOUT_FAILED 1

////////////////////////////////////////////////////////////
/// DFITCUserTypeType:用户类型
////////////////////////////////////////////////////////////
typedef int DFITCUserTypeType;

////////////////////////////////////////////////////////////
/// DFITCCounterIDType:柜台编号数据类型
////////////////////////////////////////////////////////////
typedef int DFITCCounterIDType;

////////////////////////////////////////////////////////////
/// DFITCRiskDegreeType:风险度数据类型
////////////////////////////////////////////////////////////
typedef double DFITCRiskDegreeType;

////////////////////////////////////////////////////////////
/// DFITCMilliSecType:微秒数据类型
////////////////////////////////////////////////////////////
typedef int DFITCMilliSecType;

////////////////////////////////////////////////////////////
/// DFITCDeltaType:虚实度数据类型
////////////////////////////////////////////////////////////
typedef double DFITCDeltaType;

////////////////////////////////////////////////////////////
/// DFITCVolumeType：数量数据类型
////////////////////////////////////////////////////////////
typedef int DFITCVolumeType;

////////////////////////////////////////////////////////////
/// DFITCFrontIDType:前置机编号数据类型
////////////////////////////////////////////////////////////
typedef int DFITCFrontIDType;

////////////////////////////////////////////////////////////
/// DFITCOfferPriceLimitType:报价数据上限数据类型
////////////////////////////////////////////////////////////
typedef int DFITCOfferPriceLimitType;

////////////////////////////////////////////////////////////
/// DFITCOrderNumType:委托号数据类型
////////////////////////////////////////////////////////////
typedef short DFITCOrderNumType;

////////////////////////////////////////////////////////////
/// DFITCRatioType:比率数据类型
////////////////////////////////////////////////////////////
typedef double DFITCRatioType;

////////////////////////////////////////////////////////////
/// DFITCPremiumType:权利金
////////////////////////////////////////////////////////////
typedef double DFITCPremiumType;

////////////////////////////////////////////////////////////
/// DFITCMarketValueType:期权市值
////////////////////////////////////////////////////////////
typedef double DFITCMarketValueType;

////////////////////////////////////////////////////////////
/// DFITCTimeType:交易所时间
////////////////////////////////////////////////////////////
typedef char DFITCTimeType[256];

////////////////////////////////////////////////////////////
/// DFITCAbiPolicyCodeType: 套利策略代码数据类型
////////////////////////////////////////////////////////////
typedef char DFITCAbiPolicyCodeType[8];
///跨期套利
#define DFITC_SP "SP"
///两腿跨品种套利
#define DFITC_SP_SPC "SPC"
///压榨套利
#define DFITC_SP_SPX "SPX"
/// Call Spread
#define DFITC_SP_CALL "CSPR"
/// Put Spread
#define DFITC_SP_PUT "PSPR"
/// Combo
#define DFITC_SP_COMBO "COMBO"
/// Straddle
#define DFITC_SP_STRADDLE "STD"
/// Strangle
#define DFITC_SP_STRANGLE "STG"
/// Guts
#define DFITC_SP_GUTS "GUTS"
/// Synthetic Underlying
#define DFITC_SP_SYNUND "SYN"

////////////////////////////////////////////////////////////
/// DFITCOrderPropertyType:订单属性
////////////////////////////////////////////////////////////
typedef char DFITCOrderPropertyType;
///无订单属性
#define DFITC_SP_NON '0'
/// FAK设置
#define DFITC_SP_FAK '1'
/// FOK设置
#define DFITC_SP_FOK '2'
///市价任意价
#define DFITC_SP_ANYPRICE '3'
///市价任意价转限价
#define DFITC_SP_ANYPRICE_TO_MKORDER '4'
///五档市价
#define DFITC_SP_FIVELEVELPRICE '5'
///五档市价转限价
#define DFITC_SP_FIVELEVELPRICE_TO_LIMIT '6'
///最优价
#define DFITC_SP_BESTPRICE '7'
///最优价转限价
#define DFITC_SP_BESTPRICE_TO_LIMIT '8'

////////////////////////////////////////////////////////////
/// DFITCInsertType:委托类别
////////////////////////////////////////////////////////////
typedef int DFITCInsertType;
///普通委托单
#define DFITC_BASIC_ORDER 0x0001
///自动单
#define DFITC_AUTO_ORDER 0x0002

////////////////////////////////////////////////////////////
/// DFITCOptionTypeType:期权类别数据类型
////////////////////////////////////////////////////////////
typedef int DFITCOptionTypeType;
///看涨
#define DFITC_OPT_CALL 1
///看跌
#define DFITC_OPT_PUT 2

////////////////////////////////////////////////////////////
/// DFITCInstrumentTypeType:合约类型数据类型
////////////////////////////////////////////////////////////
typedef int DFITCInstrumentTypeType;
///期货
#define DFITC_COMM_TYPE 0
///期权
#define DFITC_OPT_TYPE 1

////////////////////////////////////////////////////////////
/// DFITCCancelTypeType:撤销标志数据类型
////////////////////////////////////////////////////////////
typedef char DFITCCancelTypeType;
///订单
#define DFITC_ORDER_BOOK 'O'
///撤销
#define DFITC_ORDER_CANCEL 'W'

////////////////////////////////////////////////////////////
/// DFITCContentType:消息正文数据类型
////////////////////////////////////////////////////////////
typedef char DFITCContentType[501];

////////////////////////////////////////////////////////////
/// DFITCInstrumentStatusType:合约交易状态数据类型
////////////////////////////////////////////////////////////
typedef int DFITCInstrumentStatusType;

////////////////////////////////////////////////////////////
/// DFITCInstStatusEnterReasonType:进入本状态原因数据类型
////////////////////////////////////////////////////////////
typedef short DFITCInstStatusEnterReasonType;

////////////////////////////////////////////////////////////
/// DFITCCurrencyType:币种数据类型
////////////////////////////////////////////////////////////
typedef char DFITCCurrencyType[4];

////////////////////////////////////////////////////////////
/// DFITCConfirmType:确认标志数据类型
////////////////////////////////////////////////////////////
typedef int DFITCConfirmMarkType;
///确认
#define DFITC_CON_CONFIRM 2

////////////////////////////////////////////////////////////
/// DFITCStanAddrType:备用地址数据类型
////////////////////////////////////////////////////////////
typedef char DFITCStanAddrType[16];

////////////////////////////////////////////////////////////
/// DFITCCapControlModeType:资金控制方式数据类型
////////////////////////////////////////////////////////////
typedef long DFITCCapControlModeType;
///盯市盈亏可用
#define DFITC_PPL_USABLE 2
///平仓资金T+1可用
#define DFITC_OF_USABLEFUND 4
///平仓保证金可取
#define DFITC_OF_FETCHABLEMARGIN 8
///本日盈亏可取
#define DFITC_AG_FETCHBLETODAY 16
///取后权益大于本日总入金
#define DFITC_INTEREST_ 32
///平仓盈亏可取
#define DFITC_OF_FETCHABLE 128
///权利金收入可取
#define DFITC_PREMIUMOPTION_FETCHBLE 256

////////////////////////////////////////////////////////////
/// DFITCArchRatioType:转存比例数据类型
////////////////////////////////////////////////////////////
typedef double DFITCArchRatioType;

////////////////////////////////////////////////////////////
/// DFITCSettlementBillTradeType:汇总标志数据类型
////////////////////////////////////////////////////////////
typedef int DFITCSettlementBillTradeType;
///汇总成交明细
#define DFITC_MATCHDETAIL 2
///汇总持仓盈亏
#define DFITC_OPGAL 4
///汇总平仓盈亏
#define DFITC_OFGAL 8

////////////////////////////////////////////////////////////
/// DFITCFilesFlagType:档案类型数据类型
////////////////////////////////////////////////////////////
typedef int DFITCFilesFlagType;
///成交明细打印
#define DFITC_PRINT_MATCHDETAIL 4
///持仓盈亏打印
#define DFITC_PRINT_OPGAL 8
///平仓盈亏打印
#define DFITC_PRINT_OFGAL 16
///资金出入打印
#define DFITC_PRINT_ACCESSFUNDS 32
///追保声明打印
#define DFITC_PRINT_ADDMARGIN 64

////////////////////////////////////////////////////////////
/// DFITCSoftwareVendorIDType:软件供应商编号数据类型
////////////////////////////////////////////////////////////
typedef char DFITCSoftwareVendorIDType[33];

////////////////////////////////////////////////////////////
/// DFITCProductOnlineCountType:产品在线数量数据类型
////////////////////////////////////////////////////////////
typedef long DFITCProductOnlineCountType;

////////////////////////////////////////////////////////////
/// DFITCBrokerInfoType:期货公司名称数据类型
////////////////////////////////////////////////////////////
typedef char DFITCBrokerInfoType[20];

////////////////////////////////////////////////////////////
/// DFITCProductIDType:产品编号数据类型
////////////////////////////////////////////////////////////
typedef char DFITCProductIDType[33];

////////////////////////////////////////////////////////////
/// DFITCRequestIDType:请求ID数据类型
////////////////////////////////////////////////////////////
typedef long DFITCRequestIDType;

////////////////////////////////////////////////////////////
/// DFITCCustomCategoryType:自定义类别数据类型
////////////////////////////////////////////////////////////
typedef char DFITCCustomCategoryType[32];

////////////////////////////////////////////////////////////
/// DFITCReservedType:预留字段数据类型
////////////////////////////////////////////////////////////
typedef int DFITCReservedType;

////////////////////////////////////////////////////////////
/// DFITCNoticeType:消息数据类型
////////////////////////////////////////////////////////////
typedef short DFITCNoticeType;
///系统广播
#define DFITC_SYS_BROADCAST_MSG 1
///指定客户
#define DFITC_ACCOUNT_ID_MSG 2

////////////////////////////////////////////////////////////
/// DFITCTradingSegmentSNType:交易阶段编号数据类型
////////////////////////////////////////////////////////////
typedef int DFITCTradingSegmentSNType;

//////////////////////////////////////////////
/// DFITCExtOrderType:算法单类型数据类型
//////////////////////////////////////////////
typedef int DFITCExtOrderType;

///预埋单
#define DFITC_YMORDER 1
///条件单
#define DFITC_TJORDER 2
///跨期套利订单
#define DFITC_KQTLDD 3
///跨品种套利订单
#define DFITC_KPZTLDD 4
///蝶式套利订单
#define DFITC_DSTLDD 5
///自定义套利订单(暂不支持)
#define DFITC_ZDYTLDD 6

//////////////////////////////////////////////
/// DFITCTriggerTime:触发时间数据类型
//////////////////////////////////////////////
typedef char DFITCTriggerTime[10];

//////////////////////////////////////////////
/// DFITCPriceReference:价格参照数据类型
//////////////////////////////////////////////
typedef int DFITCPriceReference;

///参照最新价
#define DFITC_REF_LASTPRICE 0
///参照买一价
#define DFITC_REF_BIDPRICE 1
///参照卖出价
#define DFITC_REF_ASKPRICE 2

//////////////////////////////////////////////
/// DFITCCompareFlag:比较标志数据类型
//////////////////////////////////////////////
typedef int DFITCCompareFlag;

///大于
#define DFITC_CF_GREATER 0
///大于等于
#define DFITC_CF_NOTLESS 1
///小于
#define DFITC_CF_LESS 2
///小于等于
#define DFITC_CF_NOTGREATER 3

//////////////////////////////////////////////
/// DFITCOvernightFlag:隔夜标志数据类型
//////////////////////////////////////////////
typedef int DFITCOvernightFlag;

///隔夜
#define DFITC_OVERNIGHT 1
///不隔夜
#define DFITC_NOT_OVERNIGHT 2

//////////////////////////////////////////////
/// DFITCArbitragePrice:套利价格数据类型
//////////////////////////////////////////////
typedef double DFITCArbitragePrice;

//////////////////////////////////////////////
/// DFITCExtTriggerCond:触发条件数据类型
//////////////////////////////////////////////
typedef int DFITCExtTriggerCond;

///价格触发
#define DFITC_TRIGGER_PRICE 0
///时间触发
#define DFITC_TRIGGER_TIME 1

////////////////////////////////////////////////////////////
/// DFITCInstrumentMaturityType:合约最后交易日
////////////////////////////////////////////////////////////
typedef char DFITCInstrumentMaturityType[12];

////////////////////////////////////////////////////////////
/// DFITCInstrumenExpirationDateType:合约到期日
////////////////////////////////////////////////////////////
typedef char DFITCInstrumenExpirationDateType[12];

////////////////////////////////////////////////////////////
/// DFITCAdjustmentInfoType:组合或对锁的保证金调整信息
///格式:[合约代码,买卖标志,投资类别,调整金额;]
////////////////////////////////////////////////////////////
typedef char DFITCAdjustmentInfoType[64];

////////////////////////////////////////////////////////////
/// DFITCQuoteIDType:询价编号
////////////////////////////////////////////////////////////
typedef char DFITCQuoteIDType[33];

////////////////////////////////////////////////////////////
/// DFITCSourceType:来源
////////////////////////////////////////////////////////////
typedef short DFITCSourceType;

///会员
#define DFITC_SOURCE_MEMBER 0
///交易所
#define DFITC_SOURCE_EXCHANGE 1

////////////////////////////////////////////////////////////
/// DFITCSeatCodeType:席位代码
////////////////////////////////////////////////////////////
typedef char DFITCSeatCodeType[33];

////////////////////////////////////////////////////////////
/// DFITCCloseIDType:平仓执行单号
////////////////////////////////////////////////////////////
typedef char DFITCCloseIDType[33];

////////////////////////////////////////////////////////////
/// DFITCEntrusTellerType:委托柜员
////////////////////////////////////////////////////////////
typedef char DFITCEntrusTellerType[41];

////////////////////////////////////////////////////////////
/// DFITCStayTimeType：停留时间数据类型
////////////////////////////////////////////////////////////
typedef int DFITCStayTimeType;

////////////////////////////////////////////////////////////
/// DFITCComputeModeType：计算方式数据类型
////////////////////////////////////////////////////////////
typedef int DFITCComputeModeType;
///绝对数值计算
#define DFITC_ABSOLUTE_VALUE_COMPUTE 0
///交易所保证金标准基础上浮动
#define DFITC_EXCHANGE_MARGIN_BASIS_FLOAT 1
///交易所保证金结果基础上浮动
#define DFITC_EXCHANGE_MARGIN_RESULT_FLOAT 2
///期货保证金标准基础上浮动
#define DFITC_FUTURES_MARGIN_BASIS_FLOAT 3

/////////////////////////////////////////////////////////////////////////
/// DFITCPriceNoteType:期权保证金计算方式
/////////////////////////////////////////////////////////////////////////
typedef int DFITCPriceNoteType;
///按照昨结算价计算
#define DFITC_CALC_BY_PRESETTLEMENT 1
///按照最新价计算
#define DFITC_CALC_BY_LASTPRICE 2

/////////////////////////////////////////////////////////////////////////
/// DFITCLargeMarginDirectType:大边保证金方向数据类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCLargeMarginDirectType[128];

/////////////////////////////////////////////////////////////////////////
/// DFITCBankIDType:银行代码类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCBankIDType[8];

/////////////////////////////////////////////////////////////////////////
/// DFITCBankNameType:银行名称类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCBankNameType[101];

/////////////////////////////////////////////////////////////////////////
/// DFITCBankSerialType:银行流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCBankSerialType[13];

/////////////////////////////////////////////////////////////////////////
/// DFITCSerialType:流水号类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCSerialType;

/////////////////////////////////////////////////////////////////////////
/// DFITCBankAccountType:银行账户类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCBankAccountType[41];

/////////////////////////////////////////////////////////////////////////
/// DFITCFutureSerialType:期货公司流水号类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCFutureSerialType;

/////////////////////////////////////////////////////////////////////////
/// DFITCDigestType:摘要类型
/////////////////////////////////////////////////////////////////////////
typedef char DFITCDigestType[36];

/////////////////////////////////////////////////////////////////////////
/// DFITCBankAccTypeType是一个银行帐号类型类型
/////////////////////////////////////////////////////////////////////////
///银行存折
#define DFITC_BAT_BankBook '1'
///储蓄卡
#define DFITC_BAT_SavingCard '2'
///信用卡
#define DFITC_BAT_CreditCard '3'
typedef char DFITCBankAccTypeType;

/////////////////////////////////////////////////////////////////////////
/// DFITCTransferStatusType:转账交易状态类型
/////////////////////////////////////////////////////////////////////////
///正常
#define DFITC_TRFS_Normal '0'
///被冲正
#define DFITC_TRFS_Repealed '1'
typedef char DFITCTransferStatusType;

/////////////////////////////////////////////////////////////////////////
/// DFITCTransferType:银期转账业务类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCTransferType;

/////////////////////////////////////////////////////////////////////////
/// DFITCTransferType:银期转账处理结果类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCProcResultType;
///成功
#define DFITC_PROC_SUCCESS 0
///失败
#define DFITC_PROC_FAIL 1
///等待回执
#define DFITC_PROC_WAIT_RTN 2

/////////////////////////////////////////////////////////////////////////
/// DFITCApplyNumberType:银期转账申请号类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCApplyNumberType;

//********************扩展行情扩充**********************

/////////////////////////////////////////////////////////////////////////
/// DFITCImpliedVolatilityType:隐含波动率类型
/////////////////////////////////////////////////////////////////////////
typedef double DFITCImpliedVolatilityType;

/////////////////////////////////////////////////////////////////////////
/// DFITCOptionComputationType:期权计算数据类型
/////////////////////////////////////////////////////////////////////////
typedef double DFITCOptionComputationType;

////////////////////////////////////////////////////////////
/// DFITCFunctionIDType:行情扩展功能号
////////////////////////////////////////////////////////////
typedef char DFITCFunctionIDType[16];

////////////////////////////////////////////////////////////
/// DFITCExtMarketDataType:行情扩展功能号
////////////////////////////////////////////////////////////
typedef char DFITCExtMarketDataType[128];

//********************扩展行情扩充**********************

/////////////////////////////////////////////////////////////////////////
/// DFITCExchangeStatusType:交易所状态数据类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCExchangeStatusType;
///开盘前
#define DFITC_IS_BEFORETRADING 0
///非交易
#define DFITC_IS_NOTRADING 1
///连续交易
#define DFITC_IS_CONTINOUS 2
///集合竞价报单
#define DFITC_IS_AUCTIONORDERING 3
///集合竞价价格平衡
#define DFITC_IS_AUCTIONBALANCE 4
///集合竞价撮合
#define DFITC_IS_AUCTIONMATCH 5
///收盘
#define DFITC_IS_CLOSED 6

/////////////////////////////////////////////////////////////////////////
/// DFITCPositionDateType:持仓日期类型
/////////////////////////////////////////////////////////////////////////
typedef int DFITCPositionDateType;
//今仓
#define DFITC_PSD_TODAY 1
//历史仓
#define DFITC_PSD_HISTORY 2

#endif // DFITCAPIDATATYPE_H

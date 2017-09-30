/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company QuantDo
///@file QdpFtdcUserApiDataType.h
///@brief 定义了客户端接口使用的业务数据类型
///@history
///
/////////////////////////////////////////////////////////////////////////

#ifndef QDP_FTDCDATATYPE_H
#define QDP_FTDCDATATYPE_H

enum QDP_TE_RESUME_TYPE {
  QDP_TERT_RESTART = 0,
  QDP_TERT_RESUME,
  QDP_TERT_QUICK
};

/////////////////////////////////////////////////////////////////////////
///定义交易通道类型类别
/////////////////////////////////////////////////////////////////////////
//连接中金所
#define QDP_EI_CFFEX "CFFEX"
//连接上期所
#define QDP_EI_SHFE "SHFE"
//连接大商所
#define QDP_EI_DCE "DCE"
//连接郑商所
#define QDP_EI_ZCE "CZCE"
//连接上证所
#define QDP_EI_SSE "SSE"
//连接深交所
#define QDP_EI_SZSE "SZSE"
//连接黄金交易所
#define QDP_EI_SGE "SGE"
//连接芝加哥商品期货交易所
#define QDP_EI_CME "CME"
//连接伦敦金属交易所
#define QDP_EI_LME "LME"
//连接国泰君安的通道
#define QDP_EI_GTJA "GTJA"
//连接上海国际能源中心的通道
#define QDP_EI_INE "INE"

const int QDP_TSS_DIALOG = 1;  //对话流
const int QDP_TSS_PRIVATE = 2; //客户私有流
const int QDP_TSS_PUBLIC = 3;  //公共流
const int QDP_TSS_QUERY = 4;   //查询
const int QDP_TSS_USER = 5;    //用户私有流

/////////////////////////////////////////////////////////////////////////
/// TFtdcPriceTickType是一个最小变动价位类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcPriceTickType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcPriceType是一个价格类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcPriceType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcRatioType是一个比率类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcRatioType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcMoneyType是一个资金类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcMoneyType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcLargeVolumeType是一个大额数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcFeeType是一个费用类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcFeeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcInventoryType是一个库存类型
/////////////////////////////////////////////////////////////////////////
typedef double TQdpFtdcInventoryType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcSequenceNoType是一个序列号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcSequenceNoType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcMillisecType是一个最后修改毫秒类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcMillisecType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcVolumeType是一个数量类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcVolumeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcUnderlyingMultipleType是一个合约乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcUnderlyingMultipleType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcVolumeMultipleType是一个数量乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcSequenceSeriesType是一个序列系列号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcSequenceSeriesType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcSessionIDType是一个会话编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcSessionIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcErrorIDType是一个错误代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcErrorIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcDataCenterIDType是一个数据中心代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcDataCenterIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcFrontIDType是一个前置编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcFrontIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcRequestIDType是一个报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcRequestIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTopicIDType是一个主题代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcTopicIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcSettlementIDType是一个结算编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcSettlementIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTotalNumsType是一个累加次数类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcTotalNumsType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcDiffSndType是一个偏差时间类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcDiffSndType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTIDType是一个交易ID类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcTIDType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcMonthType是一个月份类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcMonthType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcBoolType是一个布尔型类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcBoolType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcYearType是一个年类型
/////////////////////////////////////////////////////////////////////////
typedef int TQdpFtdcYearType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcMemTableNameType是一个内存表名类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcMemTableNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TFtdcOrderSysIDType是一个报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcOrderSysIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TFtdcTradeIDType是一个成交编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcTradeIDType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcUserIDType是一个用户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcUserIDType[16];

/////////////////////////////////////////////////////////////////////////
/// TFtdcParticipantIDType是一个会员编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcParticipantIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TFtdcIPAddressType是一个IP地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcIPAddressType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcMacAddressType是一个Mac地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcMacAddressType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcInstrumentNameType是一个合约名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcInstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBranchIDType是一个营业部代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBranchIDType[7];

/////////////////////////////////////////////////////////////////////////
/// TFtdcInstrumentIDType是一个合约编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
/// TFtdcIdentifiedCardNoType是一个证件号码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcIdentifiedCardNoType[51];

/////////////////////////////////////////////////////////////////////////
/// TFtdcIdentifiedCardTypeType是一个证件类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcIdentifiedCardTypeType[16];

/////////////////////////////////////////////////////////////////////////
/// TFtdcExchangeIDType是一个交易(所)通道类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcExchangeIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TFtdcExchangeNameType是一个交易(所)所名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcExchangeNameType[31];

/////////////////////////////////////////////////////////////////////////
/// TFtdcDateType是一个日期类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcDateType[9];

/////////////////////////////////////////////////////////////////////////
/// TFtdcTimeType是一个时间类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcTimeType[9];

/////////////////////////////////////////////////////////////////////////
/// TFtdcClientTypeType是一个客户类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcClientTypeType[2];

/////////////////////////////////////////////////////////////////////////
/// TFtdcClientNameType是一个客户名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcClientNameType[81];

/////////////////////////////////////////////////////////////////////////
/// TFtdcClientIDType是一个客户编码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcClientIDType[19];

/////////////////////////////////////////////////////////////////////////
/// TFtdcAccountIDType是一个资金帐号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcAccountIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TFtdcSeatIDType是一个席位号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcSeatIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TFtdcProductNameType是一个品种名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcProductNameType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcUserOrderLocalIDType是一个用户本地报单号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcUserOrderLocalIDType[23];

/////////////////////////////////////////////////////////////////////////
/// TFtdcOrderLocalIDType是一个本地报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcOrderLocalIDType[33];

/////////////////////////////////////////////////////////////////////////
/// TFtdcInvestorIDType是一个投资者编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcInvestorIDType[19];

/////////////////////////////////////////////////////////////////////////
/// TFtdcUserNameType是一个用户编码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcUserNameType[31];

/////////////////////////////////////////////////////////////////////////
/// TFtdcPasswordType是一个密码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcPasswordType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcAbstractType是一个消息摘要类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcAbstractType[81];

/////////////////////////////////////////////////////////////////////////
/// TFtdcProductInfoType是一个产品信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcProductInfoType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcProtocolInfoType是一个协议信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcProtocolInfoType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBusinessUnitType是一个业务单元类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBusinessUnitType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcTradingSystemNameType是一个交易系统名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcTradingSystemNameType[61];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBrokerIDType是一个经纪公司代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBrokerIDType[11];

/////////////////////////////////////////////////////////////////////////
/// TFtdcCustomType是一个用户自定义域类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcCustomType[65];

/////////////////////////////////////////////////////////////////////////
/// TFtdcTradingDayType是一个交易日类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcTradingDayType[9];

/////////////////////////////////////////////////////////////////////////
/// TFtdcDepartmentType是一个营业部类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcDepartmentType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcGrantFuncSetType是一个授权功能号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcGrantFuncSetType[5];

/////////////////////////////////////////////////////////////////////////
/// TFtdcProductIDType是一个品种编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcProductIDType[13];

/////////////////////////////////////////////////////////////////////////
/// TFtdcAccountSeqNoType是一个资金流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcAccountSeqNoType[21];

/////////////////////////////////////////////////////////////////////////
/// TFtdcSettlementGroupIDType是一个结算组代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcSettlementGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBankIDType是一个银行代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBankIDType[4];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBankBrchIDType是一个银行分中心代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBankBrchIDType[5];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBankAccountType是一个银行账号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBankAccountType[41];

/////////////////////////////////////////////////////////////////////////
/// TFtdcNameType是一个名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcNameType[101];

/////////////////////////////////////////////////////////////////////////
/// TFtdcTradeCodeType是一个业务功能码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcTradeCodeType[7];

/////////////////////////////////////////////////////////////////////////
/// TFtdcSerialType是一个流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcSerialType[13];

/////////////////////////////////////////////////////////////////////////
/// TFtdcDeviceIDType是一个渠道标志类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcDeviceIDType[3];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBankCodingForFutureType是一个期货公司银行编码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcBankCodingForFutureType[33];

/////////////////////////////////////////////////////////////////////////
/// TFtdcErrorMsgType是一个错误信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
/// TFtdcVolumeConditionType是一个成交量类型类型
/////////////////////////////////////////////////////////////////////////
///任何数量
#define QDP_FTDC_VC_AV '1'
///最小数量
#define QDP_FTDC_VC_MV '2'
///全部数量
#define QDP_FTDC_VC_CV '3'

typedef char TQdpFtdcVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcForceCloseReasonType是一个强平原因类型
/////////////////////////////////////////////////////////////////////////
///非强平
#define QDP_FTDC_FCR_NotForceClose '0'
///资金不足
#define QDP_FTDC_FCR_LackDeposit '1'
///客户超仓
#define QDP_FTDC_FCR_ClientOverPositionLimit '2'
///会员超仓
#define QDP_FTDC_FCR_MemberOverPositionLimit '3'
///持仓非整数倍
#define QDP_FTDC_FCR_NotMultiple '4'

typedef char TQdpFtdcForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcInstrumentStatusType是一个合约交易状态类型
/////////////////////////////////////////////////////////////////////////
///开盘前
#define QDP_FTDC_IS_BeforeTrading '0'
///非交易
#define QDP_FTDC_IS_NoTrading '1'
///连续交易
#define QDP_FTDC_IS_Continous '2'
///集合竞价报单
#define QDP_FTDC_IS_AuctionOrdering '3'
///集合竞价价格平衡
#define QDP_FTDC_IS_AuctionBalance '4'
///集合竞价撮合
#define QDP_FTDC_IS_AuctionMatch '5'
///收盘
#define QDP_FTDC_IS_Closed '6'
///金交所交割申报
#define QDP_FTDC_IS_SGE_Dery_App '7'
///金交所交割申报结束
#define QDP_FTDC_IS_SGE_Dery_Match '8'
///金交所中立仓申报
#define QDP_FTDC_IS_SGE_Mid_App '9'
///金交所交割申报撮合
#define QDP_FTDC_IS_SGE_Mid_Match 'a'
///大商所自动转换报警
#define QDP_FTDC_IS_DCE_MarketStatusAlarm 'b'

typedef char TQdpFtdcInstrumentStatusType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcOffsetFlagType是一个开平标志类型
/////////////////////////////////////////////////////////////////////////
///开仓
#define QDP_FTDC_OF_Open '0'
///平仓
#define QDP_FTDC_OF_Close '1'
///强平
#define QDP_FTDC_OF_ForceClose '2'
///平今
#define QDP_FTDC_OF_CloseToday '3'
///平昨
#define QDP_FTDC_OF_CloseYesterday '4'

typedef char TQdpFtdcOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcOrderPriceTypeType是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
///任意价
#define QDP_FTDC_OPT_AnyPrice '1'
///限价
#define QDP_FTDC_OPT_LimitPrice '2'
///最优价
#define QDP_FTDC_OPT_BestPrice '3'
///五档价
#define QDP_FTDC_OPT_FiveLevelPrice '4'

typedef char TQdpFtdcOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcOrderStatusType是一个报单状态类型
/////////////////////////////////////////////////////////////////////////
///全部成交
#define QDP_FTDC_OS_AllTraded '0'
///部分成交还在队列中
#define QDP_FTDC_OS_PartTradedQueueing '1'
///部分成交不在队列中
#define QDP_FTDC_OS_PartTradedNotQueueing '2'
///未成交还在队列中
#define QDP_FTDC_OS_NoTradeQueueing '3'
///未成交不在队列中
#define QDP_FTDC_OS_NoTradeNotQueueing '4'
///撤单
#define QDP_FTDC_OS_Canceled '5'
///订单已报入交易所未应答
#define QDP_FTDC_OS_AcceptedNoReply '6'

typedef char TQdpFtdcOrderStatusType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcUserTypeType是一个用户类型类型
/////////////////////////////////////////////////////////////////////////
///自然人
#define QDP_FTDC_UT_Person '1'
///理财产品
#define QDP_FTDC_UT_Product '2'
///期货公司管理员
#define QDP_FTDC_UT_Manager '3'
///席位
#define QDP_FTDC_UT_Seat '4'

typedef char TQdpFtdcUserTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTradingRightType是一个交易权限类型
/////////////////////////////////////////////////////////////////////////
///可以交易
#define QDP_FTDC_TR_Allow '0'
///只能平仓
#define QDP_FTDC_TR_CloseOnly '1'
///不能交易
#define QDP_FTDC_TR_Forbidden '2'

typedef char TQdpFtdcTradingRightType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTimeConditionType是一个有效期类型类型
/////////////////////////////////////////////////////////////////////////
///立即完成，否则撤销
#define QDP_FTDC_TC_IOC '1'
///本节有效
#define QDP_FTDC_TC_GFS '2'
///当日有效
#define QDP_FTDC_TC_GFD '3'
///指定日期前有效
#define QDP_FTDC_TC_GTD '4'
///撤销前有效
#define QDP_FTDC_TC_GTC '5'
///集合竞价有效
#define QDP_FTDC_TC_GFA '6'

typedef char TQdpFtdcTimeConditionType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcOrderSourceType是一个报单来源类型
/////////////////////////////////////////////////////////////////////////
///来自参与者
#define QDP_FTDC_OS_Participant '0'
///来自管理员
#define QDP_FTDC_OS_Administrator '1'

typedef char TQdpFtdcOrderSourceType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcDirectionType是一个买卖方向类型
/////////////////////////////////////////////////////////////////////////
///买
#define QDP_FTDC_D_Buy '0'
///卖
#define QDP_FTDC_D_Sell '1'

typedef char TQdpFtdcDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcCurrencyType是一个币种类型
/////////////////////////////////////////////////////////////////////////
///人民币
#define QDP_FTDC_C_RMB '1'
///美元
#define QDP_FTDC_C_UDOLLAR '2'

typedef char TQdpFtdcCurrencyType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcAccountDirectionType是一个出入金方向类型
/////////////////////////////////////////////////////////////////////////
///入金
#define QDP_FTDC_AD_In '1'
///出金
#define QDP_FTDC_AD_Out '2'

typedef char TQdpFtdcAccountDirectionType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcClientHedgeFlagType是一个客户投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define QDP_FTDC_CHF_Speculation '1'
///套利
#define QDP_FTDC_CHF_Arbitrage '2'
///套保
#define QDP_FTDC_CHF_Hedge '3'
///做市商
#define QDP_FTDC_CHF_MarketMaker '4'

typedef char TQdpFtdcClientHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcHedgeFlagType是一个投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define QDP_FTDC_CHF_Speculation '1'
///套利
#define QDP_FTDC_CHF_Arbitrage '2'
///套保
#define QDP_FTDC_CHF_Hedge '3'
///做市商
#define QDP_FTDC_CHF_MarketMaker '4'

typedef char TQdpFtdcHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcActionFlagType是一个操作标志类型
/////////////////////////////////////////////////////////////////////////
///删除
#define QDP_FTDC_AF_Delete '0'
///挂起
#define QDP_FTDC_AF_Suspend '1'
///激活
#define QDP_FTDC_AF_Active '2'
///修改
#define QDP_FTDC_AF_Modify '3'

typedef char TQdpFtdcActionFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcPositionTypeType是一个持仓类型类型
/////////////////////////////////////////////////////////////////////////
///净持仓
#define QDP_FTDC_PT_Net '1'
///综合持仓
#define QDP_FTDC_PT_Gross '2'

typedef char TQdpFtdcPositionTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcOptionsTypeType是一个期权类型类型
/////////////////////////////////////////////////////////////////////////
///非期权
#define QDP_FTDC_OT_NotOptions '0'
///看涨
#define QDP_FTDC_OT_CallOptions '1'
///看跌
#define QDP_FTDC_OT_PutOptions '2'

typedef char TQdpFtdcOptionsTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcIsActiveType是一个是否活跃类型
/////////////////////////////////////////////////////////////////////////
///不活跃
#define QDP_FTDC_UIA_NoActive '0'
///活跃
#define QDP_FTDC_UIA_Active '1'

typedef char TQdpFtdcIsActiveType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcProductClassType是一个产品类型类型
/////////////////////////////////////////////////////////////////////////
///期货
#define QDP_FTDC_PC_Futures '1'
///期权
#define QDP_FTDC_PC_Options '2'
///组合
#define QDP_FTDC_PC_Combination '3'
///即期
#define QDP_FTDC_PC_Spot '4'
///期转现
#define QDP_FTDC_PC_EFP '5'
///未知类型
#define QDP_FTDC_PC_Unknown '6'
///证券
#define QDP_FTDC_PC_Stocks '7'
///股票期权
#define QDP_FTDC_PC_StockOptions '8'
///金交所现货
#define QDP_FTDC_PC_SGE_SPOT '9'
///金交所递延
#define QDP_FTDC_PC_SGE_DEFER 'a'
///金交所远期
#define QDP_FTDC_PC_SGE_FOWARD 'b'

typedef char TQdpFtdcProductClassType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcCurrencyIDType是一个币种代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TQdpFtdcCurrencyIDType[4];

/////////////////////////////////////////////////////////////////////////
/// TFtdcBusinessTypeType是一个业务类别类型
/////////////////////////////////////////////////////////////////////////
///普通
#define QDP_FTDC_BT_Normal '1'
///撤单
#define QDP_FTDC_BT_Cancel '2'
/// ETF申赎
#define QDP_FTDC_BT_AppliedForRedeemed '3'
///最优五档即时成交剩余撤销
#define QDP_FTDC_BT_FiveLevelIOC '4'
///最优五档即时成交剩余转限价
#define QDP_FTDC_BT_FiveLevelGFD '5'
///即时成交剩余撤销
#define QDP_FTDC_BT_BestPriceIOC '6'
///全额成交或撤销
#define QDP_FTDC_BT_FOK '7'
///本方最优价格
#define QDP_FTDC_BT_SelfGFD '8'
///对方最优价格
#define QDP_FTDC_BT_CpGFD '9'
///金交所中立仓申报
#define QDP_FTDC_BT_SGEMidApp 'a'
///套利组合单
#define QDP_FTDC_BT_Combination 'b'
///套利非组合单
#define QDP_FTDC_BT_Grab 'c'
///金交所递延交割申报
#define QDP_FTDC_BT_SGEDeferDeliApp 'd'

typedef char TQdpFtdcBusinessTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcTransferStatusType是一个转账交易状态类型
/////////////////////////////////////////////////////////////////////////
///正常
#define QDP_FTDC_TS_TRFS_Normal '0'
///被冲正
#define QDP_FTDC_TS_TRFS_Repealed '1'

typedef char TQdpFtdcTransferStatusType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcFeePayFlagType是一个费用支付标志类型
/////////////////////////////////////////////////////////////////////////
///由受益方支付费用
#define QDP_FTDC_FPF_FPF_BEN '0'
///由发送方支付费用
#define QDP_FTDC_FPF_FPF_OUR '1'
///由发送方支付发起的费用，受益方支付接受的费用
#define QDP_FTDC_FPF_FPF_SHA '2'

typedef char TQdpFtdcFeePayFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcPwdFlagType是一个密码标志类型
/////////////////////////////////////////////////////////////////////////
///不核对
#define QDP_FTDC_PF_BPWDF_NoCheck '0'
///明文核对
#define QDP_FTDC_PF_BPWDF_BlankCheck '1'
///密文核对
#define QDP_FTDC_PF_BPWDF_EncryptCheck '2'

typedef char TQdpFtdcPwdFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcBankAccTypeType是一个银行账号类型类型
/////////////////////////////////////////////////////////////////////////
///存折
#define QDP_FTDC_BAT_VBAT_BankBook '1'
///储蓄卡
#define QDP_FTDC_BAT_VBAT_BankCard '2'
///信用卡
#define QDP_FTDC_BAT_VBAT_CreditCard '3'

typedef char TQdpFtdcBankAccTypeType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcYesNoIndicatorType是一个是否标志类型
/////////////////////////////////////////////////////////////////////////
///是
#define QDP_FTDC_YNI_YNI_Yes '0'
///否
#define QDP_FTDC_YNI_YNI_No '1'

typedef char TQdpFtdcYesNoIndicatorType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcAvailabilityFlagType是一个有效标志类型
/////////////////////////////////////////////////////////////////////////
///未确认
#define QDP_FTDC_ALF_AVAF_Invalid '0'
///有效
#define QDP_FTDC_ALF_AVAF_Valid '1'
///冲正
#define QDP_FTDC_ALF_AVAF_Repeal '2'
///失败
#define QDP_FTDC_ALF_AVAF_FAIL '3'

typedef char TQdpFtdcAvailabilityFlagType;

/////////////////////////////////////////////////////////////////////////
/// TFtdcPayDirectionType是一个金交所递延支付方向类型
/////////////////////////////////////////////////////////////////////////
///多付空
#define QDP_FTDC_PD_Buy '0'
///空付多
#define QDP_FTDC_PD_Sell '1'
///支付方向未定
#define QDP_FTDC_PD_Unknown '2'

typedef char TQdpFtdcPayDirectionType;

#endif

void TdApi::OnFrontConnected() {
  Task task = Task();
  task.task_name = ONFRONTCONNECTED;
  this->task_queue.push(task);
};

void TdApi::OnFrontDisconnected(int nReason) {
  Task task = Task();
  task.task_name = ONFRONTDISCONNECTED;
  task.task_id = nReason;
  this->task_queue.push(task);
};

void TdApi::OnHeartBeatWarning(int nTimeLapse) {
  Task task = Task();
  task.task_name = ONHEARTBEATWARNING;
  task.task_id = nTimeLapse{};
  ;
  this->task_queue.push(task);
};

void TdApi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID,
                       bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPERROR;

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,
                           CSecurityFtdcRspInfoField *pRspInfo, int nRequestID,
                           bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPUSERLOGIN;

  if (pRspUserLogin) {
    task.task_data = *pRspUserLogin;
  } else {
    CSecurityFtdcRspUserLoginField empty_data =
        CSecurityFtdcRspUserLoginField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,
                            CSecurityFtdcRspInfoField *pRspInfo, int nRequestID,
                            bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPUSERLOGOUT;

  if (pUserLogout) {
    task.task_data = *pUserLogout;
  } else {
    CSecurityFtdcUserLogoutField empty_data = CSecurityFtdcUserLogoutField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,
                             CSecurityFtdcRspInfoField *pRspInfo,
                             int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPORDERINSERT;

  if (pInputOrder) {
    task.task_data = *pInputOrder;
  } else {
    CSecurityFtdcInputOrderField empty_data = CSecurityFtdcInputOrderField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspOrderAction(
    CSecurityFtdcInputOrderActionField *pInputOrderAction,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPORDERACTION;

  if (pInputOrderAction) {
    task.task_data = *pInputOrderAction;
  } else {
    CSecurityFtdcInputOrderActionField empty_data =
        CSecurityFtdcInputOrderActionField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspUserPasswordUpdate(
    CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPUSERPASSWORDUPDATE;

  if (pUserPasswordUpdate) {
    task.task_data = *pUserPasswordUpdate;
  } else {
    CSecurityFtdcUserPasswordUpdateField empty_data =
        CSecurityFtdcUserPasswordUpdateField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspTradingAccountPasswordUpdate(
    CSecurityFtdcTradingAccountPasswordUpdateField
        *pTradingAccountPasswordUpdate,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPTRADINGACCOUNTPASSWORDUPDATE;

  if (pTradingAccountPasswordUpdate) {
    task.task_data = *pTradingAccountPasswordUpdate;
  } else {
    CSecurityFtdcTradingAccountPasswordUpdateField empty_data =
        CSecurityFtdcTradingAccountPasswordUpdateField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,
                             CSecurityFtdcRspInfoField *pRspInfo,
                             int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYEXCHANGE;

  if (pExchange) {
    task.task_data = *pExchange;
  } else {
    CSecurityFtdcExchangeField empty_data = CSecurityFtdcExchangeField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,
                               CSecurityFtdcRspInfoField *pRspInfo,
                               int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYINSTRUMENT;

  if (pInstrument) {
    task.task_data = *pInstrument;
  } else {
    CSecurityFtdcInstrumentField empty_data = CSecurityFtdcInstrumentField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,
                             CSecurityFtdcRspInfoField *pRspInfo,
                             int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYINVESTOR;

  if (pInvestor) {
    task.task_data = *pInvestor;
  } else {
    CSecurityFtdcInvestorField empty_data = CSecurityFtdcInvestorField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,
                                CSecurityFtdcRspInfoField *pRspInfo,
                                int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYTRADINGCODE;

  if (pTradingCode) {
    task.task_data = *pTradingCode;
  } else {
    CSecurityFtdcTradingCodeField empty_data = CSecurityFtdcTradingCodeField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryTradingAccount(
    CSecurityFtdcTradingAccountField *pTradingAccount,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYTRADINGACCOUNT;

  if (pTradingAccount) {
    task.task_data = *pTradingAccount;
  } else {
    CSecurityFtdcTradingAccountField empty_data =
        CSecurityFtdcTradingAccountField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryDepthMarketData(
    CSecurityFtdcDepthMarketDataField *pDepthMarketData,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYDEPTHMARKETDATA;

  if (pDepthMarketData) {
    task.task_data = *pDepthMarketData;
  } else {
    CSecurityFtdcDepthMarketDataField empty_data =
        CSecurityFtdcDepthMarketDataField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,
                                 CSecurityFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYBONDINTEREST;

  if (pBondInterest) {
    task.task_data = *pBondInterest;
  } else {
    CSecurityFtdcBondInterestField empty_data =
        CSecurityFtdcBondInterestField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryMarketRationInfo(
    CSecurityFtdcMarketRationInfoField *pMarketRationInfo,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYMARKETRATIONINFO;

  if (pMarketRationInfo) {
    task.task_data = *pMarketRationInfo;
  } else {
    CSecurityFtdcMarketRationInfoField empty_data =
        CSecurityFtdcMarketRationInfoField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryInstrumentCommissionRate(
    CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYINSTRUMENTCOMMISSIONRATE;

  if (pInstrumentCommissionRate) {
    task.task_data = *pInstrumentCommissionRate;
  } else {
    CSecurityFtdcInstrumentCommissionRateField empty_data =
        CSecurityFtdcInstrumentCommissionRateField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryETFInstrument(
    CSecurityFtdcETFInstrumentField *pETFInstrument,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYETFINSTRUMENT;

  if (pETFInstrument) {
    task.task_data = *pETFInstrument;
  } else {
    CSecurityFtdcETFInstrumentField empty_data =
        CSecurityFtdcETFInstrumentField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket,
                              CSecurityFtdcRspInfoField *pRspInfo,
                              int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYETFBASKET;

  if (pETFBasket) {
    task.task_data = *pETFBasket;
  } else {
    CSecurityFtdcETFBasketField empty_data = CSecurityFtdcETFBasketField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument,
                                 CSecurityFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYOFINSTRUMENT;

  if (pOFInstrument) {
    task.task_data = *pOFInstrument;
  } else {
    CSecurityFtdcOFInstrumentField empty_data =
        CSecurityFtdcOFInstrumentField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument,
                                 CSecurityFtdcRspInfoField *pRspInfo,
                                 int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYSFINSTRUMENT;

  if (pSFInstrument) {
    task.task_data = *pSFInstrument;
  } else {
    CSecurityFtdcSFInstrumentField empty_data =
        CSecurityFtdcSFInstrumentField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder,
                          CSecurityFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYORDER;

  if (pOrder) {
    task.task_data = *pOrder;
  } else {
    CSecurityFtdcOrderField empty_data = CSecurityFtdcOrderField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade,
                          CSecurityFtdcRspInfoField *pRspInfo, int nRequestID,
                          bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYTRADE;

  if (pTrade) {
    task.task_data = *pTrade;
  } else {
    CSecurityFtdcTradeField empty_data = CSecurityFtdcTradeField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryInvestorPosition(
    CSecurityFtdcInvestorPositionField *pInvestorPosition,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYINVESTORPOSITION;

  if (pInvestorPosition) {
    task.task_data = *pInvestorPosition;
  } else {
    CSecurityFtdcInvestorPositionField empty_data =
        CSecurityFtdcInvestorPositionField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRtnOrder(CSecurityFtdcOrderField *pOrder) {
  Task task = Task();
  task.task_name = ONRTNORDER;

  if (pOrder) {
    task.task_data = *pOrder;
  } else {
    CSecurityFtdcOrderField empty_data = CSecurityFtdcOrderField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }
  this->task_queue.push(task);
};

void TdApi::OnRtnTrade(CSecurityFtdcTradeField *pTrade) {
  Task task = Task();
  task.task_name = ONRTNTRADE;

  if (pTrade) {
    task.task_data = *pTrade;
  } else {
    CSecurityFtdcTradeField empty_data = CSecurityFtdcTradeField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }
  this->task_queue.push(task);
};

void TdApi::OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,
                                CSecurityFtdcRspInfoField *pRspInfo) {
  Task task = Task();
  task.task_name = ONERRRTNORDERINSERT;

  if (pInputOrder) {
    task.task_data = *pInputOrder;
  } else {
    CSecurityFtdcInputOrderField empty_data = CSecurityFtdcInputOrderField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  this->task_queue.push(task);
};

void TdApi::OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,
                                CSecurityFtdcRspInfoField *pRspInfo) {
  Task task = Task();
  task.task_name = ONERRRTNORDERACTION;

  if (pOrderAction) {
    task.task_data = *pOrderAction;
  } else {
    CSecurityFtdcOrderActionField empty_data = CSecurityFtdcOrderActionField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  this->task_queue.push(task);
};

void TdApi::OnRspFundOutByLiber(
    CSecurityFtdcInputFundTransferField *pInputFundTransfer,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPFUNDOUTBYLIBER;

  if (pInputFundTransfer) {
    task.task_data = *pInputFundTransfer;
  } else {
    CSecurityFtdcInputFundTransferField empty_data =
        CSecurityFtdcInputFundTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer) {
  Task task = Task();
  task.task_name = ONRTNFUNDOUTBYLIBER;

  if (pFundTransfer) {
    task.task_data = *pFundTransfer;
  } else {
    CSecurityFtdcFundTransferField empty_data =
        CSecurityFtdcFundTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }
  this->task_queue.push(task);
};

void TdApi::OnErrRtnFundOutByLiber(
    CSecurityFtdcInputFundTransferField *pInputFundTransfer,
    CSecurityFtdcRspInfoField *pRspInfo) {
  Task task = Task();
  task.task_name = ONERRRTNFUNDOUTBYLIBER;

  if (pInputFundTransfer) {
    task.task_data = *pInputFundTransfer;
  } else {
    CSecurityFtdcInputFundTransferField empty_data =
        CSecurityFtdcInputFundTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  this->task_queue.push(task);
};

void TdApi::OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer) {
  Task task = Task();
  task.task_name = ONRTNFUNDINBYBANK;

  if (pFundTransfer) {
    task.task_data = *pFundTransfer;
  } else {
    CSecurityFtdcFundTransferField empty_data =
        CSecurityFtdcFundTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }
  this->task_queue.push(task);
};

void TdApi::OnRspQryFundTransferSerial(
    CSecurityFtdcFundTransferField *pFundTransfer,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYFUNDTRANSFERSERIAL;

  if (pFundTransfer) {
    task.task_data = *pFundTransfer;
  } else {
    CSecurityFtdcFundTransferField empty_data =
        CSecurityFtdcFundTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspFundInterTransfer(
    CSecurityFtdcFundInterTransferField *pFundInterTransfer,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPFUNDINTERTRANSFER;

  if (pFundInterTransfer) {
    task.task_data = *pFundInterTransfer;
  } else {
    CSecurityFtdcFundInterTransferField empty_data =
        CSecurityFtdcFundInterTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRspQryFundInterTransferSerial(
    CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,
    CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
  Task task = Task();
  task.task_name = ONRSPQRYFUNDINTERTRANSFERSERIAL;

  if (pFundInterTransferSerial) {
    task.task_data = *pFundInterTransferSerial;
  } else {
    CSecurityFtdcFundInterTransferSerialField empty_data =
        CSecurityFtdcFundInterTransferSerialField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  task.task_id = nRequestID;
  task.task_last = bIsLast;
  this->task_queue.push(task);
};

void TdApi::OnRtnFundInterTransferSerial(
    CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial) {
  Task task = Task();
  task.task_name = ONRTNFUNDINTERTRANSFERSERIAL;

  if (pFundInterTransferSerial) {
    task.task_data = *pFundInterTransferSerial;
  } else {
    CSecurityFtdcFundInterTransferSerialField empty_data =
        CSecurityFtdcFundInterTransferSerialField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }
  this->task_queue.push(task);
};

void TdApi::OnErrRtnFundInterTransfer(
    CSecurityFtdcFundInterTransferField *pFundInterTransfer,
    CSecurityFtdcRspInfoField *pRspInfo) {
  Task task = Task();
  task.task_name = ONERRRTNFUNDINTERTRANSFER;

  if (pFundInterTransfer) {
    task.task_data = *pFundInterTransfer;
  } else {
    CSecurityFtdcFundInterTransferField empty_data =
        CSecurityFtdcFundInterTransferField();
    memset(&empty_data, 0, sizeof(empty_data));
    task.task_data = empty_data;
  }

  if (pRspInfo) {
    task.task_error = *pRspInfo;
  } else {
    CSecurityFtdcRspInfoField empty_error = CSecurityFtdcRspInfoField();
    memset(&empty_error, 0, sizeof(empty_error));
    task.task_error = empty_error;
  }
  this->task_queue.push(task);
};

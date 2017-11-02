// Copyright 2017 <>
#include <stdio.h>
#define MOCK_TEST
#ifdef MOCK_TEST // :x: for test
#include "CppUTestExt/MockSupport.h"
#endif // :x: for test


int TunerLock(int tsID) {
  printf("\033[1;36m[%s][%d] :x: TunerLock [0x%x]\033[m\n"
      , __FUNCTION__, __LINE__, tsID);
  mock().actualCall(__FUNCTION__);
  return 0;
}

int setDecoder(int OnOff) {
  printf("\033[1;36m[%s][%d] :x: decoder [%d] \033[m\n"
      , __FUNCTION__, __LINE__, OnOff);
  mock().actualCall(__FUNCTION__);
  return 0;
}

int GetSiInfo(int svcNum) {
  printf("\033[1;36m[%s][%d] :x: GetSiInfo [0x%x]\033[m\n"
      , __FUNCTION__, __LINE__, svcNum);
  mock().actualCall(__FUNCTION__);
  return 0;
}

int DisplayEpgBanner(int svcNum, int tsID) {
  printf("\033[1;36m[%s][%d] :x: Display Tv EPG Info Banner \033[m\n",
      __FUNCTION__, __LINE__);
  mock().actualCall(__FUNCTION__);
  return 0;
}
int TvSvcZapping(int svcNum, int tsID) {
  // 튜너를 락킹한다
  TunerLock(tsID);
  // 디코더를 off
  setDecoder(false);
  // 새로운 영상에 따라 디코더를 on
  setDecoder(true);

  // Service Info.(SI) 정보를 얻는다
  GetSiInfo(svcNum);
  // 방송정보 배너를 보여준다
  DisplayEpgBanner(svcNum, tsID);

  return 0;
}

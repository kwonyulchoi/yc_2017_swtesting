#include <gtest/gtest.h>
#include "libmodule.h"
#include "fsm.h"
#include "fsm_turnsteel.h"

// 스테이트 생성 
// 잠김상태  ; state_locked
State state_locked(&on_locked_enter, &on_locked_exit);  
// 풀림상태 ; state_unlocked
State state_unlocked(&on_unlocked_enter, &on_unlocked_exit); 

class FSMTest : public testing::Test {
  protected:
    virtual void SetUp() {
      // Init stuff
      
      // 상태기계를 생성한다 ; 시작 상태는 state_locked - 잠김상태
      m_pFsm= new Fsm(&state_locked);

      // 상태 전이를 추가한다
      
      // 잠김상태에서 EVT_COIN(동전삽입) 이벤트 발생하면
      // 풀림상태로 전이하고 전이함수 on_trans_locked_unlocked 호출
      m_pFsm->add_transition(&state_locked, &state_unlocked,
              EVT_COIN,
              &on_trans_locked_unlocked,NULL);

      // 풀림상태에서 EVT_PUSH(밀기) 이벤트 발생하면
      // 잠김상태로 전이하고 전이함수 on_trans_unlocked_locked 호출
      m_pFsm->add_transition(&state_unlocked, &state_locked,
              EVT_PUSH,
              &on_trans_unlocked_locked,NULL);


    }
    virtual void TearDown() {
      // Uninit stuff
      delete m_pFsm;
      m_pFsm = NULL;
    }
    Fsm* m_pFsm;
};

TEST_F(FSMTest, state_coverage_00) {
  // 현재 상태 확인 --> 잠김상태
  EXPECT_EQ(&state_locked,m_pFsm->get_CurState());
  // 동전삽입 발생 시키기
  m_pFsm->trigger(EVT_COIN,(void*)NULL); 

  // 현재 상태 확인 --> 풀림상태
  EXPECT_EQ(&state_unlocked,m_pFsm->get_CurState());

  // 밀기 이벤트 발생 시키기
  m_pFsm->trigger(EVT_PUSH,(void*)NULL); 

  // 현재 상태 확인 --> 잠김상태
  EXPECT_EQ(&state_locked,m_pFsm->get_CurState());


}
TEST_F(FSMTest, state_transition_coverage_00) {
  // Write Here

// 복사했음
//////////////////////////////////////////////////////////////////////////////
  // 현재 상태 확인 --> 잠김상태
  EXPECT_EQ(&state_locked,m_pFsm->get_CurState());

// locked 밀기 이벤트를 발생시켰지만 그래도 locked 인지 검증
  // 밀기 이벤트 발생 시키기
  m_pFsm->trigger(EVT_PUSH,(void*)NULL); 

//////////////////////////////////////////////////////////////////////////////
  // 동전삽입 발생 시키기
  m_pFsm->trigger(EVT_COIN,(void*)NULL); 

  // 현재 상태 확인 --> 풀림상태
  EXPECT_EQ(&state_unlocked,m_pFsm->get_CurState());


  // 일부러 에러 발생 시켜본다
  // 현재 상태 확인 --> 풀림상태
  //EXPECT_EQ(&state_locked,m_pFsm->get_CurState());

//////////////////////////////////////////////////////////////////////////////
  // 풀림 상태에서 동전삽입 발생 시키기
  m_pFsm->trigger(EVT_COIN,(void*)NULL); 

  // 현재 상태 확인 --> 풀림상태
  EXPECT_EQ(&state_unlocked,m_pFsm->get_CurState());

///////////////////////////////////////////////////////////////////////////////
  // 밀기 이벤트 발생 시키기
  m_pFsm->trigger(EVT_PUSH,(void*)NULL); 

  // 현재 상태 확인 --> 잠김상태
  EXPECT_EQ(&state_locked,m_pFsm->get_CurState());
























}


int main(int argc, char *argv[])
{
  char bus_addr[1024] ={ 0 , };
  char cmd[2048] ={ 0 , };
  int custom_argc=2;
  char* pArgv[2];
  char* pCmd1 =(char*)"--gtest_output=xml:swut_report.xml";
  pArgv[1] = pCmd1;

  ::testing::InitGoogleTest(&custom_argc,(char**)pArgv);
  return RUN_ALL_TESTS();
}

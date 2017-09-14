#include <gtest/gtest.h>
#include "libmodule.h"

// Test template    

class SampleTest : public testing::Test {
  protected:
    virtual void SetUp() {
    }
    virtual void TearDown() {
    }
};
// 사용법 
// vector<int> *primes = new vector<int>; // 소수를 담을 벡터 변수
// EXPECT_EQ(1,get_prime(primes,3)); // 3 보다 작은 소수 --> 2가 유일, 1개
// primes->clear(); // 벡터 값을 초기화 한다

TEST_F(SampleTest, StatementCovTest) {

}

TEST_F(SampleTest, BranchDesicionCovTest) {


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

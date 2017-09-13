#include <gtest/gtest.h>
#include "libmodule.h"

using namespace std;
// Test template    

class SampleTest : public testing::Test {
  protected:
    virtual void SetUp() {
    }
    virtual void TearDown() {
    }
};
 
//TEST_F(SampleTest, BasicTest00) {
//  EXPECT_EQ(testmodule_EP_BVA(), 7);
//}

TEST_F(SampleTest, EP) {
  string expected;
  expected ="A";
  EXPECT_EQ(expected, GetGrade(93) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(82) );
}

TEST_F(SampleTest, BVA) {
  string expected;
  expected ="A";
  EXPECT_EQ(expected, GetGrade(93) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(82) );
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

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

// 사용
  
//  // Table중에서 "aaa" item 0번째 있기 때문에 0을 반환하는 것이 기대값
//  EXPECT_EQ(0, binsearch("aaa",Table01,7));

TEST_F(SampleTest, StatementCovTest) {

}

TEST_F(SampleTest, BranchDesicionCovTest) {

struct key Table01[7] = { {"aaa"},{"bbb"},{"ccc"},{"ddd"},
   {"eee"},{"fff"},{"ggg"} }; // 7 items
  int Table01_size = 7; // 7 items
	EXPECT_EQ(0,binsearch("aaa",Table01,7));
EXPECT_EQ(1,binsearch("bbb",Table01,7));
EXPECT_EQ(2,binsearch("ccc",Table01,7));
EXPECT_EQ(3,binsearch("ddd",Table01,7));
EXPECT_EQ(4,binsearch("eee",Table01,7));
EXPECT_EQ(5,binsearch("fff",Table01,7));
EXPECT_EQ(6,binsearch("ggg",Table01,7));

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

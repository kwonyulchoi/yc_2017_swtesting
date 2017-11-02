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
//  struct key Table01[7] = { {"aaa"},{"bbb"},{"ccc"},{"ddd"},
//    {"eee"},{"fff"},{"ggg"} }; // 7 items
//  int Table01_size = 7; // 7 items
//  // Table중에서 "aaa" item 0번째 있기 때문에 0을 반환하는 것이 기대값
//  EXPECT_EQ(0, binsearch("aaa",Table01,7));

TEST_F(SampleTest, StatementCovTest) {
	
}

TEST_F(SampleTest, BranchDesicionCovTest) {
	struct key Table01[0] = {}; 
	int Table01_size = 0;
	struct key Table02[5] = { {"a"},{"b"},{"c"},{"d"},{"e"}}; 
	int Table02_size = 5;

	EXPECT_EQ(-1,binsearch("a",Table01, 0)) ;
	EXPECT_EQ(1,binsearch("b",Table02, 5)) ;
	EXPECT_EQ(2,binsearch("c",Table02, 5)) ;
	EXPECT_EQ(3,binsearch("d",Table02, 5)) ;

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

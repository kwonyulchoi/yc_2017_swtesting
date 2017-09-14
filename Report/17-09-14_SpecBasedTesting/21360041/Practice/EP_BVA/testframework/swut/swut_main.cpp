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
  expected ="D";
  EXPECT_EQ(expected, GetGrade(30) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-30) );
  
  expected ="A";
  EXPECT_EQ(expected, GetGrade(95) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(85) );

  expected ="C";
  EXPECT_EQ(expected, GetGrade(65) );

  expected ="D";
  EXPECT_EQ(expected, GetGrade(45) );

  expected ="F";
  EXPECT_EQ(expected, GetGrade(25) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(134) );
}

TEST_F(SampleTest, BVA) {
  string expected;
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-1) );

  expected ="F";
  EXPECT_EQ(expected, GetGrade(0) );

  expected ="F";
  EXPECT_EQ(expected, GetGrade(1) );
  
  expected ="A";
  EXPECT_EQ(expected, GetGrade(99) );

  expected ="A";
  EXPECT_EQ(expected, GetGrade(100) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(101) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32768) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32767) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32766) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32766) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32767) );

  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32768) );

  expected ="A";
  EXPECT_EQ(expected, GetGrade(90) );

  expected ="A";
  EXPECT_EQ(expected, GetGrade(91) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(88) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(89) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(70) );

  expected ="B";
  EXPECT_EQ(expected, GetGrade(71) );

  expected ="C";
  EXPECT_EQ(expected, GetGrade(69) );

  expected ="C";
  EXPECT_EQ(expected, GetGrade(68) );

  expected ="C";
  EXPECT_EQ(expected, GetGrade(50) );

  expected ="C";
  EXPECT_EQ(expected, GetGrade(51) );

  expected ="D";
  EXPECT_EQ(expected, GetGrade(49) );

  expected ="D";
  EXPECT_EQ(expected, GetGrade(48) );

  expected ="D";
  EXPECT_EQ(expected, GetGrade(30) );

  expected ="D";
  EXPECT_EQ(expected, GetGrade(31) );

  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );
 
  expected ="F";
  EXPECT_EQ(expected, GetGrade(28) );


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

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

  //TC01
  expected = "F";
  EXPECT_EQ(expected, GetGrade(29) );

  //TC02
  expected = "Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-30) );

  //TC03
  expected = "A";
  EXPECT_EQ(expected, GetGrade(95) );

  //TC04
  expected = "B";
  EXPECT_EQ(expected, GetGrade(85) );

  //TC05
  expected = "C";
  EXPECT_EQ(expected, GetGrade(65) );

  //TC06
  expected = "D";
  EXPECT_EQ(expected, GetGrade(45) );

  //TC07
  expected = "F";
  EXPECT_EQ(expected, GetGrade(25) );

  //TC08
  expected = "Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(134) );
}

TEST_F(SampleTest, BVA) {
  string expected;

  //TC01, TCOV 1-1-1
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-1) );

  //TC02, TCOV 1-1-2
  expected ="F";
  EXPECT_EQ(expected, GetGrade(0) );

  //TC03, TCOV 1-1-3
  expected ="F";
  EXPECT_EQ(expected, GetGrade(1) );
  
  //TC04, TCOV 1-2-1
  expected ="A";
  EXPECT_EQ(expected, GetGrade(99) );

  //TC05, TCOV 1-2-2
  expected ="A";
  EXPECT_EQ(expected, GetGrade(100) );

  //TC06, TCOV 1-2-3
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(101) );

  //TC07, TCOV 2-1-1
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32768) );

  //TC08, TCOV 2-1-2
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32767) );

  //TC09, TCOV 2-1-3
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32766) );

  //TC10, TCOV 2-2-1
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32766) );

  //TC11, TCOV 2-2-2
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32767) );

  //TC12, TCOV 2-2-3
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32768) );

  //TC13, TCOV 3-2-1
  expected ="A";
  EXPECT_EQ(expected, GetGrade(90) );

  //TC14, TCOV 3-2-2
  expected ="A";
  EXPECT_EQ(expected, GetGrade(91) );

  //TC15, TCOV 4-1-1
  expected ="B";
  EXPECT_EQ(expected, GetGrade(88) );

  //TC16, TCOV 4-1-2
  expected ="B";
  EXPECT_EQ(expected, GetGrade(89) );

  //TC17, TCOV 4-2-1
  expected ="B";
  EXPECT_EQ(expected, GetGrade(70) );

  //TC18, TCOV 4-2-2
  expected ="B";
  EXPECT_EQ(expected, GetGrade(71) );

  //TC19, TCOV 5-1-1
  expected ="C";
  EXPECT_EQ(expected, GetGrade(69) );

  //TC20, TCOV 5-1-2
  expected ="C";
  EXPECT_EQ(expected, GetGrade(68) );

  //TC21, TCOV 6-1-1
  expected ="C";
  EXPECT_EQ(expected, GetGrade(50) );

  //TC22, TCOV 6-1-2
  expected ="C";
  EXPECT_EQ(expected, GetGrade(51) );

  //TC23, TCOV 6-2-1
  expected ="D";
  EXPECT_EQ(expected, GetGrade(49) );

  //TC24, TCOV 6-2-2
  expected ="D";
  EXPECT_EQ(expected, GetGrade(48) );

  //TC25, TCOV 7-1-1
  expected ="D";
  EXPECT_EQ(expected, GetGrade(30) );

  //TC26, TCOV 7-1-2
  expected ="D";
  EXPECT_EQ(expected, GetGrade(31) );

  //TC27, TCOV 7-2-1
  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );

  //TC28, TCOV 7-2-2
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

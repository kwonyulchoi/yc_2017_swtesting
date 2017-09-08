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

  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );

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

  //TC01
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-1) );

  //TC02
    expected ="F";
  EXPECT_EQ(expected, GetGrade(0) );

  //TC03
    expected ="F";
  EXPECT_EQ(expected, GetGrade(1) );

  //TC04
   expected ="A";
  EXPECT_EQ(expected, GetGrade(99) );

  //TC05
   expected ="A";
  EXPECT_EQ(expected, GetGrade(100) );

  //TC06
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(101) );

  //TC07
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32768) );

  //TC08
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32767) );

  //TC09
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32766) );

  //TC10
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32766) );

  //TC11
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32767) );

  //TC12
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32768) );

  //TC13
  expected ="A";
  EXPECT_EQ(expected, GetGrade(90) );

  //TC14
  expected ="A";
  EXPECT_EQ(expected, GetGrade(91) );

  //TC15
  expected ="B";
  EXPECT_EQ(expected, GetGrade(88) );

  //TC16
  expected ="B";
  EXPECT_EQ(expected, GetGrade(89) );

  //TC17
  expected ="B";
  EXPECT_EQ(expected, GetGrade(70) );

  //TC18
  expected ="B";
  EXPECT_EQ(expected, GetGrade(71) );

  //TC19
  expected ="C";
  EXPECT_EQ(expected, GetGrade(69) );

  //TC20
  expected ="C";
  EXPECT_EQ(expected, GetGrade(68) );

  //TC21
  expected ="C";
  EXPECT_EQ(expected, GetGrade(50) );

  //TC22
  expected ="C";
  EXPECT_EQ(expected, GetGrade(51) );
  
  //TC23
  expected ="D";
  EXPECT_EQ(expected, GetGrade(49) );

  //TC24
  expected ="D";
  EXPECT_EQ(expected, GetGrade(48) );

  //TC25
  expected ="D";
  EXPECT_EQ(expected, GetGrade(30) );
  
  //TC26
    expected ="D";
  EXPECT_EQ(expected, GetGrade(31) );

  //TC27
  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );

  //TC28
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

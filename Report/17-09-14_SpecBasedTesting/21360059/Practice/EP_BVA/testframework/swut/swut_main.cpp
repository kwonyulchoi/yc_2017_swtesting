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

  // TC 01
  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );

  // TC 02
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-30) );

  // TC 03
  expected ="A";
  EXPECT_EQ(expected, GetGrade(95) );

  // TC 04
  expected ="B";
  EXPECT_EQ(expected, GetGrade(85) );

  // TC 05
  expected ="C";
  EXPECT_EQ(expected, GetGrade(65) );

  // TC 06
  expected ="D";
  EXPECT_EQ(expected, GetGrade(45) );

  // TC 07
  expected ="F";
  EXPECT_EQ(expected, GetGrade(25) );

  // TC 08
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(134) );
}

TEST_F(SampleTest, BVA) {
  string expected;

  // TC 01
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-1) );

 // TC 02
  expected ="F";
  EXPECT_EQ(expected, GetGrade(0) );

 // TC 03
  expected ="F";
  EXPECT_EQ(expected, GetGrade(1) );

 // TC 04
  expected ="A";
  EXPECT_EQ(expected, GetGrade(99) );

 // TC 05
  expected ="A";
  EXPECT_EQ(expected, GetGrade(100) );

 // TC 06
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(101) );

 // TC 07
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32768) );

 // TC 08
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32767) );

 // TC 09
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(-32766) );

 // TC 10
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32766) );

 // TC 11
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32767) );

 // TC 12
  expected ="Wrong Input Value";
  EXPECT_EQ(expected, GetGrade(32768) );

 // TC 13
  expected ="A";
  EXPECT_EQ(expected, GetGrade(90) );

 // TC 14
  expected ="A";
  EXPECT_EQ(expected, GetGrade(91) );

 // TC 15
  expected ="B";
  EXPECT_EQ(expected, GetGrade(88) );

 // TC 16
  expected ="B";
  EXPECT_EQ(expected, GetGrade(89) );

 // TC 17
  expected ="B";
  EXPECT_EQ(expected, GetGrade(70) );

 // TC 18
  expected ="B";
  EXPECT_EQ(expected, GetGrade(71) );

 // TC 19
  expected ="C";
  EXPECT_EQ(expected, GetGrade(69) );

 // TC 20
  expected ="C";
  EXPECT_EQ(expected, GetGrade(68) );

 // TC 21
  expected ="C";
  EXPECT_EQ(expected, GetGrade(50) );

 // TC 22
  expected ="C";
  EXPECT_EQ(expected, GetGrade(51) );

 // TC 23
  expected ="D";
  EXPECT_EQ(expected, GetGrade(49) );

 // TC 24
  expected ="D";
  EXPECT_EQ(expected, GetGrade(48) );

 // TC 25
  expected ="D";
  EXPECT_EQ(expected, GetGrade(30) );

 // TC 26
  expected ="D";
  EXPECT_EQ(expected, GetGrade(31) );

 // TC 27
  expected ="F";
  EXPECT_EQ(expected, GetGrade(29) );

 // TC 28
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

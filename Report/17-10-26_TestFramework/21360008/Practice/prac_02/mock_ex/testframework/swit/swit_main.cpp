#include <stdio.h>
#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTestExt/MockSupport.h"
#include "TvSvcZapping.h"

TEST_GROUP(mock_ex)
{
    void setup()
    {
        // Init stuff
        mock().clear();
    }

    void teardown()
    {
        // Uninit stuff
        mock().clear();
    }

};

TEST(mock_ex, call_verification)
{
<<<<<<< HEAD:Report/17-10-26_TestFramework/21360069/Practice/prac_02/mock_ex/testframework/swit/swit_main.cpp
	mock().expectOneCall("TunerLock");
	mock().expectNCalls(2, "setDecoder");
	mock().expectOneCall("GetSiInfo");
	mock().expectOneCall("DisplayEpgBanner");

	TvSvcZapping(0x43, 0x11);

	mock().checkExpectations();
}

=======
  mock().expectOneCall("TunerLock").withCallOrder(1);
  mock().expectOneCall("setDecoder").withCallOrder(2);
  mock().expectOneCall("setDecoder").withCallOrder(3);
  mock().expectOneCall("GetSiInfo").withCallOrder(4);
  mock().expectOneCall("DisplayEpgBanner").withCallOrder(5);
>>>>>>> aae229c1b60d74835056537717b35efbb33710f0:Report/17-10-26_TestFramework/21360008/Practice/prac_02/mock_ex/testframework/swit/swit_main.cpp

  TvSvcZapping(0x1b3, 0x77);

  mock().checkExpectations();
}


int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

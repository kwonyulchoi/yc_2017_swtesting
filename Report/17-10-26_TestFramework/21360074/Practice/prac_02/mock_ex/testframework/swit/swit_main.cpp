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
	mock().expectOneCall(1,"TunerLock");
	mock().expectNCalls(2,"setDecoder");
	mock().expectOneCall("GetSiInfo");
	mock().expectOneCall("DisplayEpgBanner");
	mock().expectOneCall("DisplayEpgBanner");
	TvSvcZapping(0X43,0x11);
	mock().checkExpectations();
}





int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

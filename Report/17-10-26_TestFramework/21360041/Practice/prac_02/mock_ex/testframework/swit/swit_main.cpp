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
    mock().expectOneCall("TunerLock").withCallOrder(1);
    mock().expectOneCall("setDecoder").withCallOrder(2);
    mock().expectOneCall("setDecoder").withCallOrder(3);
    mock().expectOneCall("GetSiInfo").withCallOrder(4);
    mock().expectOneCall("DisplayEpgBanner").withCallOrder(5);

    TvSvcZapping(0x43,0x11);
    mock().checkExpectations();
}





int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

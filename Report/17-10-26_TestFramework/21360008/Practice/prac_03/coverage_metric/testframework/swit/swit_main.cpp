#include "CppUTest/CommandLineTestRunner.h"


TEST_GROUP(mock_ex)
{
    void setup()
    {
        // Init stuff
    }

    void teardown()
    {
        // Uninit stuff
    }

};





int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

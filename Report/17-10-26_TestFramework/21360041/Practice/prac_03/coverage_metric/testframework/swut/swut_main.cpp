#include "CppUTest/CommandLineTestRunner.h"
#include "CircularBuffer.h" 


TEST_GROUP(circular_test)
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


TEST(circular_test, basic_test)
{
  CircularBuffer buff;
  buff.Put(3);
  buff.Print();

}



int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

#include <stdio.h>
#include "CircularBuffer.h"
#include "CppUTest/CommandLineTestRunner.h"


TEST_GROUP(CircularBuffer)
{
  CircularBuffer* buff;
  void setup()
  {
    // Init stuff
    buff = new CircularBuffer;
  }

  void teardown()
  {
    // Uninit stuff
    delete buff;
  }

};

TEST(CircularBuffer, enqueue)
{
  // Enqueue 테스트

  // Dequeue 및 값 확인

}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 

  // 모든값 Dequeue  

  // empty 확인 
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 

  // full 확인 
  
  // 모든값 Dequeue  

  // empty 확인 

}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

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
  buff -> Put(10);
  buff -> Put(11);
  buff -> Put(12);
  buff -> Put(13);
  // Dequeue 및 값 확인
  CHECK_EQUAL(10, buff->Get());
  CHECK_EQUAL(11, buff->Get());
  CHECK_EQUAL(12, buff->Get());
  CHECK_EQUAL(13, buff->Get());
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
  buff -> Put(10);
  buff -> Put(11);
  buff -> Put(12);
  buff -> Put(13);

  // 모든값 Dequeue  
  CHECK_EQUAL(10, buff->Get());
  CHECK_EQUAL(11, buff->Get());
  CHECK_EQUAL(12, buff->Get());
  CHECK_EQUAL(13, buff->Get());


  // empty 확인 
  CHECK_EQUAL(true, buff->IsEmpty());
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
  buff -> Put(10);
  buff -> Put(11);
  buff -> Put(12);
  buff -> Put(13);
  buff -> Put(14);

  // full 확인 
  CHECK_EQUAL(true, buff->IsFull());
  
  // 모든값 Dequeue  
  CHECK_EQUAL(10, buff->Get());
  CHECK_EQUAL(11, buff->Get());
  CHECK_EQUAL(12, buff->Get());
  CHECK_EQUAL(13, buff->Get());
  CHECK_EQUAL(14, buff->Get());

  // empty 확인 
  CHECK_EQUAL(true, buff->IsEmpty());
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

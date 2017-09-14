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
  buff->Put(1);
  buff->Put(2);

  // Dequeue 및 값 확인
  CHECK_EQUAL(1,buff->Get());
  CHECK_EQUAL(2,buff->Get());
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue
  buff->Put(3);
  buff->Put(4);
  buff->Put(5);
  buff->Put(6);
  // 모든값 Dequeue  
  CHECK_EQUAL(3,buff->Get());
  CHECK_EQUAL(4,buff->Get());
  CHECK_EQUAL(5,buff->Get());
  CHECK_EQUAL(6,buff->Get());
  // empty 확인 
  CHECK_EQUAL(true, buff->IsEmpty());
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
  buff->Put(7);
  buff->Put(8);
  buff->Put(9);
  buff->Put(10);
  buff->Put(11);
  // full 확인 
  CHECK_EQUAL(true, buff->IsFull());
  // 모든값 Dequeue  
  CHECK_EQUAL(7,buff->Get());
  CHECK_EQUAL(8,buff->Get());
  CHECK_EQUAL(9,buff->Get());
  CHECK_EQUAL(10,buff->Get());
  CHECK_EQUAL(11,buff->Get());
  // empty 확인 
  CHECK_EQUAL(true, buff->IsEmpty());
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

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
   buff->Put(32);
   buff->Put(13);
   
  // Dequeue 및 값 확인
   CHECK_EQUAL(buff->Get(),32);
   CHECK_EQUAL(buff->Get(),11);
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
   buff->Put(32);
   buff->Put(11);
   buff->Put(12);
   buff->Put(13);
  // 모든값 Dequeue  
   CHECK_EQUAL(buff->Get(),32);
   CHECK_EQUAL(buff->Get(),11);
   CHECK_EQUAL(buff->Get(),12);
   CHECK_EQUAL(buff->Get(),13);
  // empty 확인 
   CHECK_EQUAL(true,buff->IsEmpty());
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
   buff->Put(32);
   buff->Put(11);
   buff->Put(12);
   buff->Put(13);
   buff->Put(14);
  // full 확인 
   CHECK_EQUAL(true,buff->IsFull());
  // 모든값 Dequeue  
   CHECK_EQUAL(buff->Get(),32);
   CHECK_EQUAL(buff->Get(),11);
   CHECK_EQUAL(buff->Get(),12);
   CHECK_EQUAL(buff->Get(),13);
   CHECK_EQUAL(buff->Get(),14);

  // empty 확인 
  CHECK_EQUAL(true,buff->IsEmpty());
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

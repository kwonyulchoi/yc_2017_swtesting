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
  // Dequeue 및 값 확인
  CHECK_EQUAL(buff->Get(),1);
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
  buff->Put(32);
  buff->Put(11);
  buff->Put(12);
  buff->Put(13);
  // 모든값 Dequeue  
  CHECK_EQUAL(32,buff->Get()); 
  CHECK_EQUAL(11,buff->Get());
  CHECK_EQUAL(12,buff->Get());
  CHECK_EQUAL(13,buff->Get());
  // empty 확인 
  CHECK_EQUAL(buff->IsEmpty(), true);
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
  buff->Put(1);
  buff->Put(2);
  buff->Put(3);
  buff->Put(4);
  buff->Put(5);
  // full 확인 
  CHECK_EQUAL(buff->IsFull(), true);
  
  // 모든값 Dequeue  


  CHECK_EQUAL(buff->Get(), 1);
  CHECK_EQUAL(buff->Get(), 2);
  CHECK_EQUAL(buff->Get(), 3);
  CHECK_EQUAL(buff->Get(), 4);
  CHECK_EQUAL(buff->Get(), 5);
  // empty 확인 

  CHECK_EQUAL(buff->IsEmpty(), true);

}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

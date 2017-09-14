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
buff->Put(50);
buff->Put(20);
buff->Put(10);
buff->Put(40);

  // Dequeue 및 값 확인
CHECK_EQUAL(buff->Get(),50);
CHECK_EQUAL(buff->Get(),20);
CHECK_EQUAL(buff->Get(),10);
CHECK_EQUAL(buff->Get(),40);

}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
	buff->Put(50);
	buff->Put(20);
	buff->Put(10);
	buff->Put(40);

  // 모든값 Dequeue  
	CHECK_EQUAL(50,buff->Get());
	CHECK_EQUAL(20,buff->Get());
	CHECK_EQUAL(10,buff->Get());
	CHECK_EQUAL(40,buff->Get());
  // empty 확인 
	CHECK_EQUAL(buff->IsEmpty(),true);
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
CHECK_EQUAL(buff->IsFull(),true);  
  // 모든값 Dequeue  
	CHECK_EQUAL(1,buff->Get());
	CHECK_EQUAL(2,buff->Get());
	CHECK_EQUAL(3,buff->Get());
	CHECK_EQUAL(4,buff->Get());
	CHECK_EQUAL(5,buff->Get());
  // empty 확인
	CHECK_EQUAL(buff->IsEmpty(),true); 

}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

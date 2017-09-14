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
 
  	buff.Put(3);
  	buff.Put(7);
 	buff.Put(1);
 	buff.Put(6);

  // Dequeue 및 값 확인
	CHECK_EQUAL(3,buff->Get());
	CHECK_EQUAL(7,buff->Get());
	CHECK_EQUAL(1,buff->Get());
	CHECK_EQUAL(6,buff->Get());
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 

  	buff.Put(3);
  	buff.Put(7);
 	buff.Put(1);
 	buff.Put(6);

  // 모든값 Dequeue  
	CHECK_EQUAL(3,buff->Get());
	CHECK_EQUAL(7,buff->Get());
	CHECK_EQUAL(1,buff->Get());
	CHECK_EQUAL(6,buff->Get());
  // empty 확인 
	CHECK_EQUAL(true,buff->IsEmpty());
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
	buff.Put(3);
  	buff.Put(7);
 	buff.Put(1);
 	buff.Put(6);
	buff.Put(5);

  // full 확인 
	buff.isFull();
  
  // 모든값 Dequeue  
	CHECK_EQUAL(3,buff->Get());
	CHECK_EQUAL(7,buff->Get());
	CHECK_EQUAL(1,buff->Get());
	CHECK_EQUAL(6,buff->Get());
	CHECK_EQUAL(5,buff->Get());

  // empty 확인 
	CHECK_EQUAL(true,buff->IsEmpty());

}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

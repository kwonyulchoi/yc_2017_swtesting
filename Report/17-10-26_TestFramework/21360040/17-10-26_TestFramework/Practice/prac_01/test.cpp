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
	buff->Put(3);
	buff->Put(4);
  // Dequeue 및 값 확인
	CHECK_EQUAL(4,buff->Capacity());
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
	buff->Put(1);
	buff->Put(2);
	buff->Put(3);
	buff->Put(4);

  // 모든값 Dequeue  
	buff->get();
	
	
  // empty 확인 
	CHECK_EQUAL(0,buff->Capacity());
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
	buff->Put(1);
	buff->Put(2);
	buff->Put(3);
	buff->Put(4);
	buff->Put(4);
  // full 확인 
  	buff.isFull();
  // 모든값 Dequeue  
	buff->Get();
	buff->Get();
	buff->Get();
	buff->Get();
  // empty 확인 
	CHECK_EQUAL(0,buff->Capacity());
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

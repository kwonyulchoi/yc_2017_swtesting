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

	CHECK_EQUAL(buff->Get(),1);
	CHECK_EQUAL(buff->Get(),2);
	

}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
	buff->Put(1);
	buff->Put(2);
	buff->Put(3);	
	buff->Put(4);

  // 모든값 Dequeue  
	CHECK_EQUAL(buff->Get(),1);
	CHECK_EQUAL(buff->Get(),2);
	CHECK_EQUAL(buff->Get(),3);
	CHECK_EQUAL(buff->Get(),4);

  // empty 확인 
	CHECK_EQUAL(true,buff->IsEmpty());
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
	CHECK_EQUAL(true,buff->IsFull());
  
  // 모든값 Dequeue 
	CHECK_EQUAL(buff->Get(),1);
	CHECK_EQUAL(buff->Get(),2);
	CHECK_EQUAL(buff->Get(),3);
	CHECK_EQUAL(buff->Get(),4); 
	CHECK_EQUAL(buff->Get(),5); 

  // empty 확인 
	CHECK_EQUAL(true,buff->IsEmpty());

}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

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
  buff->Put(3);
  buff->Put(5);
  buff->Put(7);
  buff->Print() ;
  CHECK(buff->IsEmpty()==false);
  // Dequeue 및 값 확인

  CHECK(buff->Get() == 1) ;
  CHECK(buff->Get() == 3) ;
  CHECK(buff->Get() == 5) ;
  buff->Print() ;
  CHECK(buff->IsEmpty()==false);
}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
  buff->Put(1);
  buff->Put(3);
  buff->Put(5);
  buff->Put(7);
  buff->Print() ;
  CHECK(buff->IsEmpty()==false);
  // 모든값 Dequeue  
  CHECK(buff->Get() == 1) ;
  CHECK(buff->Get() == 3) ;
  CHECK(buff->Get() == 5) ;
  CHECK(buff->Get() == 7) ;
  buff->Print() ;
  
  // empty 확인 
  CHECK(buff->IsEmpty()==true);
}

TEST(CircularBuffer, queuefull)
{
  // 5개 아이템 Enqueue 
  buff->Put(1);
  buff->Put(3);
  buff->Put(5);
  buff->Put(7);
  buff->Put(9);
  buff->Print() ;
  
  // full 확인 
  CHECK(buff->IsFull()==true);
  // 모든값 Dequeue  
  CHECK(buff->Get() == 1) ;
  CHECK(buff->Get() == 3) ;
  CHECK(buff->Get() == 5) ;
  CHECK(buff->Get() == 7) ;
  CHECK(buff->Get() == 9) ;
  buff->Print() ;
  // empty 확인 
  CHECK(buff->IsEmpty()==true);
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

#include "CppUTest/CommandLineTestRunner.h"
#include "CircularBuffer.h" 


TEST_GROUP(circular_test)
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



TEST(circular_test, enqueue)
{
  // Enqueue 테스트
  buff->Put(1);
  buff->Put(3);
  buff->Put(5);
  buff->Put(7);
  buff->Print() ;
  CHECK(buff->IsEmpty()==false);
  buff->Capacity();
  // Dequeue 및 값 확인

  CHECK(buff->Get() == 1) ;
  CHECK(buff->Get() == 3) ;
  CHECK(buff->Get() == 5) ;
  buff->Print() ;
  CHECK(buff->IsEmpty()==false);
}

TEST(circular_test, deleteall)
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

TEST(circular_test, queuefull)
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
  CHECK(buff->IsFull()==false);
}



TEST(circular_test, basic_test)
{
  CircularBuffer buff;
  buff.Put(3);
  buff.Print();

}



int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

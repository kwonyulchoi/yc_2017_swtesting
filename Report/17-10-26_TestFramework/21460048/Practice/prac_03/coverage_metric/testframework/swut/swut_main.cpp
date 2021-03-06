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
  CircularBuffer buff;
  // Enqueue 테스트
  buff.Put(10);
  buff.Put(11);
  buff.Put(12);
  // Dequeue 및 값 확인
  CHECK(buff.Get() == 10) ;
  CHECK(buff.Get() == 11) ;
  CHECK(buff.Get() == 12) ;
}


TEST(circular_test, deleteall)
{
  CircularBuffer buff;
  // 4개 아이템 Enqueue 
  buff.Put(10);
  buff.Put(11);
  buff.Put(12);
  buff.Put(13);
  buff.Print() ;
  // 모든값 Dequeue  
  CHECK(buff.Get() == 10) ;
  CHECK(buff.Get() == 11) ;
  CHECK(buff.Get() == 12) ;
  CHECK(buff.Get() == 13) ;
  // empty 확인
  CHECK(buff.IsEmpty()==true);
}

TEST(circular_test, queuefull)
{
  CircularBuffer buff;
  // 5개 아이템 Enqueue 
  buff.Put(10);
  buff.Put(11);
  buff.Put(12);
  buff.Put(13);
  buff.Put(14);
  // full 확인 
  CHECK(buff.IsFull()==true);
  // 모든값 Dequeue  
  CHECK(buff.Get() == 10) ;
  CHECK(buff.Get() == 11) ;
  CHECK(buff.Get() == 12) ;
  CHECK(buff.Get() == 13) ;
  CHECK(buff.Get() == 14) ;
  // empty 확인 
  CHECK(buff.IsEmpty()==true);
}

TEST(circular_test, basic_test)
{
  CircularBuffer buff;
  buff.Put(3);
  buff.Print();
  printf("%d",buff.Capacity());

}

int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

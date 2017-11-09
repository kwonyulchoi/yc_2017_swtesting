#include "CppUTest/CommandLineTestRunner.h"
#include "CircularBuffer.h" 


TEST_GROUP(CircularBuffer)
{
CircularBuffer buff,*pBuff;

    void setup()
    {
        // Init stuff
	pBuff = new CircularBuffer;
	
    }

    void teardown()
    {
        // Uninit stuff
	delete pBuff;
    }

};


TEST(CircularBuffer, basic_test)
{
  CircularBuffer buff;
  buff.Put(3);
  buff.Print();

}

TEST(CircularBuffer, enqueue)
{
  // Enqueue 테스트

        buff.Put(32);
        buff.Put(11);
	buff.Put(12);
	buff.Put(13);
buff.Capacity();
  // Dequeue 및 값 확인

        CHECK_EQUAL(buff.Get(),32);
        CHECK_EQUAL(buff.Get(),11);
	CHECK_EQUAL(buff.Get(),12);
	CHECK_EQUAL(buff.Get(),13);


}

TEST(CircularBuffer, deleteall)
{
  // 4개 아이템 Enqueue 
//CircularBuffer buff;
        buff.Put(1);
        buff.Put(2);
        buff.Put(3);
        buff.Put(4);
	
	
  // 모든값 Dequeue  
        CHECK_EQUAL(buff.Get(),1);
        CHECK_EQUAL(buff.Get(),2);
        CHECK_EQUAL(buff.Get(),3);
        CHECK_EQUAL(buff.Get(),4);

  // empty 확인 
        CHECK_EQUAL(true,buff.IsEmpty());
	
	CHECK_EQUAL(true,buff.IsFull());
//Next
	
// 소멸자
	
}







int main(int argc, char** argv)
{
    return RUN_ALL_TESTS(argc, argv);
}

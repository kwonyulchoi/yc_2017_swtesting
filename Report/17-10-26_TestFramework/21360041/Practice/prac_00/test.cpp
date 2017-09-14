#include <stdio.h>
#include "GetPrime.h"
#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(Prime)
{
  std::vector<int>* primes;
  void setup()
  {
    // Init stuff
    primes =new std::vector<int>;
  }

  void teardown()
  {
    // Uninit stuff
    delete primes;
  }

};

// TEST(Prime, BasicExample)
// {
//   int a=3;
//   int b = a*2;
//   CHECK( b==6 );
//   CHECK_EQUAL(a,3);
// }

TEST(Prime, test_0)
{
  // std::vector<int>* primes;
  // primes =new std::vector<int>;
  
  // 0 값에 대한 테스트
  CHECK(get_prime(primes,0) == -1);
  // 결과값으로 받은 벡터의 사이즈는 0 이어야 한다
  CHECK(primes->size() == 0);

  // delete primes;
}

TEST(Prime, test_1)
{
  // std::vector<int>* primes;
  // primes =new std::vector<int>;
  
  // 1 값에 대한 테스트
  CHECK(get_prime(primes,1) == 0);
  // 결과값으로 받은 벡터의 사이즈는 0 이어야 한다
  CHECK(primes->size() == 0);

  // delete primes;
}

TEST(Prime, test_2)
{
  // std::vector<int>* primes;
  // primes =new std::vector<int>;
  
  // 2 값에 대한 테스트
  CHECK(get_prime(primes,2) == 0);
  // 결과값으로 받은 벡터의 사이즈는 0 이어야 한다
  CHECK(primes->size() == 0);

  // delete primes;
}

TEST(Prime, test_9)
{
  // std::vector<int>* primes;
  // primes =new std::vector<int>;
  
  // 10 값에 대한 테스트
  CHECK(get_prime(primes,9) == 0);
  // 결과값으로 받은 벡터의 사이즈는 0 이어야 한다
  CHECK(primes->size() == 4);

  // delete primes;
}



int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);

  return 0;
}

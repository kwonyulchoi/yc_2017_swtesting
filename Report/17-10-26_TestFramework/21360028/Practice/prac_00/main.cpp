#include <stdio.h>
#include <vector>
#include "GetPrime.h"


using namespace std;
int main(int argc, char *argv[])
{
  printf("\033[1;33m GetPrime \033[m\n");

  int input = 100;

  vector<int> *primes = new vector<int>;
  vector<int>::iterator itr;

  int total=-1;;
  total = get_prime(primes,input);
  for (itr=primes->begin() ; itr != primes->end() ; itr++)
  {
     printf("%d\n",*itr);
  }
  printf("\033[1;32m Total [%d] prime numbers \033[m\n",total);


  delete primes;
  
  return 0;
}

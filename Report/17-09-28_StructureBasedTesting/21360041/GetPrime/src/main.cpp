#include <stdio.h>
#include <vector>
#include "libmodule.h"
using namespace std;
int main(int argc, char *argv[]) {
  int target_num = 30;
  printf("\033[1;33mPrime under [%d] \033[m\n",target_num);
  vector<int> *primes = new vector<int>;

  int number_of_primes =-1;
  number_of_primes = get_prime(primes, target_num); 
  vector<int>::iterator itr = primes->begin();

  for (itr = primes->begin() ; itr != primes->end() ; itr++)
  {
    printf("\033[1;32mPrime Member : [%d]\033[m\n",*itr);
  }
  printf("\033[1;36mTotal Number of primes : [%d]\033[m\n",primes->size());

  delete primes;
  return 0;
}

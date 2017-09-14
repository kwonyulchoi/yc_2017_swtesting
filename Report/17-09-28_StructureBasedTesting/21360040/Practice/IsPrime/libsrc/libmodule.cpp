#include <stdio.h>


// 숫자 넣어주면 그게 소수인지 아닌지 판별

int is_prime(int num)
{
  if (num <= 1) 
    return 0;
  if (num % 2 == 0 && num > 2) 
    return 0;
  for(int i = 3; i < num / 2; i+= 2)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

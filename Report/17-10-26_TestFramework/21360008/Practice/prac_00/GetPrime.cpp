#include "GetPrime.h"


/**
* @brief 입력값인 target number 아래의 소수(prime)를 구한다
*        예) target_num이 10일 경우 2,3,5,7
* @param primes[OUT] 소수를 넣을 벡터변수
* @param target_num[IN] 
*
* @return target num 보다 작은 소수의 개수, 실패할 경우 -1
*/
int get_prime(vector<int>* & primes, int target_num)
{
    int nPrimes=0;;
    int i=0;
    int nFlag=false;
    primes->clear();
    if (target_num <= 0 )
        return -1;
    for (i=0 ; i< target_num ; i++)
    {
        nFlag =false;
        if (i ==2 )
        {
            primes->push_back(i);
            continue;
        }

        for (int j=0 ; j< primes->size() ;j++)
        {
            nFlag= true;
            if (i % (int)primes->at(j) == 0)
            {
                nFlag =false;
                break;
            }
        }
        if (nFlag == true)
        {
            primes->push_back(i);
        }
    }
    return  (int)primes->size();
}


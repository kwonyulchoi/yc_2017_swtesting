#include <stdio.h>
#include "libmodule.h"

int main(int argc, char *argv[]) {
  printf("\033[1;36mInput Target Number ; \033[m\n");
  int Num;

  scanf("%d",&Num);
  int Prime = true;
  int Factor = 0 ;
  while ( Num !=0){
    Prime = true;
    for (Factor =2 ; Factor <= Num/2 ; Factor++)
    {
      if ( Num-(Num/Factor)*Factor == 0)
      {
        printf("[%d] is a factor of [%d]\n",Factor,Num);
        Prime= false;
      }
    }
    if (Prime == true) {
      printf("[%d] is prime \n",Num);
    }
    printf("\033[1;36mInput Target Number ; \033[m\n");
    Num =0;
    scanf("%d",&Num);
  }
  printf("End of Prime number program\n");
  return 0;
}

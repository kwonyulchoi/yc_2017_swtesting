#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main(int argc, char *argv[])
{
  printf("\033[1;33m :x: chk main \033[m\n");
  printf("4 add 2 = %d\n",add(4,2));
  printf("4 sub 2 = %d\n",sub(4,2));
  printf("4 mul 2 = %d\n",mul(4,2));
  printf("4 div 2 = %d\n",div(4,2));
  return 0;
}

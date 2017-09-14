#include <stdio.h>

int add(int a,int b)
{
  return (a+b);
}

int div(int a,int b)
{
  return (a/b);
}

int mul(int a, int b)
{
  return (a*b);
}

int sub (int a , int b)
{
  return (a-b);
}

int main()
{
  printf("\033[1;33mchk main \033[m\n");
  printf("4 add 2 = %d\n",add(4,2));
  printf("4 sub 2 = %d\n",sub(4,2));
  printf("4 mul 2 = %d\n",mul(4,2));
  printf("4 div 2 = %d\n",div(4,2));
  return 0;
}

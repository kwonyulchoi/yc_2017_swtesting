#include <stdio.h>
#include "libmodule.h"


int main(int argc, char *argv[]) {
  printf("Hello World\n");

  struct key Table[5] = { {"aaa"},{"bbb"},{"ccc"},{"ddd"},{"eee"} };

  int position =-1;
  position = binsearch("ccc",Table,5);
  printf("\033[1;33m[%s][%d] position [%d] \033[m\n",
      __FUNCTION__,__LINE__,position);

  position = binsearch("ddd",Table,5);
  printf("\033[1;33m[%s][%d] position [%d] \033[m\n",
      __FUNCTION__,__LINE__,position);

  position = binsearch("qqq",Table,5);
  printf("\033[1;33m[%s][%d] position [%d] \033[m\n",
      __FUNCTION__,__LINE__,position);

  return 0;
}

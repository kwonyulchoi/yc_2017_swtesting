#include <stdio.h>
#include "CircularBuffer.h" 
#include "libmodule.h"
int main(int argc, char *argv[]) {
  CircularBuffer buff;
  buff.Put(3);
  buff.Put(7);
  buff.Put(1);
  buff.Print();
  printf("\033[1;32m[%s][%d] :x: get = %d  \033[m\n",__FUNCTION__,__LINE__,buff.Get());
  buff.Print();

  return 0;
}

#include <stdio.h>
#include <vector>
#include "CircularBuffer.h"


using namespace std;
int main(int argc, char *argv[])
{
  printf("\033[1;33m Circular buffer \033[m\n");
  CircularBuffer buff;
  printf("\033[1;33m Put 3 items \033[m\n");
  buff.Put(3);
  buff.Put(7);
  buff.Put(1);
  buff.Print();
  printf("\033[1;33m Get 1 item \033[m\n");
  printf("\033[1;33m get = %d  \033[m\n",buff.Get());
  buff.Print();

  return 0;
}

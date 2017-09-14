#include <stdio.h>

extern int file1();
extern int file2();
extern int file3();

int main(int argc, char *argv[])
{
  printf("Prog.c \n");
  printf("file1()[%d] \n",file1());
  printf("file2()[%d] \n",file2());
  printf("file3()[%d] \n",file3());

  return 0;
}

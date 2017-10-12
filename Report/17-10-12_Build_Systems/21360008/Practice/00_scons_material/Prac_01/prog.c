#include <stdio.h>

extern int file1();
extern int file2();
int main(int argc, char *argv[])
{
  printf("Prog.c \n");
  printf("file1()[%d] \n",file1());
  printf("file2()[%d] \n",file2());

  return 0;
}

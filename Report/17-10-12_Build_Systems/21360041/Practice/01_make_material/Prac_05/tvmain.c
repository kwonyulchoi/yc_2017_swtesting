#include <stdio.h>

extern void EPG();
extern void MenuUI();
extern void Tuner();

int main(int argc, char *argv[])
{
  EPG();
  MenuUI();
  Tuner();
  return 0;
}

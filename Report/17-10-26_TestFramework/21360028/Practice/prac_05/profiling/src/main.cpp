#include <stdio.h>
#include "libmodule.h"
int main(int argc, char *argv[]) {
  printf("Hello World\n");
  printf("libmodule() = %d\n", testmodule_profiling());
  return 0;
}

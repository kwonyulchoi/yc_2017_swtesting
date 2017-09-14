#include <stdio.h>
#include <string>
#include "libmodule.h"
using namespace std;

int main(int argc, char *argv[]) {
  string output;
  int inputVal=63;
  output = GetGrade(inputVal);
  printf("\033[1;36m[%s][%d] :x: input value [%d] --> [%s]\033[m\n",
          __FUNCTION__,__LINE__,inputVal,output.c_str());
  return 0;
}

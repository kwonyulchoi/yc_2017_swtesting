#include <string.h>
#include <stdio.h>
struct addr_item {
  int addr_code;
  char addr[32];
  int type;
  char etc[32];
};
struct addr_item item00;

static int cnt=0;
void calle_d(int i){
  cnt+=i*i;
  return;
}


void calle_c(){
  return;
}

void calle_b(){
  calle_c();
  return;
}



void calle_a(){
  calle_b();
  return;
}


int addr_operation(int code,char* pAddr,struct addr_item* item){
  printf("\033[1;36m[%s][%d] :x: pAddr =[%s] \033[m\n", 
      __FUNCTION__, __LINE__,pAddr);

  calle_a();
  return 0;
}

int calle_e(int a,int b, int c){
  return c;
}

int testmodule_profiling() {
  char bla[128]={0};
  sprintf(bla,"blabla Land");

  item00.addr_code=0x1f;
  memset(&item00.addr,0x00,1);
  sprintf(item00.addr,"blabla street 17-1");
  item00.type = 0xdeadbeef;
  memset(&item00.etc,0x00,32);
  sprintf(item00.etc,"commercial district");

  addr_operation(0x33,bla,&item00);

  int i;
  for (i=0 ; i < 44 ; i++)
  {
    calle_d(i);
  }

  calle_e(0xaaaa,0xbbbb,0xcccc);
  return 7;
}




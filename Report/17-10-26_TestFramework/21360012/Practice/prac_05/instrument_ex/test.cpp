#include <stdio.h>
#include <iostream>

void __cyg_profile_func_enter (void *callee,  void *caller);
void __cyg_profile_func_exit  (void *callee,  void *caller);

int a()
{
    printf("%s \n",__FUNCTION__ );
    return 0;
}
int b()
{
    printf("%s \n",__FUNCTION__ );
    return 0;
}
int c()
{
    printf("%s \n",__FUNCTION__ );
    return 0;
}


int main(int argc, char **argv) {
    printf("A ;%p\n",a);
    a();
    printf("B ;%p\n",b);
    b();
    printf("C ;%p\n",c);
    c();
}


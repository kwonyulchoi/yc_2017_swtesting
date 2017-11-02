#include <stdio.h>
#include <time.h>

static FILE *fp_trace;

void __attribute__ ((constructor)) trace_begin (void)
{
    fp_trace = fopen("./trace.out", "w");
}

void __attribute__ ((destructor)) trace_end (void)
{
    if(fp_trace != NULL) {
        fclose(fp_trace);
    }
}

void __cyg_profile_func_enter (void *callee,  void *caller)
{
    if(fp_trace != NULL) {
        fprintf(fp_trace, "enter: %p %p %lu\n", callee, caller, time(NULL) );
    }
}

void __cyg_profile_func_exit (void *callee, void *caller)
{
    if(fp_trace != NULL) {
        fprintf(fp_trace, "exit : %p %p %lu\n", callee, caller, time(NULL));
    }
}


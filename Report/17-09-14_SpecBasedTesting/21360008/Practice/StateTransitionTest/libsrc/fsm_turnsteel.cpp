#include "fsm.h"
#include "fsm_turnsteel.h"


int on_locked_enter(void* pData)  
{
    // Entering locked state
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}

int on_locked_exit(void* pData)  
{
    // Exiting locked state
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}

int on_unlocked_enter(void* pData)  
{
    // Entering unlocked state
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}

int on_unlocked_exit(void* pData)  
{
    // Exiting unlocked state
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}

int on_trans_locked_unlocked(void* pData)  
{
    // Transitioned from locked to unlocked
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}

int on_trans_unlocked_locked(void* pData)  
{
    // Transitioned from unlocked to locked
#ifdef TRACE_TRANSITION
    printf("\033[1;33m[%s][%d] :x: chk \033[m\n",__FUNCTION__,__LINE__);
#endif
}




#ifndef _FSM_TURNSTEEL_H_
#define _FSM_TURNSTEEL_H_ 

// 동전삽입
#define EVT_COIN (0x11)
// 밀기
#define EVT_PUSH (0x12)

int on_locked_enter(void* pData);
int on_locked_exit(void* pData);
int on_unlocked_enter(void* pData); 
int on_unlocked_exit(void* pData);
int on_trans_locked_unlocked(void* pData); 
int on_trans_unlocked_locked(void* pData);

#endif /* ifndef _FSM_TURNSTEEL_H_ */

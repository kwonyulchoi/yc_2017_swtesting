#ifndef FSM_H
#define FSM_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct State
{
    State(int (*on_enter)(void* pData), int (*on_exit)(void* pData));

    int (*on_enter)(void* pData);
    int (*on_exit)(void* pData);
};

class Fsm
{
    public:
        Fsm(State* initial_state);
        ~Fsm();

        void add_transition(State* state_from, State* state_to, int event,
                int (*on_transition)(void* pData),int (*on_guard)(void* pData));
        
        void trigger(int event,void* pData);
        
        State* get_CurState();

    private:

        /**
        * @brief 트랜지션 구조체
        */
        struct Transition
        {
            State* state_from; // 이전 상태
            State* state_to; // 전이할 상태
            int event; // 이벤트
            int (*on_transition)(void* pData); // 전이 시 실행할 함수 포인터
            int (*on_guard)(void* pData); // 전이 시 가드 판단 함수 포인터

            State* make_transition(void* pData);
        };
       
        static Transition create_transition(State* state_from, State* state_to,
                int event, int (*on_transition)(void* pData),int (*on_guard)(void* pData));
    private:
        
        /**
        * @brief Pointer of the current state
        */
        State* m_current_state;

        /**
        * @brief 트랜지션 정보를 저장하는 포인터
        */
        Transition* m_transitions;

        /**
        * @brief 전체 트랜지션의 개수
        */
        int m_num_transitions;
};
#endif // end #ifndef FSM_H

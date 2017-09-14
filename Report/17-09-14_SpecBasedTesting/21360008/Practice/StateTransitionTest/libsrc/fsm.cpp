#include "fsm.h"

    /**
    * @brief 상태 변수 생성자
    *
    * @param on_enter[IN] 상태변수 진입시 호출 함수 포인터
    * @param on_exit[IN] 상태변수 탈출시 호출 함수 포인터
    */
    State::State(int (*on_enter)(void* pData), int (*on_exit)(void* pData))
: on_enter(on_enter),
    on_exit(on_exit)
{
}

    /**
    * @brief Finite state machine 생성자
    *
    * @param initial_state[IN] FSM의 초기 상태 변수
    */
    Fsm::Fsm(State* initial_state)
: m_current_state(initial_state),
    m_transitions(NULL),
    m_num_transitions(0)
{
}
Fsm::~Fsm()
{
    free(m_transitions);
    m_transitions = NULL;
}

/**
* @brief 트랜지션 추가
*
* @param state_from[IN] 특정 상태 탈출 시 실행되는 함수 포인터
* @param state_to[IN] 특정 상태 진입 시 실행되는 함수 포인터
* @param event[IN] 이벤트
* @param on_transition[IN] 상태전이 함수
* @param on_guard[IN] 가드 판단 함수
*/
void Fsm::add_transition(State* state_from, State* state_to, int event,
               int (*on_transition)(void* pData),int (*on_guard)(void* pData))
{
    if (state_from == NULL || state_to == NULL)
        return;

    Transition transition = Fsm::create_transition(state_from, state_to, event,
            on_transition,on_guard);
    m_transitions = (Transition*) realloc(m_transitions, (m_num_transitions + 1)
            * sizeof(Transition));
    
    m_transitions[m_num_transitions] = transition;
    m_num_transitions++;
}


/**
* @brief 트랜지션 변수를 만들고 반환한다
*
* @param state_from[IN] 특정 상태 탈출 시 실행되는 함수 포인터
* @param state_to[IN] 특정 상태 진입 시 실행되는 함수 포인터
* @param event[IN] 이벤트
* @param on_transition[IN] 상태전이 함수
* @param on_guard[IN] 가드 판단 함수
*
* @return transition 변수
*/
Fsm::Transition Fsm::create_transition(State* state_from, State* state_to,
        int event, int (*on_transition)(void* pData),int (*on_guard)(void* pData))
{
    Transition t;
    // without the following initiation it can cause seg. fault
    memset (&t,0x00,sizeof(Transition));
    t.state_from = state_from;
    t.state_to = state_to;
    t.event = event;
    t.on_transition = on_transition;
    t.on_guard = on_guard;

    return t;
}

/**
* @brief 현재 상태와 주어진 이벤트를 바탕으로 전이(transition)를 찾고 실행한다
*        이벤트 매개 데이터를 통해 guard적합 여부를 판단한다
* @param event[IN] 트리거된 이벤트  
* @param pData[IN] 트리거된 이벤트 매개 데이터
*/
void Fsm::trigger(int event,void* pData)
{
    // Find the transition with the current state and given event.
    for (int i = 0; i < m_num_transitions; ++i)
    {
        if (m_transitions[i].state_from == m_current_state &&
                m_transitions[i].event == event)
        {
            // check guard condition
            if (m_transitions[i].on_guard)
            {
               if (!m_transitions[i].on_guard(pData)) 
                   m_current_state = m_transitions[i].make_transition(pData);

            }
            else
                m_current_state = m_transitions[i].make_transition(pData);
            return;
        }
    }
}

/**
* @brief pData의 값으로 상태전이를 실시한다
*
* @param pData[IN] 트리거 된 이벤트 매개 데이터
*
* @return 해당 상태전이로 도달할 상태  
*/
State* Fsm::Transition::make_transition(void* pData)
{
    // Execute the handlers in the correct order.
    if (state_from->on_exit != NULL)
        state_from->on_exit(pData);

    if (on_transition != NULL)
        on_transition(pData);

    if (state_to->on_enter != NULL)
        state_to->on_enter(pData);

    return state_to;
}

/**
* @brief 현재 상태 변수 포인터 반환
*
* @return 현재 상태변수 포인터
*/
        State* 
Fsm::get_CurState()
{
    return m_current_state;
}

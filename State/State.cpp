#include "State.h"

#include "Context.h"

State::State()
{

}

State::~State()
{

}

void State::OperationInterface(Context* con)
{

}

void State::OpenationChangeState(Context* con)
{

}

bool State::ChangeState(Context* con, State* st)
{
    con->ChangeState(st);
    return true;
}

ConcerteStateA::ConcerteStateA()
{

}

ConcerteStateA::~ConcerteStateA()
{

}

void ConcerteStateA::OperationInterface(Context* con)
{

}

void ConcerteStateA::OpenationChangeState(Context* con)
{
    OperationInterface(con);

    this->ChangeState(con, new ConcerteStateB);
}

ConcerteStateB::ConcerteStateB()
{

}

ConcerteStateB::~ConcerteStateB()
{

}

void ConcerteStateB::OperationInterface(Context* con)
{

}

void ConcerteStateB::OpenationChangeState(Context* con)
{
    OperationInterface(con);

    this->ChangeState(con, new ConcerteStateA);
}
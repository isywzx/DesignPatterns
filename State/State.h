#ifndef _STATE_H_
#define _STATE_H_

class Context;

class State
{
public:
    State();
    virtual ~State();

    virtual void OperationInterface(Context*) = 0;
    virtual void OpenationChangeState(Context*) = 0;

protected:
    bool ChangeState(Context*, State*);
};

class ConcerteStateA : public State
{
public:
    ConcerteStateA();
    virtual ~ConcerteStateA();

    virtual void OperationInterface(Context*) ;
    virtual void OpenationChangeState(Context*) ;
};

class ConcerteStateB : public State
{
public:
    ConcerteStateB();
    virtual ~ConcerteStateB();

    virtual void OperationInterface(Context*) ;
    virtual void OpenationChangeState(Context*) ;
};

#endif // _STATE_H_
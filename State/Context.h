#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State;

class Context
{
public:
    Context();
    Context(State*);
    ~Context();

    void OperationInterface();
    void OprtationChangeState();

private:
    friend class State;     //  表明在state类中可以访问Context类的private字段

    bool ChangeState(State*);

private:
    State* _state;
};

#endif // _CONTEXT_H_
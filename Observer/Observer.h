#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Subject.h"


class Observer
{
public:
    virtual ~Observer();
    virtual void Update(Subject*) = 0;
    virtual void PrintInfo() = 0;

protected:
    Observer();

protected:
    string _str;
};

class ConcerteObserverA : public Observer
{
public:
    ConcerteObserverA(Subject*);
    virtual ~ConcerteObserverA();

    //  传入Subject作为参数，这样可以让一个View属于多个的Subject
    void Update(Subject*) override;
    void PrintInfo() override;

    virtual Subject* GetSubject();
private:
    Subject* _sub;  
};

class ConcerteObserverB : public Observer
{
public:
    ConcerteObserverB(Subject*);
    virtual ~ConcerteObserverB();

    //  传入Subject作为参数，这样可以让一个View属于多个的Subject
    void Update(Subject*) override;
    void PrintInfo() override;

    virtual Subject* GetSubject();
private:
    Subject* _sub;
};

#endif // _OBSERVER_H_
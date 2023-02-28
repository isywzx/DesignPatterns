#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <list>
#include <string>
using namespace std;

class Observer;
class Subject
{
public:
    virtual ~Subject();

    virtual void Attach(Observer*);
    virtual void Deatach(Observer*);
    virtual void Notify();
    virtual void SetState(const string&) = 0;
    virtual string GetState() = 0;

protected:
    Subject();

private:
    list<Observer*> * _obvs;
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    string GetState() override;
    void SetState(const string&);

private:
    string _str;    
};

#endif // _SUBJECT_H_
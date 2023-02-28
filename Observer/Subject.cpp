#include "Subject.h"

#include "Observer.h"

Subject::Subject()
{
    _obvs = new list<Observer*>;
}

Subject::~Subject()
{

}

void Subject::Attach(Observer* obv)
{
    _obvs->push_front(obv);
}

void Subject::Deatach(Observer* obv)
{
    if(obv){
        _obvs->remove(obv);
    }
}

void Subject::Notify()
{
    list<Observer*>::iterator it = _obvs->begin();
    for(; it != _obvs->end(); it++){
        (*it)->Update(this);
    }
}

ConcreteSubject::ConcreteSubject()
{
    _str = "";
}

ConcreteSubject::~ConcreteSubject()
{

}

string ConcreteSubject::GetState()
{
    return _str;
}

void ConcreteSubject::SetState(const string& st)
{
    this->_str = st;
}
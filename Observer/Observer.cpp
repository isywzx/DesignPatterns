#include "Observer.h"

Observer::Observer()
{
    this->_str = "";
}

Observer::~Observer()
{

}

ConcerteObserverA::ConcerteObserverA(Subject* sub)
{
    this->_sub = sub;
    this->_sub->Attach(this);
}

ConcerteObserverA::~ConcerteObserverA()
{
    if(this->_sub){
        _sub->Deatach(this);

        delete _sub;
    }
}

Subject* ConcerteObserverA::GetSubject()
{
    return this->_sub;
}

void ConcerteObserverA::Update(Subject* sub)
{
    _str = sub->GetState();
    PrintInfo();
}

void ConcerteObserverA::PrintInfo()
{

}

ConcerteObserverB::ConcerteObserverB(Subject* sub)
{
    this->_sub = sub;
    this->_sub->Attach(this);
}

ConcerteObserverB::~ConcerteObserverB()
{
    if(this->_sub){
        _sub->Deatach(this);

        delete _sub;
    }
}

Subject* ConcerteObserverB::GetSubject()
{
    return this->_sub;
}

void ConcerteObserverB::Update(Subject* sub)
{
    _str = sub->GetState();
    PrintInfo();
}

void ConcerteObserverB::PrintInfo()
{
    
}
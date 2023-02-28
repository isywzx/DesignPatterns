#include "Proxy.h"

Subject::Subject()
{

}

Subject::~Subject()
{

}

ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::Request()
{

}

Proxy::Proxy()
{

}

Proxy::Proxy(Subject* sub)
{
    this->_sub = sub;
}

Proxy::~Proxy()
{
    delete _sub;
}

void Proxy::Request()
{
    _sub->Request();
}
#include "Facade.h"

Subsystem1::Subsystem1()
{

}

Subsystem1::~Subsystem1()
{
    
}

void Subsystem1::Operation()
{
    
}

Subsystem2::Subsystem2()
{

}

Subsystem2::~Subsystem2()
{
    
}

void Subsystem2::Operation()
{
    
}

Facade::Facade()
{
    _subs1 = new Subsystem1;
    _subs2 = new Subsystem2;
}

Facade::~Facade()
{
    delete _subs1;
    delete _subs2;
}

void Facade::OperationWrapper()
{
    this->_subs1->Operation();

    this->_subs2->Operation();
}
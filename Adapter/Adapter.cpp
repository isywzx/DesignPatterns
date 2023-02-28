#include "Adapter.h"

Target::Target()
{

}

Target::~Target()
{

}

void Target::Request()
{

}

Adaptee::Adaptee()
{

}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{

}

Adapter::Adapter(Adaptee* ade)
{
    this->_ade = ade;
}

Adapter::~Adapter()
{
    
}

void Adapter::Request()
{
    _ade->SpecificRequest();
}
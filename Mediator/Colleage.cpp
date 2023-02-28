#include "Colleage.h"

#include "Mediator.h"

Colleage::Colleage()
{

}

Colleage::Colleage(Mediator* mdt)
{
    this->_mdt = mdt;
}

ConcreteColleageA::ConcreteColleageA()
{

}

ConcreteColleageA::~ConcreteColleageA()
{

}

ConcreteColleageA::ConcreteColleageA(Mediator* mdt)
    : Colleage(mdt)
{


}

string ConcreteColleageA::GetState()
{
    return this->_s;
}

void ConcreteColleageA::SetState(const string& s)
{
    this->_s = s;
}

void ConcreteColleageA::Action()
{
    this->_mdt->DoActionFromAtoB();
}


ConcreteColleageB::ConcreteColleageB()
{

}

ConcreteColleageB::~ConcreteColleageB()
{

}

ConcreteColleageB::ConcreteColleageB(Mediator* mdt)
    : Colleage(mdt)
{


}

string ConcreteColleageB::GetState()
{
    return this->_s;
}

void ConcreteColleageB::SetState(const string& s)
{
    this->_s = s;
}

void ConcreteColleageB::Action()
{
    this->_mdt->DoActionFromBtoA();
}
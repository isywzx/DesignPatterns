#include "Mediator.h"
#include "Colleage.h"

Mediator::Mediator()
{

}

Mediator::~Mediator()
{

}

ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::~ConcreteMediator()
{

}

ConcreteMediator::ConcreteMediator(Colleage* clgA, Colleage* clgB)
{
    this->_clgA = clgA;
    this->_clgB = clgB;
}

void ConcreteMediator::SetConcreteColleageA(Colleage* clg)
{
    this->_clgA = clg;
}

void ConcreteMediator::SetConcreteColleageB(Colleage* clg)
{
    this->_clgB = clg;
}

Colleage* ConcreteMediator::GetConcreteColleageA()
{
    return this->_clgA;
}

Colleage* ConcreteMediator::GetConcreteColleageB()
{
    return this->_clgB;
}

void ConcreteMediator::IntroColleage(Colleage* clgA, Colleage* clgB)
{
    this->_clgA = clgA;
    this->_clgB = clgB;
}

void ConcreteMediator::DoActionFromAtoB()
{
    this->_clgB->SetState(this->_clgA->GetState());
}

void ConcreteMediator::DoActionFromBtoA()
{
    this->_clgA->SetState(this->_clgB->GetState());
}
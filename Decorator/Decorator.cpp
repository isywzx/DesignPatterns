#include "Decorator.h"

Component::Component()
{

}

Component::~Component()
{

}

void Component::Operation()
{

}

ConcreteComponent::ConcreteComponent()
{
    
}

ConcreteComponent::~ConcreteComponent()
{
    
}

void ConcreteComponent::Operation()
{

}

Decorator::Decorator(Component* com)
{
    this->_com = com;
}

Decorator::~Decorator()
{
   delete this->_com; 
}

void Decorator::Operation()
{
}

ConcreteDecorator::ConcreteDecorator(Component* com)
    : Decorator(com)
{

}

ConcreteDecorator::~ConcreteDecorator()
{
    
}

void ConcreteDecorator::AddedBehavior()
{

}

void ConcreteDecorator::Operation()
{
    _com->Operation();
    AddedBehavior();
}
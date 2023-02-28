#include "Flyweight.h"

Flyweight::Flyweight(string intrinsicState)
{
    this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{
    
}

void Flyweight::Operation(const string& extrinsicState)
{

}

string Flyweight::GetIntrinsicState()
{
    return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState)
    : Flyweight(intrinsicState)
{

}

ConcreteFlyweight::~ConcreteFlyweight()
{
    
}

void ConcreteFlyweight::Operation(const string& extrinsicState)
{

}
#include "Prototype.h"

Prototype::Prototype(){

}

Prototype::~Prototype(){

}

Prototype* Prototype::Clone(){
    return 0;
}

ConcretePrototype::ConcretePrototype()
{

}

ConcretePrototype::~ConcretePrototype()
{

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{

}

Prototype* ConcretePrototype::Clone(){
    return new ConcretePrototype(*this);
}
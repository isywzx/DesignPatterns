#include "Factory.h"

#include "Product.h"

Factory::Factory(){

}

Factory::~Factory(){

}

ConcerteFactory::ConcerteFactory(){

}

ConcerteFactory::~ConcerteFactory(){

}

Product* ConcerteFactory::CreateProduct(){
    return new ConcreteProduct();
}
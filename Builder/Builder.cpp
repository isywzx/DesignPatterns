#include "Builder.h"
#include "Product.h"

Builder::Builder(){

}

Builder::~Builder(){

}

ConcreteBuilder::ConcreteBuilder(){

}

ConcreteBuilder::~ConcreteBuilder(){

}

void ConcreteBuilder::BuildPartA(const string& buildPara){

}

void ConcreteBuilder::BuildPartB(const string& buildPara){

}

void ConcreteBuilder::BuildPartC(const string& buildPara){

}

Product* ConcreteBuilder::GetProduct(){
    BuildPartA("A");
    BuildPartB("B");
    BuildPartC("C");

    return new Product;
}
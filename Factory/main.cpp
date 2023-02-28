#include "Product.h"
#include "Factory.h"

int main(int argc, char* argv[]){
    Factory * f = new ConcerteFactory();

    Product* p = f->CreateProduct();

    delete p;
    delete f;

    return 0;
}
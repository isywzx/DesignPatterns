#include "Prototype.h"

int main(int argc, char* argv[]){
    Prototype* p = new ConcretePrototype;

    Prototype* p1 = p->Clone();

    return 0;
}
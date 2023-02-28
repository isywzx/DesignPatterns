#include "Builder.h"
#include "Product.h"
#include "Director.h"

int main(int argc, char* argv[]){
    Director* d = new Director(new ConcreteBuilder);
    
    d->Construct();

    return 0;
}
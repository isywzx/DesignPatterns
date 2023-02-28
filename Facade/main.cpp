#include "Facade.h"

int main(int argc, char* argv[])
{
    Facade* f = new Facade;
    f->OperationWrapper();

    return 0;
}
#include "Abstraction.h"
#include "AbstractionImp.h"

int main(int argc, char* argv[])
{
    AbstractionImp* impA = new ConcreteAbstractionImpA;
    Abstraction* abs = new RefinedAbstraction(impA);
    abs->Operation();

    return 0;
}
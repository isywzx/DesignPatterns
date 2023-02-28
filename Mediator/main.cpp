#include "Colleage.h"
#include "Mediator.h"

int main(int argc, char* argv[])
{
    ConcreteMediator* m = new ConcreteMediator;

    ConcreteColleageA* cA = new ConcreteColleageA(m);
    ConcreteColleageB* cB = new ConcreteColleageB(m);

    m->IntroColleage(cA, cB);

    cA->SetState("old");
    cB->SetState("old");

    cA->Action();
    cB->Action();

    cA->SetState("new");
    cA->Action();
    cB->Action();

    cB->SetState("old");
    cB->Action();
    cA->Action();

    return 0;
}
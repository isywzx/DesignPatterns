#include "Subject.h"
#include "Observer.h"

int main(int argc, char* argv[])
{
    ConcreteSubject* sub = new ConcreteSubject;

    Observer* o1 = new ConcerteObserverA(sub);
    Observer* o2 = new ConcerteObserverB(sub);

    sub->SetState("old");
    sub->Notify();

    sub->SetState("new");
    sub->Notify();
    
    return 0;
}
#include "Leaf.h"
#include "Composite.h"
#include "Component.h"

int main(int argc, char* argv[])
{
    Leaf * f = new Leaf();
    f->Operation();

    Composite* com = new Composite();
    com->Add(f);
    com->Operation();

    Component* ll = com->GetChild(0);
    ll->Operation();

    return 0;
}
#include "Memento.h"

int main(int argc, char* argv[])
{
    Originator* o = new Originator();
    o->SetState("old"); //  备忘前状态
    o->PrintState();

    Memento* m = o->CreateMemento();
    o->SetState("new"); // 修改状态
    o->PrintState();

    //  恢复修改前的状态
    o->RestoreToMemento(m);
    o->PrintState();

    return 0;
}
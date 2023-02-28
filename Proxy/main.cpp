#include "Proxy.h"

int main(int argc, char* agrv[])
{
    Subject* sub = new ConcreteSubject;

    Proxy* p = new Proxy(sub);
    p->Request();

    return 0;
}
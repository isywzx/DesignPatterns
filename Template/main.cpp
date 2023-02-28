#include "Template.h"

int main(int argc, char* argv[])
{
    AbstractClass* p1 = new ConcreteClass1;
    p1->TemplateMethod();

    AbstractClass* p2 = new ConcreteClass2;
    p2->TemplateMethod();

    return 0;
}
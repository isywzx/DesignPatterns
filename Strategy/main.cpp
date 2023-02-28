#include "strategy.h"
#include "Context.h"

int main(int argc, char* argv[])
{
    Strategy* ps = new ConcerteStrategyA;

    Context* pc = new Context(ps);
    pc->DoAction();

    if(!pc)
        delete pc;
        
    return 0;
}
#include "Context.h"
#include "State.h"

int main(int argc, char* argv[])
{
    State* st = new ConcerteStateA;
    Context* con = new Context(st);
    con->OperationInterface();
    con->OperationInterface();
    con->OperationInterface();

    if(!con)
        delete con;

    if(!st)
        delete st; 

    return 0;
}
#include "Context.h"

#include "strategy.h"

Context::Context(Strategy* stg)
{
    this->_stg = stg;
}

Context::~Context()
{
    if(!this->_stg)
        delete this->_stg;
}

void Context::DoAction()
{
    this->_stg->AlgrithmInterface();
}
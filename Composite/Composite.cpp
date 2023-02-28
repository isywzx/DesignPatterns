#include "Composite.h"

Composite::Composite()
{

}

Composite::~Composite()
{

}

void Composite::Operation()
{
    vector<Component*>::iterator it = _comVec.begin();
    for (; it != _comVec.end(); it++)
    {
        (*it)->Operation();   
    }
}

void Composite::Add(Component* com)
{
    _comVec.push_back(com);
}

void Composite::Remove(Component* com)
{
    _comVec.erase(&com);
}

Component * Composite::GetChild(int index)
{
    return _comVec[index];
}
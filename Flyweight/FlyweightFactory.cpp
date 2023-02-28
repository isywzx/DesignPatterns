#include "FlyweightFactory.h"

FlyweightFactory::FlyweightFactory()
{

}

FlyweightFactory::~FlyweightFactory()
{

}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
    vector<Flyweight*>::iterator it = _fly.begin();
    for(; it != _fly.end(); it++){
        //  找到了 就一起用
        if((*it)->GetIntrinsicState() == key){
            return *it;
        }
    }

    Flyweight* fly = new ConcreteFlyweight(key);
    _fly.push_back(fly);

    return fly;
}
#include "FlyweightFactory.h"

int main(int argc, char* argv[])
{
    FlyweightFactory* fc = new FlyweightFactory;

    Flyweight* fw1 = fc->GetFlyweight("Hello");
    
    Flyweight* fw2 = fc->GetFlyweight("world");

    Flyweight* fw3 = fc->GetFlyweight("Hello");

    return 0;
}
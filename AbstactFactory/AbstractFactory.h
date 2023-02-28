#ifndef _ABSTRACTFACTORY_H
#define _ABSTRACGFACTORY_H

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
    virtual ~AbstractFactory();

    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;

protected:
    AbstractFactory(/* args */);
};

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();

    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();

    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};


#endif // _ABSTRACTFACTORY_H
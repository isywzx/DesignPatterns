#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

class AbstractClass
{
public:
    virtual ~AbstractClass();
    void TemplateMethod();

protected:
    virtual void PrimitiveOpertion1() = 0;
    virtual void PrimitiveOpertion2() = 0;

    AbstractClass();
};

class ConcreteClass1 : public AbstractClass
{
public:
    ConcreteClass1();
    ~ConcreteClass1();

protected:
    void PrimitiveOpertion1();
    void PrimitiveOpertion2();
};

class ConcreteClass2 : public AbstractClass
{
public:
    ConcreteClass2();
    ~ConcreteClass2();

protected:
    void PrimitiveOpertion1();
    void PrimitiveOpertion2();
};

#endif // _TEMPLATE_H_
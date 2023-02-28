#ifndef _ADAPTER_H_
#define _ADAPTER_H_

class Target
{
public:
    Target();
    virtual ~Target();

    virtual void Request();
};

class Adaptee
{
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequest();
};

/*
1、接口继承，通过继承，子类获得了父类的接口
2、实现继承，通过继承，子类获得了父类的实现，
    private继承只能是实现继承
    public继承 既可以是实现也可以是接口

*/
class Adapter : public Target
{
public:
    Adapter(Adaptee* ade);
    ~Adapter();

    void Request();

private:
    Adaptee* _ade;
};

#endif // _ADAPTER_H_
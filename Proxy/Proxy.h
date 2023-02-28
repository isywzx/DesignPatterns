#ifndef _PROXY_H_
#define _PROXY_H_

/**
 *  代理模式
 */ 

class Subject
{
public:
    virtual ~Subject();
    virtual void Request() = 0;

protected:
    Subject();
};

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void Request() override;
};

class Proxy 
{
public:
    Proxy();
    Proxy(Subject* sub);

    ~Proxy();

    void Request();

private:
    Subject* _sub;
};

#endif // _PROXY_H_
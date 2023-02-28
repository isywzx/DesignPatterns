#ifndef _COLLEAGE_H_
#define _COLLEAGE_H_

#include <string>
using namespace std;

class Mediator;

class Colleage
{
public:
    virtual ~Colleage();
    
    virtual void Action() = 0;
    virtual void SetState(const string& s) = 0;
    virtual string GetState() = 0;

protected:
    Colleage();
    Colleage(Mediator* mdt);

    Mediator* _mdt;
};

class ConcreteColleageA : public Colleage
{
public:
    ConcreteColleageA();
    ConcreteColleageA(Mediator* mdt);
    ~ConcreteColleageA();

    void Action() override;
    void SetState(const string&) override;
    string GetState() override;

private:
    string _s;
};


class ConcreteColleageB : public Colleage
{
public:
    ConcreteColleageB();
    ConcreteColleageB(Mediator* mdt);
    ~ConcreteColleageB();

    void Action() override;
    void SetState(const string&) override;
    string GetState() override;

private:
    string _s;
};


#endif // _COLLEAGE_H_
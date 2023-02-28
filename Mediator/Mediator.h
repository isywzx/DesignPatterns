#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

class Colleage;

class Mediator
{
public:
    virtual ~Mediator();

    virtual void DoActionFromAtoB() = 0;
    virtual void DoActionFromBtoA() = 0;

protected:
    Mediator();
};

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();
    ConcreteMediator(Colleage* clgA, Colleage* clbB);
    ~ConcreteMediator();

    void SetConcreteColleageA(Colleage* clg);
    void SetConcreteColleageB(Colleage* clg);

    Colleage* GetConcreteColleageA();
    Colleage* GetConcreteColleageB();

    void IntroColleage(Colleage* clgA, Colleage* clgB);

    void DoActionFromAtoB() override;
    void DoActionFromBtoA() override;

private:
    Colleage* _clgA;
    Colleage* _clgB;
};

#endif // _MEDIATOR_H_
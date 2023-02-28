#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
    Strategy();
    virtual ~Strategy();

    virtual void AlgrithmInterface() = 0;
};

class ConcerteStrategyA : public Strategy
{
public:
    ConcerteStrategyA();
    virtual ~ConcerteStrategyA() override;

    void AlgrithmInterface() override;
};

class ConcerteStrategyB : public Strategy
{
public:
    ConcerteStrategyB();
    virtual ~ConcerteStrategyB() override;

    void AlgrithmInterface() override;
};

#endif // _STRATEGY_H_
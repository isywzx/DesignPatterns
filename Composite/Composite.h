#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include "Component.h"

#include <vector>
using namespace std;

class Composite : public Component
{
public:
    Composite();
    ~Composite();

public:
    void Operation() override;
    void Add(Component*) override;
    void Remove(Component*) override;
    Component * GetChild(int) override;

private:
    vector<Component*> _comVec;
};

#endif // _COMPOSITE_H_
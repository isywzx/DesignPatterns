#ifndef _LEAF_H_
#define _LEAF_H_

#include "Component.h"

class Leaf : public Component
{
public:
    Leaf();
    ~Leaf();

public:
    void Operation() override;
};

#endif // _LEAF_H_
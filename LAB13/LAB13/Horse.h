#pragma once

#include <iostream>
#include "Mammal.h"

using std::cout;
using std::endl;

class Horse : public Mammal
{
public:

    Horse(void);
    ~Horse(void);

    virtual void Move() const;
    virtual void Speak() const;

protected:

    int itsAge;

};


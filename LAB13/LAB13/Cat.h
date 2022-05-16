#pragma once

#include <iostream>
#include "Mammal.h"

using std::cout;
using std::endl;

class Cat : public Mammal
{
public:

    Cat(void);
    ~Cat(void);

    virtual void Move() const;
    virtual void Speak() const;

protected:

    int itsAge;

};


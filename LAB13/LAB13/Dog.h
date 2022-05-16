#pragma once

#include <iostream>
#include "Mammal.h"

using std::cout;
using std::endl;

class Dog : public Mammal
{
public:

    Dog(void);
    ~Dog(void);

    virtual void Move() const;
    virtual void Speak() const;

protected:

    int itsAge;

};


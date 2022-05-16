#pragma once

#include <iostream>
#include "Mammal.h"

using std::cout;
using std::endl;

class GuineaPig : public Mammal
{
public:

    GuineaPig(void);
    ~GuineaPig(void);

    virtual void Move() const;
    virtual void Speak() const;

protected:

    int itsAge;

};


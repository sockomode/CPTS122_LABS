#include "Cat.h"

Cat::Cat(void) :itsAge(1)
{
    cout << "Cat constructor..." << endl;
}

Cat::~Cat(void)
{
    cout << "Cat destructor..." << endl;
}

void Cat::Move() const
{
    cout << "Cat moves a step!" << endl;
}

void Cat::Speak() const
{
    cout << "What does a Cat speak? Cat" << endl;
}
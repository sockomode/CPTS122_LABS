#include "GuineaPig.h"

GuineaPig::GuineaPig(void) :itsAge(1)
{
    cout << "GuineaPig constructor..." << endl;
}

GuineaPig::~GuineaPig(void)
{
    cout << "GuineaPig destructor..." << endl;
}

void GuineaPig::Move() const
{
    cout << "GuineaPig moves a step!" << endl;
}

void GuineaPig::Speak() const
{
    cout << "What does a Guinea Pig speak? Weep weep!" << endl;
}
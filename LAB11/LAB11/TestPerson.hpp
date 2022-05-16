#include "Header.hpp"

#include <iostream>
#include <fstream> 
#include <string>

class TestPerson : public Person
{
public:
	TestPerson(const string& newName = "", const int& newAge = 0, const string& newGender = "", const int& newHeight = 0);

private:
	string tName;
	int tAge;
	string tGender;
	int tHeight;
};
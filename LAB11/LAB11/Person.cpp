#include "Header.hpp"

Person::Person(string newName, int newAge, string newGender, int newHeight)
{
	name = newName;
	age = newAge;
	gender = newGender;
	height = newHeight;
}

Person::Person(const Person& copy)
{
	name = copy.name;
	age = copy.age;
	gender = copy.gender;
	height = copy.height;
}

Person& Person::operator=(const Person& rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->age = rhs.age;
		this->gender = rhs.gender;
		this->height = rhs.height;
	}

	return (*this);
}

Person::~Person()
{

}

int Person::getAge()
{
	return age;
}

string Person::getGender()
{
	return gender;
}

int Person::getHeight()
{
	return height;
}

string Person::getName()
{
	return name;
}

ostream& operator<<(ostream& output, Person& person)
{
	output << "Name: " << person.getName() << endl;
	output << "Age:	" << person.getAge() << endl;
	output << "Gender: " << person.getGender() << endl;
	output << "Height: " << person.getHeight() << endl;

	return output;
}
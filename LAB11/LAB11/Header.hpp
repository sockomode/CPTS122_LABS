#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

class Person
{
public:
	Person(string newName, int newAge, string newGender, int newHeight);
	Person(const Person& copy);

	~Person();
	string getName();
	int getAge();
	string getGender();
	int getHeight();

protected:
	string name;
	int age;
	string gender;
	int height;
};

ostream& operator<< (ostream& output, Person& person);
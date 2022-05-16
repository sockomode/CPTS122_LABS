#include "Header.hpp"

#include <iostream>
#include <fstream> 
#include <string>

class Student : public Person
{
public:
	Student(const string& newName = "", const int& newAge = 0, const string& newGender = "", const int& newHeight = 0);
	int getCourseTaken();
	int getTotalCredits();
	string getCourseName();
	int getCourseCredits();
	int getTotalCredits();

protected:
	string tName;
	int tAge;
	string tGender;
	int tHeight;
	int courseTaken;
	int totalCredits;
	struct Course;
};

struct Course
{
	string courseName;
	int courseCredits;
	int courseGrade;
};
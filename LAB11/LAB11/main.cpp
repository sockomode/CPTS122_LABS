#include "Header.hpp"
#include "Student.hpp"
#include "TestPerson.hpp"

int main(void)
{
	Person Tyler = Person("Tyler Bleins", 26, "Male", 56);
	int age = Tyler.getAge();

	//printf("%d", &age);


	return 0;
}
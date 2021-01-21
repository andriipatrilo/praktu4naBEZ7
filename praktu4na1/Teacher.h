#pragma once
#include <string>
#include "BaseClass.h"
class Teacher :public BaseClass
{
private:

	std::string lesson;

public:
	Teacher();
	Teacher(std::string Id, std::string Surname, std::string Name, std::string FatherName, int day, int mon, int year, std::string Phone, std::string Branch, std::string les);
	friend std::istream& operator>>(std::istream& in, Teacher& t);
	friend std::ostream& operator<<(std::ostream& out, Teacher& t);
	friend bool operator==(const Teacher& t1, const Teacher& t2);

};
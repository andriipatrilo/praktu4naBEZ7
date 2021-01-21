#pragma once
#include <string>
class Teacher
{
private:
	struct Birthday
	{
		int day;
		int mounth;
		int year;
	};
	std::string id;
	std::string name;
	std::string surname;
	std::string fatherName;
	Birthday data;
	std::string phone;
	std::string branch;
	std::string lesson;

public:
	Teacher();
	Teacher(std::string Id, std::string Surname, std::string Name, std::string FatherName, int day, int mon, int year, int Phone, int Branch);

};

#include "Teacher.h"

Teacher::Teacher()
{
	id = "0";
	surname = "Unknown";
	name = "Unknown";
	fatherName = "Unknown";
	data.day = 0;
	data.mounth = 0;
	data.year = 1980;
	phone = "+000000000000";
	branch = "Math";
}

Teacher::Teacher(std::string Id, std::string Surname, std::string Name, std::string FatherName, int day, int mon, int year, int Phone, int Branch)
{
	id = id;
	surname = Surname;
	name = Name;
	fatherName = FatherName;
	data.day = day;
	data.mounth = mon;
	data.year = year;
	phone = Phone;
	branch = Branch;
}
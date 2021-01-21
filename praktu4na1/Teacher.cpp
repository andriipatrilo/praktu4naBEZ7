#include "Teacher.h"
#include <iostream>
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

std::istream& operator>>(std::istream& in, Teacher& t)
{
	std::cout << "Enter ID";
	in >> t.id;
	std::cout << "Family name:";
	in >> t.surname;
	std::cout << "Name: ";
	in >> t.name;
	std::cout << "Father name: ";
	in >> t.fatherName;
	std::cout << "Day of birth: ";
	std::cin >> t.data.day;
	std::cout << "Mounth of birth: ";
	std::cin >> t.data.mounth;
	std::cout << "Year of birth: ";
	std::cin >> t.data.year;
	std::cout << "Phone number";
	std::cin >> t.phone;
	std::cout << "Branch:";
	std::cin >> t.branch;
	std::cout << "Lesson:";
	std::cin >> t.lesson;
	return in;
}
std::ostream& operator<<(std::ostream& out, Teacher& t)
{
	std::cout << "Id: " << t.id << std::endl;
	std::cout << t.surname << " " << t.name << " " << t.fatherName << std::endl;
	std::cout << "Birth " << t.data.day << ":" << t.data.mounth << ":" << t.data.year << std::endl;
	std::cout << t.phone << std::endl;
	std::cout << t.branch << std::endl;
	std::cout << t.lesson << std::endl;
	return out;
}

bool operator==(const Teacher& t1, const Teacher& t2)
{
	if (t1.id != t2.id)
		return false;
	else if (t1.surname != t2.surname)
		return false;
	else if (t1.name != t2.name)
		return false;
	else if (t1.fatherName != t2.fatherName)
		return false;
	else if (t1.data.day != t2.data.day)
		return false;
	else if (t1.data.mounth != t2.data.mounth)
		return false;
	else if (t1.data.year != t2.data.year)
		return false;
	else if (t1.phone != t2.phone)
		return false;
	else if (t1.branch != t2.branch)
		return false;
	else if (t1.lesson != t2.lesson)
		return false;
	return true;
}
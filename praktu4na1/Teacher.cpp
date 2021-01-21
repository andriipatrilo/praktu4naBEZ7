#include "Teacher.h"
#include <iostream>
Teacher::Teacher()
	:BaseClass()
{
	lesson = "Math";
}

Teacher::Teacher(std::string Id, std::string Surname, std::string Name, std::string FatherName, int day, int mon, int year, std::string Phone, std::string Branch, std::string les)
	: BaseClass(Id, Surname, Name, FatherName, day, mon, year, Phone, Branch)
{
	lesson = les;
}

std::istream& operator>>(std::istream& in, Teacher& t)
{
	std::cout << "Enter ID";
	in >> t.m_id;
	std::cout << "Family name:";
	in >> t.m_familyName;
	std::cout << "Name: ";
	in >> t.m_name;
	std::cout << "Father name: ";
	in >> t.m_fatherName;
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
	std::cout << "Id: " << t.m_id << std::endl;
	std::cout << t.m_familyName << " " << t.m_name << " " << t.m_fatherName << std::endl;
	std::cout << "Birth " << t.data.day << ":" << t.data.mounth << ":" << t.data.year << std::endl;
	std::cout << t.phone << std::endl;
	std::cout << t.branch << std::endl;
	std::cout << t.lesson << std::endl;
	return out;
}

bool operator==(const Teacher& t1, const Teacher& t2)
{
	if (t1.m_id != t2.m_id)
		return false;
	else if (t1.m_familyName != t2.m_familyName)
		return false;
	else if (t1.m_name != t2.m_name)
		return false;
	else if (t1.m_fatherName != t2.m_fatherName)
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
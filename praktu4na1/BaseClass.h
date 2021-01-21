#pragma once
#include <string>
class BaseClass
{
protected:
	std::string m_id;
	std::string m_familyName;
	std::string m_name;
	std::string m_fatherName;
	struct DateOfBirth
	{
		int day;
		int mounth;
		int year;
	};
	DateOfBirth data;
	std::string phone;
	std::string branch;
	BaseClass();
	BaseClass(std::string id, std::string familyName, std::string name, std::string fatherName, int day, int mounth, int year, std::string phon, std::string branc);

};

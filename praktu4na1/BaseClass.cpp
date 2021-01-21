#include "BaseClass.h"

BaseClass::BaseClass()
{
	m_id = "0";
	m_familyName = "Unknown";
	m_name = "Unknown";
	m_fatherName = "Unknown";
	data.day = 0;
	data.mounth = 0;
	data.year = 1980;
	phone = "+000000000000";
	branch = "Math";
}

BaseClass::BaseClass(std::string id, std::string familyName, std::string name, std::string fatherName, int day, int mounth, int year, std::string phon, std::string branc)
{
	m_id = id;
	m_familyName = familyName;
	m_name = name;
	m_fatherName = fatherName;
	data.day = day;
	data.mounth = mounth;
	data.year = year;
	phone = phon;
	branch = branc;
}
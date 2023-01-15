#include"Date.h"
const string Date::get_Month(int* month)
{
	
	switch (*month)
	{
	case(1):
	{
		return "January";
	}
	break;
	case(2):
	{
		return "February";
	}
	break;
	case(3):
	{
		return "March";
	}
	break;
	case(4):
	{
		return "April";
	}
	break;
	case(5):
	{
		return "May";
	}
	break;
	case(6):
	{
		return "June";
	}
	break;
	case(7):
	{
		return "July";
	}
	break;
	case(8):
	{
		return "August";
	}
	break;
	case(9):
	{
		return "September";
	}
	break;
	case(10):
	{
		return "Octuber";
	}
	break;
	case(11):
	{
		return "November";
	}
	break;
	case(12):
	{
		return "December";
	}
	break;
	}
	return "";
}
void Date::show_Date()
{
	string_month = get_Month(&month);
}
void Date::set_Day(int& day)
{
	if (day < 1 || day>31)
	{
		throw invalid_Day(day);
	}
	else
	{
		this->day = day;
	}
}
void Date::set_Month(int& month)
{
	if (month < 1 || month>12)
	{
		throw(month);
	}
	else
	{
		this->month = month;
	}
}
void Date::set_year(int& year)
{
	this->year = year;
}
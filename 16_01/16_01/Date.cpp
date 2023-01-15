#include"Date.h"
const string& Date::get_Month(int* month)
{
	int mon = *month;
	string m;
	switch (*month)
	{
	case(1):
	{
		m = "January";
	}
	break;
	case(2):
	{
		m = "February";
	}
	break;
	case(3):
	{
		m = "March";
	}
	break;
	case(4):
	{
		m = "April";
	}
	break;
	case(5):
	{
		m = "May";
	}
	break;
	case(6):
	{
		m = "June";
	}
	break;
	case(7):
	{
		m = "July";
	}
	break;
	case(8):
	{
		m = "August";
	}
	break;
	case(9):
	{
		m = "September";
	}
	break;
	case(10):
	{
		m = "Octuber";
	}
	break;
	case(11):
	{
		m = "November";
	}
	break;
	case(12):
	{
		m = "December";
	}
	break;
	}
	return m;
}
void Date::show_Date()
{
	string_month = get_Month(&month);
}
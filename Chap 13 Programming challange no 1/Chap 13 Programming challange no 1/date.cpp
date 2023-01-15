#include<iostream>
#include"date.h"
using namespace std;

void Date::setMonth(int mon)
{
	 while (mon > 12 || mon < 1)
	 {
		cout << "Invalid entery \n";
		cin >> mon;
	 } 
	 month = mon;
}

void Date::setDay(int da)
{
	while (da > 31 || da < 1)
	{
		cout << "Invalid entery \n";
		cin >> da;
	}
	day = da;
}

void Date::setYear(int yer)
{
	year = yer;
}

string getMONTH(int montH)
{
	switch (montH)
	{
	case(1):
		{
			return "January";
		}
	case(2):
	{
		return "February";
	}

	case(3):
	{
		return "March";
	}

	case(4):
	{
		return "April";
	}

	case(5):
	{
		return "May";
	}

	case(6):
	{
		return "June";
	}

	case(7):
	{
		return "July";
	}

	case(8):
	{
		return "August";
	}

	case(9):
	{
		return "september";
	}

	case(10):
	{
		return "October";
	}

	case(11):
	{
		return "Novemebr";
	}

	case(12):
	{
		return "December";
	}

	}
}

void Date::printDate()
{	
	string string_MON;
	string_MON = getMONTH(month);
	cout << "-----------------------------------------------------\n";
	cout << month << '/' << day << '/' << year << endl;
	cout << string_MON << '/' << day << '/' << year << endl;
	cout << day << '/' << string_MON << '/' << year << endl;
	cout << "-----------------------------------------------------";

}
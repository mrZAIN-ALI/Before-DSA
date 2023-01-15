#include"Date.h"
#include<iostream>
using namespace std;
int main()
{
	Date date;
	bool flag = true;
	int _day, _month, _year;
	_day = _month = _year = 0;
	cout << "ENTER DATE DATA IN INTEGERS\n";
	cout << "Enter Day >>";
	cin >> _day;
	
	while (flag)
	{
		
		try
		{
			date.set_Day(_day);
			flag = false;
		}
		catch (Date::invalid_Day d)
		{
			flag = true;
			cout << "you have Enterded invalid date " << d.get_value()<<endl;
			cout << "Try again >>";
			cin >> _day;
		}
	}
	flag = true;
	cout << "Enter month >>";
	cin >> _month;
	while (flag)
	{

		try
		{
			date.set_Month(_month);
			flag = false;
		}
		catch (Date::invalid_Month d)
		{
			flag = true;
			cout << "you have Enterded invalid date " << d.get_value() << endl;
			cout << "Try again >>";
			cin >> _month;
		}
	}
	cout << "Enter Year >>";
	cin >> _year;
	while (_year < 1)
	{
		cout << "Enter Valid Year >>";
		cin >> _year;
	}
	date.set_year(_year);
	cout << "You have Entered \n";
	date.show_Date();
	cout << "\nHave Great Day";
	return 0;
}
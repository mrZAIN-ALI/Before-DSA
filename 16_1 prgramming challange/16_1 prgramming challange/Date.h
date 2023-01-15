#ifndef  DATE_H
#define  DATE_H
#include<string>
using namespace std;
class Date
{
	int month;
	int day;
	int year;
	string string_month;

public:
	Date() { month = day = year = 0; }

	void hellp() {};
	void show_Date();
	const string get_Month(int *);
	void set_Day(int& );
	void set_Month(int&);
	void set_year(int&);
	class invalid_Day
	{
		int invalid_day;
	public:
		invalid_Day(int &d) { invalid_day = d; }
		int get_value() { return invalid_day; }
		
	};
	class invalid_Month
	{
		int invalid_month;
	public:
		invalid_Month(int& m) { invalid_month = m; }
		int get_value() { return invalid_month; }

	};
};
#endif // ! DATE_H

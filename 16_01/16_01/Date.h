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

	void show_Date();
	const string& get_Month(int *);
};
#endif // ! DATE_H

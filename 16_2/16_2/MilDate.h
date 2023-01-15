#ifndef MILDATE_H
#define MILDATE_H
class MilDate {
protected:
	int day,
		month,
		year;
public:
	MilDate(int d, int m, int y)
	{
		day = d, month = m, year = y;
	}
	MilDate()
	{
		day = month = year = 0;
	}
	int get_Day() { return day; }
	int get_Month() { return month; }
	int get_year() { return year; }
};
#endif


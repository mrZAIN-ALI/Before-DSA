#pragma once
class MilTime {
protected:
	int hour,
		minute,
		second;
public:
	MilTime(int hour, int min, int sec)
	{
		this->hour = hour;
		minute = min;
		second = sec;
	}
	MilTime()
	{
		hour = minute = second = 0;
	}
	int get_Hour() { return hour; }
	int get_Minute() { return minute; }
	int get_Second() { return second; }
};
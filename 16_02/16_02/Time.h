#pragma once
class Time {
protected:
	int hour,
		minute,
		second;
	
public:
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		minute = min;
		second = sec;
	}
	Time()
	{
		hour = minute = second = 0;
	}
	int get_Hour() { return hour; }
	int get_Minute() { return minute; }
	int get_Second() { return second; }
};
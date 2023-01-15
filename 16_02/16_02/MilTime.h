#pragma once
#include"Time.h"
#include<string>
using namespace std;
class MilTime :public Time
{
	int milHours;
	int milSeconds;

public:
	MilTime(int mil_hours, int mil_Seconds);
	void setTime(int mil_hours,int mil_Seconds);
	int getHour();
	int getStandardHour();

};
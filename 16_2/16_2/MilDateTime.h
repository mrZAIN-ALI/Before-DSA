#pragma once
#include"MilDate.h"
#include"MilTime.h"
class MilDateTime :public MilDate, public MilTime
{
public:
	MilDateTime();
	MilDateTime(int, int, int, int, int, int);
	void showDateTime();
};
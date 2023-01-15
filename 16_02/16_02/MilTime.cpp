#include"MilTime.h"

void MilTime::setTime(int mil_hours, int mil_Seconds) {
	milHours = mil_hours;
	milSeconds = mil_Seconds;
	
	if (mil_hours >1200 ) {
		mil_hours %= 1200;
		hour = mil_hours / 100;
		minute = mil_hours % 100;
	}
	else {
		hour = mil_hours / 100;
		minute = mil_hours % 100;
	}
	second = mil_Seconds;
}
MilTime::MilTime(int mil_hours, int mil_Seconds) {
	setTime(mil_hours, mil_Seconds);
}    
int MilTime::getHour() {
	return milHours;
}

int MilTime::getStandardHour() {
	return get_Hour();
}
#include"MilDate.h"
#include"MilTime.h"
#include"MilDateTime.h"
#include<string>
#include<iostream>
using namespace std;

MilDateTime::MilDateTime() : MilTime(), MilDate() {

}
MilDateTime::MilDateTime(int d, int m, int y, int h, int min, int s) :MilDate(d, m, y), MilTime(h, min, s)
{

}
void MilDateTime::showDateTime()
{
	cout << "D/M/Y\n";
	cout << get_Day() << "/" << get_Month() << "/" << get_year() << endl;
	cout << "H/Min/S\n";
	cout << get_Hour() << "/" << get_Minute() << "/" << get_Second() << endl;
}
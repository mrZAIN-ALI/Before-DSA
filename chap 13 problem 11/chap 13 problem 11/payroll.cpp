#include"Payroll.h"
void Payroll::setHpay(float hPr)
{
	hourlyPayRate = hPr;
}

void Payroll::setnumOfHou(int h)
{
	numberOfHoursW = h;
}

float Payroll::getHpay()
{
	return hourlyPayRate;
}

float Payroll::getnumOfhourW()
{
	return numberOfHoursW;
}

float Payroll::getTpay()
{
	return (getnumOfhourW() * getHpay());
}
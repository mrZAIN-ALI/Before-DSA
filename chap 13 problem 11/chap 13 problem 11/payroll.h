#include<iostream>

class Payroll
{
	float hourlyPayRate=100;
	float totalPay;
	int numberOfHoursW;
public:
	void setHpay(float);
	void setnumOfHou(int);

	float getHpay();
	float getTpay();
	float getnumOfhourW();
};

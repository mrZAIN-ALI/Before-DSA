#include<iostream>
using namespace std;
class Car
{
	int YearModel;
	int speed;
	string make;
public:
	int getYearmodel()
	{
		return YearModel;
	}
	int getSpeed()
	{
		return speed;
	}
	string getMake()
	{
		return make;
	}
	Car(int, string);
	void accelerate();
	void brake();
};

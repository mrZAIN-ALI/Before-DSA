#include"car.h"
#include<iostream>

Car::Car(int model,string mak)
{
	YearModel = model;
	make = mak;
	speed = 0;
}
void Car::accelerate()
{

	speed+= 5;
}
void Car::brake()
{
	speed -= 5;

}

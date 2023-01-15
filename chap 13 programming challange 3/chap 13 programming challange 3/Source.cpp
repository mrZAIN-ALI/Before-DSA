#include<iostream>
#include"car.h"
#include <string>
using namespace std;
int main()
{
	string mak;
	int model;
	int speed=0;

	cout << "Enter Model of Car (int) : ";
	cin >> model;
	cin.ignore();
	cout << "Enter Year nnake of car : ";
	getline(cin, mak);


	Car car1(model, mak);
	for (int i = 0; i < 5; i++)
	{
		car1.accelerate();
		cout << "value of sped is using accelarator: " << car1.getSpeed()<<endl;

	}
	for (int i = 0; i < 5; i++)
	{
		car1.brake();
		cout << "value of sped is using brake : " << car1.getSpeed()<<endl;

	}

}
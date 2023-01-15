#include<iostream>
#include"payroll.h"
using namespace std;
int main()
{
	float temp;
	int h;
	const int SIZE = 7;
	Payroll arr[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		cout << "Enter Numbr of hours work for Workder no " << i + 1 << " : ";
		cin >> h;
		arr[i].setnumOfHou(h);
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Here is total pay of worker no " << i + 1 << arr[i].getTpay()<<" $ \n";
	}
		
}
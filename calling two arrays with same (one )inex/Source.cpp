#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	const int num_ofemployee = 5;
	int hours[num_ofemployee];//no fo hours worl
	double pay_rate[num_ofemployee];

	for (int index = 0; index < num_ofemployee; index++)
	{
		cout << "Enter no of hours workeed by employee # " << index + 1 << " : ";
		cin >> hours[index];
		cout << "Enter pay rate for Employee # " << index + 1 << " : \n";
		cin >> pay_rate[index];


	}

	cout << "Here is Groos pay for each employee : \n ";
	for (int index = 0; index < num_ofemployee; index++)
	{
		cout << "Gross pay for employee # " << index + 1
			<< " is : " << hours[index] * pay_rate[index] << " $ \n";
	}
	return 0;
}

#include<iostream>
#include"buget.h"
using namespace std;

int main()
{
	const int numberofDiv = 4;
	double temp=0;

	cout << "Enter office bugget : ";
	cin >> temp;
	Buget::addOfficeBuget(temp);
	
	Buget arrOfbuget[numberofDiv];

	for (int i = 0; i < numberofDiv; i++)
	{
		cout << "Enter bugget for division no " << i + 1 << " : ";
		cin >> temp;
		arrOfbuget[i].addBuget(temp);
	}

	for (int i = 0; i < numberofDiv; i++)
	{
		cout << "Here is bugget foe division no " << i + 1 << arrOfbuget[i].getDivBuget() << endl;
	}

	cout << "here is corpurate buget including office buget ==>>>" <<arrOfbuget[1].getcotpurateBuget();

}
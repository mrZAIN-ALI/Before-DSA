#include"auxiliary.h"
#include"Buget.h"
#include<iostream>
using namespace std;
int main()
{
	double balance=0.0;
	//int numberOfdiv=0;
	const int numberOfDivision = 4;

	Buget division1(numberOfDivision);
	AuxiliaryOffice a1;
	cout << "Enter Balance request for main office : ";
	cin >> balance;
	division1.setBalance(balance, 0);


	division1.setNumOfdivision(numberOfDivision);
	for (int i = 0; i < numberOfDivision; i++)
	{
		cout << "Enter balance for division no # " << i + 1 << " : ";
		cin >> balance;
		division1.setBalance(balance, i);

	}

	cout << "Enter Balance for auxiliary Office : ";
	cin >> balance;
	a1.addBuget(balance,division1);

	cout << "Here is Balance details \n";

	for (int i = 0; i < numberOfDivision; i++)
	{
		cout << "division no " << i + 1 << "==>" << division1.getBalance(i)<<endl;
	}

	cout << "here is auxiliary Bugget Request ==>" << a1.getAuxBuget() << endl;

	cout << "Here is corpurate balance includeing aux and main office request balance ===>" << division1.getCorpBal();
}
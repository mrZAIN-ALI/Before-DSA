#include"bugget.h"
#include"auxiliary.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double buggetamount = 0;
	const int NUMBEROFDIVISION = 4;

	Bugget division[NUMBEROFDIVISION];
	Auxiliary auxdivision[NUMBEROFDIVISION];

	cout << setfill('#') << setw(33) << " \n";
	cout << "Enter Main office bugget :";
	cin >> buggetamount;
	Bugget::addMainOfficeBug(buggetamount);

	for (int i = 0; i < NUMBEROFDIVISION; i++)
	{
		buggetamount = 0;
		cout << "ENter division bugget for div no " << i + 1 << " : ";
		cin >> buggetamount;
		division[i].addDivBugget(buggetamount);

		cout << "Enter Auciliary bugget for division no " << i + 1 << " : ";
		cin >> buggetamount;
		auxdivision[i].addBugget(buggetamount,division[i]);
	}
	cout << setfill('#') << setw(33) << " \n";
	for (int i = 0; i < NUMBEROFDIVISION; i++)
	{
		cout << "Bugget for division no " << i + 1 << " is $" << division[i].getDivBugget()<<endl;
		cout << "Auxiliary for that division is $ " << auxdivision[i].getDivisionBug()<<endl;



	}
	cout << setfill('#') << setw(33) << " \n";

	cout << "And corp bugget is : " << division[0].getCorpBugget()<<endl;
	cout << setfill('#') << setw(33) << " \n";

}
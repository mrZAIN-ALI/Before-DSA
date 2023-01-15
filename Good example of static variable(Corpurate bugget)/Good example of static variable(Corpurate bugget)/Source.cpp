#include<iostream>
#include<iomanip>
#include"corpbugget.h"
using namespace std;
int main(){

	const int NUMBEROFDIVISIONS = 4;
	CorpurateBugget division[NUMBEROFDIVISIONS];

	for (int i = 0; i < NUMBEROFDIVISIONS; i++){
		double temp = 0;
		cout << "Enter Division bugget for division no " << i + 1 << " : ";
		cin >> temp;
		division[i].addDivisionBugget(temp);

	}

	cout << fixed << setprecision(2) << showpoint;
	
	cout << "youe have Enterd The Following amount \n";
	for (int i = 0; i < NUMBEROFDIVISIONS; i	++){

		cout << "Division bugget no  " << i + 1 << " is $" << division[i].getDivisionBugget() <<endl;

	}

	cout << "Corpurate Bugget is  $" << division[0].getCorpurateBugget();
}
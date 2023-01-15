#include"corpbugget.h"
#include<iostream>
using namespace std;

//initializing static corpbugget
double CorpurateBugget::corpurateBugget = 0;

CorpurateBugget::CorpurateBugget(){

	divisionBugget = 0;
}

CorpurateBugget::~CorpurateBugget() {

	cout << "\nBye bye I am from destructor have a great day\n";
}

void CorpurateBugget::addDivisionBugget(double bug) {

	divisionBugget += bug;
	corpurateBugget += bug;
}

double CorpurateBugget::getCorpurateBugget () const {

	return corpurateBugget;
}

double CorpurateBugget::getDivisionBugget() const {
	return divisionBugget;
}


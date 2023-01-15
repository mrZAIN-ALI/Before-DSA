#include"bugget.h"
#include<iostream>
using namespace std;

double Bugget::corpurateBugget = 0;

 void Bugget::addMainOfficeBug(double moffBug) {
	 corpurateBugget += moffBug;
}



void Bugget::addCorpBugget(double dBug) {
	corpurateBugget += dBug;
}

double Bugget::getCorpBugget() const {
	return corpurateBugget;
}

double Bugget::getDivBugget() const{
	return divisionBugget;
}

Bugget::Bugget() {
	divisionBugget = 0;
}

Bugget::~Bugget() {
	cout << "Bye Bye From Bugget Class\n";
}
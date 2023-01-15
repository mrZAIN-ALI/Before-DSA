#include"auxiliary.h"
#include"bugget.h"
#include<iostream>
using namespace std;

void Auxiliary::addBugget(double bugget, Bugget &obj) {
	
	obj.corpurateBugget += bugget;
	divisionBugget += bugget;
}
void Bugget::addDivBugget(double dBug) {
	divisionBugget += dBug;
	corpurateBugget += dBug;

}
double Auxiliary::getDivisionBug()
{
	return divisionBugget;
}

Auxiliary::Auxiliary(){
	divisionBugget = 0;
}

Auxiliary::~Auxiliary() {
	cout << "By bye from aux class\n";
}
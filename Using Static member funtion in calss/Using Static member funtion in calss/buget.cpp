#include"buget.h"
Buget::Buget()
{
	divisionBuget = 0;
}
double Buget::corpurateBuget = 0;

void Buget::addBuget(double Bug)
{
	divisionBuget += Bug;
	corpurateBuget += Bug;
}

double Buget::getcotpurateBuget() const { return corpurateBuget; }
double Buget::getDivBuget() const  { return divisionBuget; }
void Buget::addOfficeBuget(double oBug)
{
	corpurateBuget += oBug;
}
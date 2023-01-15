#include"Buget.h"
Buget::Buget(int size)
{
	getArrOfBuget(size);
}
double Buget::corpbuget = 0;

void Buget::setNumOfdivision(int num)
{
	numOfDiv = num;
}
void Buget::setBalance(double val, int index)
{
	balance[index] = val;
	buget += val;
	corpbuget += val;
}


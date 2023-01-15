#include"auxiliary.h"
#include"Buget.h"

void AuxiliaryOffice::addBuget(double b,  Buget& obj)
{
	auxBuget += b;
	obj.corpbuget += b;
}
#ifndef Buget_h
#define Buget_h
#include"auxiliary.h"

class Buget
{
	double* balance = nullptr;
	int numOfDiv=0;
	double buget;
	static double corpbuget;
	void getArrOfBuget(int size)
	{
		numOfDiv = size;
		balance = new double[size];
		for (int i = 0; i < size; i++)
		{
			balance[i] = 0;
		}
	}
public:
	Buget(int );
	~Buget() { delete[] balance; };
	void setNumOfdivision(int);
	void setBalance(double val, int index);
	double getBalance(int index ) { return balance[index]; }
	double getCorpBal() { return corpbuget; }
	

	friend void AuxiliaryOffice::addBuget(double,  Buget&);
	
};
#endif
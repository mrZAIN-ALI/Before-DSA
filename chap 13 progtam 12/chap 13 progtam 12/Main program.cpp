#include"coin.h"
#include<string>
#include<iomanip>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
	string temp;
	Coin c1;
	int lenth = 20;
	int hC=0;
	int tC=0;
	for (int i = 0; i < lenth; i++)
	{
		c1.tossUp();
		temp=c1.getTossup();
		cout <<i+1<< " =>Here id face of coin upwards : " << temp << endl << endl;
		cout << setw(45) << setfill('#') << "\n";
		if (c1.getTossup() == "head")
		{
			hC ++;
		}
		else 
		{
			tC ++;
		}
	}

	cout << "The Head comes " << hC << " times\n";
	cout << "The tail comes " << tC << " times\n";

}
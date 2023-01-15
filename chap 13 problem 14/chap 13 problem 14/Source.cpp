#include<iostream>
#include<string>
#include"fish.h"
#include<iomanip>
using namespace  std;
int main()
{
	unsigned seed;
	seed = time(0);
	srand(seed);

	char choice='n';
	float fishPoint=0.0,total=0.0;
	int counter=1;
	Fish p1;
	cout << setw(50) << setfill('#') << "\n";
	cout << "Hey Welcome to Fishing Game\n Just simply press y for agin turn\n";
	cout << setw(50) << setfill('#') << "\n\n";
	do
	{
		cout << setw(50) << setfill('*') << "\n";
		cout << "Welcome tp round no " << counter << endl;
		p1.getFish(p1.toss());
		cout << setw(50) << setfill('+') << "\n";
		cout << "WOW! you have cought >>>>>>" << p1.getCurrStatus()<<"<<<<<<" << endl;
		fishPoint=p1.getPoint(p1.getCurrStatus());
		total += fishPoint;
		p1.settot(total);


		cout << setw(50) << setfill('#') << "\n";

		cout << "Do you want to continue Fishing \nPress y to continue and n to quit";
		cin >> choice;
		counter++;
		system("cls");
	} while (choice=='y'||choice=='Y');
	cout << setw(50) << setfill('$') << "\n";

	cout << "Congratulations Here is your Total score : "<<p1.getTotPoints()<<endl;
	cout << setw(50) << setfill('$') << "\n\n";


}
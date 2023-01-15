#include "Cart.h"
#include <iostream>
#include<string>
#include<iomanip>
#include"Account.h"
#include<fstream>
using namespace std;
string name,billChoice;
double grandPrice = 0.0;
void printElectronicBill(Account* account_ptr);
void pringGroceryBill(Grocery*);
void Cart::addToECart(Electronics* e)
{
	eArr[Cart::eCount] = *e;
	eCount++;
}

void Cart::addToGCart(Grocery* g)
{
	gArr[Cart::gCount] = *g;
	gCount++;
}

void Cart::displayCart(Account* accptr)
{
	name=(accptr->get_User_name());
	system("cls");
	cout << setw(30) << setfill('#') << "\n";
	cout << "\tCart\t\t\n";
	cout << setw(30) << setfill('#') << "\n";
	if (eCount == 0 && gCount==0)
	{
		cout << "NO item to show\n";
	}
	else if(eCount!=0)
	{
		for (int i = 0; i < eCount; i++)
		{
			cout << setw(30) << setfill('~') << "\n";
			cout <<"Name of Product is : " << eArr[i].get_Name() << endl;
			cout << setw(30) << setfill('~') << "\n";
			cout <<"Id of Product is : " << eArr[i].get_Id() << "\t\t" << endl;
			cout << setw(30) << setfill('~') << "\n";
			cout <<"Cupon Discoint is : " << eArr[i].get_CuponDiscount() << "\t\t" << endl;
			cout << setw(30) << setfill('~') << "\n";
			cout << "Retail Price is : " << eArr[i].get_Price() << "\t\t" << endl << endl;
			cout << setw(30) << setfill('~') << "\n";

			grandPrice += eArr[i].get_Price();

		}


	}
	if (gCount != 0)
	{
		for (int i = 0; i < gCount; i++)
		{
			cout << setw(30) << setfill('~') << "\n";

			cout <<"Name of Product" << gArr[i].get_Name() << "\t\t" << endl;
			cout << setw(30) << setfill('~') << "\n";

			cout << "Id of Product is : " << gArr[i].get_Id() << "\t\t" << endl;
			cout << setw(30) << setfill('~') << "\n";

			cout << "Cupon Discoint is : " << gArr[i].get_CuponDiscount() << "\t\t" << endl;
			cout << setw(30) << setfill('~') << "\n";

			cout << "Retail Price is : " << gArr[i].get_Price() << "\t\t" << endl << endl;
			cout << setw(30) << setfill('~') << "\n";

			grandPrice += gArr[i].get_Price();
		}
	}
	cout << setw(30) << setfill('$') << "\n";
	cout << "Grand Total is: " << grandPrice << endl;
	cout << setw(31) << setfill('$') << "\n\n";
	cout << "To create Bill Enter 'bill' \n";
	cin >> billChoice;
	if (billChoice == "bill")
	{
		cout << billChoice;
		printElectronicBill(accptr);
	}
	
}

void printElectronicBill(Account * account_ptr)
{
	
	string fname = "database/Bill"+name + ".txt";
	fstream outFile;
	outFile.open(fname + ".txt", ios::out);
	if (outFile)
	{
		outFile << account_ptr->get_User_name()<<endl;
		outFile << account_ptr->get_Adress() << endl;
		outFile << account_ptr->get_Gender()<<endl;
		outFile << grandPrice;
		cout << " bill created to quit enter 'q'\n";

	}
	else
	cout << "Can not create Bil\n";
}

#include"retailItems.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string desc;
	int units;
	double price;
	
	cout << "Enter description : ";
	getline(cin, desc);
	cin.ignore(NULL);

	cout << "Enter units on hand : ";
	cin >> units;
	cout << "ENter prixe per unit : ";
	cin >> price;

	RetailItems item1(desc, units, price);

	cout << "Here is price of item no 1 : ";
	cout << item1.getPrice() << endl;

	//item 2
	cin.ignore();
	cout << "Enter description : ";
	getline(cin, desc);
	cin.ignore(NULL);

	cout << "Enter units on hand : ";
	cin >> units;
	cout << "ENter prixe per unit : ";
	cin >> price;

	RetailItems item2(desc, units, price);

	cout << "Here is price of item no 1 : ";
	cout << item2.getPrice()<<endl;

	//item 3
	cin.ignore();
	cout << "Enter description : ";
	getline(cin, desc);
	cin.ignore(NULL);

	cout << "Enter units on hand : ";
	cin >> units;
	cout << "ENter prixe per unit : ";
	cin >> price;

	RetailItems item3(desc, units, price);

	cout << "Here is price of item no 1 : ";
	cout << item3.getPrice();

}
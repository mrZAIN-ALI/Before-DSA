#include<iostream>
#include"employee.h"
#include<string>
using namespace std;
int main()
{
	string name;
	string posi, depart;
	int tempID;
	cout << "Enter Name of Employee 1 : ";
	getline(cin, name);
	cin.ignore(NULL);

	cout << "Enter id of Employee : ";
	cin >> tempID;
	cin.ignore();

	cout << "Enter position fo Employee  :";
	cin>> posi;
	cin.ignore();

	cout << "Enter Department of Employee : ";
	cin>>depart;
	cin.ignore();

	Employee emp1(name, tempID, depart, posi);

	cout << "Enter Name of Employee 2 : ";
	getline(cin, name);
	cin.ignore(NULL);

	cout << "Enter id of Employee : ";
	cin >> tempID;
	cin.ignore();

	cout << "Enter position fo Employee  :";
	cin >> posi;
	cin.ignore();

	cout << "Enter Department of Employee : ";
	cin >> depart;
	cin.ignore();

	Employee emp2(name, tempID, depart, posi);

	cout << "Enter Name of Employee 3 : ";
	getline(cin, name);
	cin.ignore(NULL);

	cout << "Enter id of Employee : ";
	cin >> tempID;
	cin.ignore();

	cout << "Enter position fo Employee  :";
	cin >> posi;
	cin.ignore();

	cout << "Enter Department of Employee : ";
	cin >> depart;
	cin.ignore();

	Employee emp3(name, tempID, depart, posi);

	emp2.status();
	emp2.status();
	emp3.status();

	return 0;

	

}
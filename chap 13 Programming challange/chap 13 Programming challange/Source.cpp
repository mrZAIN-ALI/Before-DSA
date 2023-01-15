#include"person.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	Data p1, p2, p3;
	string nam, adr;
	int ag;
	unsigned long long int ph;
	cout << "Enter name of Perosn 1 ";
	getline(cin, nam);
	p1.setName(nam);
	cin.ignore(NULL);

	cout << "Enter Adress of person 1 : ";
	getline(cin, adr);
	p1.setAdress(adr);
	cin.ignore(NULL);

	cout << "Enter age of Persin 1 : ";
	cin >> ag;
	p1.setAge(ag);

	cout << "Enter Phone no of perosn 1 : ";
	cin >> ph;
	p1.setPhone(ph);
	cin.ignore();

	//Person 2
	cout << "Enter name of Perosn 2 ";
	getline(cin, nam);
	p2.setName(nam);
	cin.ignore(NULL);

	cout << "Enter Adress of person 2 : ";
	getline(cin, adr);
	p2.setAdress(adr);
	cin.ignore(NULL);

	cout << "Enter age of Persin 2 : ";
	cin >> ag;
	p2.setAge(ag);

	cout << "Enter Phone no of perosn 2 : ";
	cin >> ph;
	p2.setPhone(ph);
	cin.ignore();
	//person 3
	cout << "Enter name of Perosn 3 ";
	getline(cin, nam);
	p3.setName(nam);
	cin.ignore(NULL);

	cout << "Enter Adress of person 3 : ";
	getline(cin, adr);
	p3.setAdress(adr);
	cin.ignore(NULL);

	cout << "Enter age of Persin 3 : ";
	cin >> ag;
	p3.setAge(ag);

	cout << "Enter Phone no of perosn 3 : ";
	cin >> ph;
	p3.setPhone(ph);

	cout << "Here is data you habe entered \n";
	p1.status();
	p2.status();
	p3.status();

	return 0;

}
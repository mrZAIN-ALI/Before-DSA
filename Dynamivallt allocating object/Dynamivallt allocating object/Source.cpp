#include<iostream>
#include<string>
#include"person.h"
using namespace std;
int main()
{
	string tempN;
	double weig;
	int ag;

	//Person p1;
	Person *ptr1 =nullptr;

	ptr1 = new Person;

	cout << "Enter Name of Person :";
	getline(cin, tempN);
	ptr1->setName(tempN);

	cin.ignore(NULL);
	cout << "Enter age of PErson : ";
	cin >> ag;
	(*ptr1).setAge(ag);

	cout << "Enter weight of Person :";
	cin >> weig;
	ptr1->setWeight(weig);

	cout << "Here is Data of Person You have entered \n ";
	cout << "Name is : " << ptr1->getName() << endl;

	cout << "Age is : " << ptr1->getAge();

	delete ptr1;

	return 0;



}
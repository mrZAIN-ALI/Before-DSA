#include"instructor.h"
#include<iostream>
using namespace std;
void Instructor::set(string lName, string fName, string oNumber)
{
	lastName = lName;
	firstName = fName;
	officeNumber = oNumber;
}
Instructor::Instructor(string lName, string fName, string oNumber)
{
	set(lName, fName, oNumber);
}
void Instructor::print()
{
	cout << "First Name is : " << firstName << endl;
	cout << "Last Name is : " << lastName << endl;
	cout << "Office Numebr is : " << officeNumber << endl;
}
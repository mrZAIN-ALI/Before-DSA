#include"course.h"
#include<iostream>
using namespace std;
Course::Course(string courseTitle, string lName, string fName, string ofNum, string titl, string author, string publisher)
{
	courseName = courseTitle;
	instructor.set(lName, fName, ofNum);
	textbook.set(titl, author, publisher);
	cout << "Hi from constructor of Course\n";
}
Course::~Course()
{
	cout << "Hi from destructor of course\n";
}
void Course::print()
{
	cout << "Course name is : " << courseName<<endl;
	textbook.print();
	instructor.print();
}
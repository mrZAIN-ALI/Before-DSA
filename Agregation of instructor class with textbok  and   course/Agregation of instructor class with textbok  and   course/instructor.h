#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include<iostream>
#include<string>
using namespace std;
class Instructor
{
	string lastName;
	string firstName;
	string officeNumber;
public:
	void set(string, string, string);
	Instructor()
	{
		set("", "", "");
		cout << "From constructor of instructor\n";
	}
	Instructor(string, string, string);
	void print();
	~Instructor()
	{
		cout << "From destructor of instructor\n";
	}
};
#endif 
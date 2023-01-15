#include"employee.h"
#include<iostream>
#include<string>
using namespace std;
void Employee::setName(string name1)
{
	name = name1;
}

void Employee::setDep(string depart)
{
	department = depart;
}

void Employee::setPosition(string positio)
{
	position = positio;
}

void Employee::setId(int id1)
{
	idNumber = id1;
}

string Employee::getName() 
{
	return name;
}

string Employee::getdep() const
{
	return department;
}

string Employee::getpostion() const
{
	return position;
}

int Employee::getId() const
{
	return idNumber;
}


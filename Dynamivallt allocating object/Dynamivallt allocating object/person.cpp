#include"person.h"
using namespace std;

void Person::setName(string nam)
{
	name = nam;
}
void Person::setAge(int ag)
{
	age = ag;
}
void Person::setWeight(double weigh)
{
	weight = weigh;
}

int Person::getAge()
{
	return age;
}

double Person::getWeight()
{
	return weight;
}
string Person::getName()
{
	return name;
}
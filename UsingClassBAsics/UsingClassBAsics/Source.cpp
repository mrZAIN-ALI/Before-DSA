#include<iostream>
#include<string>
using namespace std;
class Person
{
	string id;
	string name;
	string status;
	int age;
public:
	void setID(string);
	void setName(string);
	void setStatus(string);
	void setAge(int);
	string getId() const;
	string getName() const;
	string getStatus() const ;
	int getAge() const ;
	void checkSTATUS() const ;

};

void Person::setID(string iD)
{
	id = iD;
}
void Person::setName(string nam)
{
	name = nam;
}
void Person::setStatus(string stat)
{
	status = stat;
}
void Person::setAge(int ag)
{
	age = ag;
}
string Person::getId() const
{
	return id;
}
string Person::getName() const 
{
	return name;
}
string Person::getStatus() const 
{
	return status;
}
int Person::getAge() const 
{
	return age;
}
void Person::checkSTATUS() const 
{
	cout << "Name is : " << getName() << endl;
	cout << "ID is : " << getId() << endl;
	cout << "Status is : " << getStatus() << endl;
	cout << "Age is : " << getAge() << endl;
}
int main()
{
	string name, id, status;
	int age;
	Person p1;
	cout << "Enter name of Person 1 : ";
	getline(cin, name);

	cout << "Enter Id of PErson 1 : ";
	getline(cin, id);

	cout << "Enter status of Person 1 :";
	getline(cin, status);
	
	cin.ignore(NULL);
	cout << "Enter Age og PErson 1 ";
	cin >> age;

	p1.setName(name);
	p1.setID(id);
	p1.setStatus(status);
	p1.setAge(age);

	cout << "Hete is current Status of Attributes : \n";
	cout << "___________________________________________";
	p1.checkSTATUS();
	cout << "___________________________________________";

	return 0;


}
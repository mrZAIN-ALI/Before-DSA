#include<iostream>
using namespace std;
class Data
{
	int age;
	string name, adress;
	unsigned long long int phone;

public:
	void setAge(int ag)
	{
		age = ag;
	}
	void setPhone(unsigned long long int ph)
	{
		phone = ph;
	}
	void setName(string nam)
	{
		name = nam;
	}
	void setAdress(string adrs)
	{
		adress = adrs;
	}

	int getAge()
	{
		return age;
	}
	unsigned long long int getPhone()
	{
		return phone;
	}
	string getName()
	{
		return name;
	}
	string getAdress()
	{
		return adress;
	}
	void status()
	{
		cout << "_____________________________________\n";
		cout << "Here is Namee of Person : ";
		cout << name<<endl;
		cout << "age of person is : " << age<<endl;
		cout << "Afress of person is : " << adress<<endl;
		cout << "Phone no is : " << phone<<endl;
		cout << "_____________________________________\n";

	}
};

#include<iostream>
using namespace std;
class BaseClass
{
public:
	BaseClass()
	{
		cout << "This is base class constructor\n";
	}
	~BaseClass()
	{
		cout << "This is base class Destructor\n";
	}
};
class DerivedClass :public BaseClass
{
public:
	DerivedClass()
	{
		cout << "This is Derived Class Constructor\n";

	}
	~DerivedClass()
	{
		cout << "This is Derived Class Destructor\n";

	}
};
int main()
{
	cout << "Now i am going to Make derived Class's object\n";
	DerivedClass obj;
	cout << "End of Program in main\n";
	return 0;
}
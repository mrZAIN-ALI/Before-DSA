#include<iostream>
#include<string>
using namespace std;
template<class t1,class t2>
int largest(t1* a, t2* b)
{
	if (sizeof(*a) > sizeof(*b))
	{
		return sizeof(*a);
	}
	else
	{
		return sizeof(*b);

	}
}
int main()
{
	int i = 0;
	double d = 0.0;
	float f = 0.0;
	char c = ' ';
	string s = " ";
	
	cout << "Compairing int and double \n";
	cout << "Largest of two is with " << largest(&i, &d)<<" bytes\n";
	cout << "Compairing float and char \n";
	cout << "Largest of two is with " << largest(&f, &c)<<" bytes\n";
	cout << "Compairing char and string \n";
	cout << "Largest of two is with " << largest(&c, &s)<<" bytes\n";
	
}
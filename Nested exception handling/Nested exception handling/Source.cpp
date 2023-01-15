#include<iostream>
#include<string>
using namespace std;
void doSomething(int);
void doSomethinfElse(int);
int main()
{
	int n;
	cout << "Enter Int: ";
	cin >> n;
	try
	{
		doSomething(n);
	}
	catch (string s)
	{
		cout << s << endl;
	}
	catch (int n)
	{
		cout << n<<endl;
	}
}
void doSomething(int n)
{
	/*if (n < 0)
	{
		string error = "Error it is -ve value\n";
		throw error;
	}*/

	cout << "Success\n call to dosomethingelse\n";
	try
	{
		doSomethinfElse(n);
	}
	catch (int)
	{
		cout << "it is int catch\n";
		string st = "Again sending string\n";
		throw st;
	}
	
}
void doSomethinfElse(int n)
{
	if (n > 0)
	{
		/*string error = "Error it is +ve value\n";
		throw error;*/
		int n=1;
		throw n;
	}
}
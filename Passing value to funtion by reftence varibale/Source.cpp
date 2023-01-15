#include<iostream>
using namespace std;
void reffun(int&, int&);
int main()
{
	int val, val1;
	cout << "This program use ref variable \n";
	cout << "Now i am callint reffuntion : \n";
	reffun(val, val1);
	cout << "Number you have Enterd are : \n";
	cout << "Number 1 is : " << val << "Number 2 is : " << val1;
	return 0;
}
void reffun(int& refnum, int& refnum1)
{
	cout << "Enter number 1 :";
	cin >> refnum; cout << endl;
	cout << "Enter number 2 : ";
	cin >> refnum1;
}
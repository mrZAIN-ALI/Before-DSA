#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void double_value(int &);
int main()
{
	vector<int> intVect;
	vector<int>::iterator iter;

	for (int i = 0; i < 10; i++)
	{
		intVect.push_back(i + 1);
	}

	cout << "Values are\n";
	for ( iter = intVect.begin(); iter < intVect.end(); iter++)
	{
		cout << *iter<<" ";
	}
	cout << endl;

	for_each(intVect.begin(), intVect.end(), double_value);
	cout << "After Doubleing Values are\n";
	for (iter = intVect.begin(); iter < intVect.end(); iter++)
	{
		cout << *iter << " ";
	}
}
void double_value(int& v)
{
	v *= 2;
}
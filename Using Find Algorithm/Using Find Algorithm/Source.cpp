#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> intVect;
	vector<int>::iterator iter;

	for (int i = 0; i < 10; i++)
	{
		intVect.push_back(i + 1);
	}

	cout << "Now i am going to ioplement find algorithm"
		<< "i am going to Find 8\n";
	iter= find(intVect.begin(), intVect.end(), 8);
	cout << *iter << endl;
}
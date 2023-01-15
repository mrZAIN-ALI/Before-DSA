#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> intVect;
	vector<int>::iterator iter;

	cout << "Adding some values to Vector\n";
	intVect.push_back(1);
	intVect.push_back(1);
	intVect.push_back(3);
	intVect.push_back(3);
	intVect.push_back(2);
	intVect.push_back(2);
	intVect.push_back(1);
	intVect.push_back(3);

	cout << "Values in Vactor are " << intVect.size() << " \n";
	for ( iter = intVect.begin(); iter < intVect.end(); iter++)
	{
		cout << *iter<<" ";
	}

	cout << "Repeated Values are\n";
	cout << "1 is "<< count(intVect.begin(), intVect.end(), 1) << " Times\n";
	cout << "2 is "<< count(intVect.begin(), intVect.end(), 2) << " Times\n";
	cout << "3 is "<< count(intVect.begin(), intVect.end(), 3) << " Times\n";

	return 0;
}
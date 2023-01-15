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

	cout << "The Vector has " << intVect.size() << " Elements \n";
	cout << "And these are \n";
	for (int i = 0; i < 10; i++)
	{
		cout << intVect[i]<< " ";
	}
	cout << endl;

	random_shuffle(intVect.begin(), intVect.end());
	cout << "After shuffle\n";
	for (int i = 0; i < 10; i++)
	{
		cout << intVect[i] << " ";
	}
	cout << endl;
	random_shuffle(intVect.begin(), intVect.end());
	cout << "After shuffle\n";
	for (int i = 0; i < 10; i++)
	{
		cout << intVect[i] << " ";
	}
	cout << endl;
	cout << "Now Sorting it\n";
	
	sort(intVect.begin(), intVect.end());
	cout << "After Sorting it is\n";
	for (int i = 0; i < 10; i++)
	{
		cout << intVect[i] << " ";
	}
	cout << endl;
	
	bool flag = false;
	cout << "NOw Binary search\n";
	cout << "Searching for 8 in vector\n";
	flag=binary_search(intVect.begin(), intVect.end(), 8);
	if (flag)
		cout << "Value 8 was found\n";
	else
		cout << "Value 8 was not found\n";

	return 0;
}
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

	cout << "Now iam goig to find largest value\n";
	cout << "Largest value is ==>";
	iter=max_element(intVect.begin(), intVect.end());
	cout << *iter<<endl<<endl;

	cout << "Now iam going to find smallest value\n";
	cout << "smallest value is=->";
	iter = min_element(intVect.begin(), intVect.end());
	cout << *iter<<endl;

}
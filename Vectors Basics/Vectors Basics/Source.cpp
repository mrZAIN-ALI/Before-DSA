#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> stringVect;
	vector<int> intVect;
	int cont = 0;
	cout << "At this time vector has " << intVect.size() << " Elements \n";
	cout << "Now assigning values to vector\n";
	for (cont = 0; cont < 5; cont++)
	{
		intVect.push_back(cont+1);
	}
	cout << "Now Vector has " << intVect.size() << " Elements \n";
	for (int i = 0; i < cont; i++)
	{
		cout << intVect[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < cont; i++)
	{
		intVect.pop_back();
	}
	cout << "Now removng values of vector\n";
	cout << "At this time vector has " << intVect.size() << " Elements \n";
	stringVect.push_back("Hello");
	stringVect.push_back("World");
	cout << stringVect[1];
	return 0;
}
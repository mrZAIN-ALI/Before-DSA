#include<iostream>
#include"SimpleVector.h"
using namespace std;
template<class T>
void showValues(SimpleVector<T> obj, int length)
{
	cout << "Here Are Values\n";
	for (int i = 0; i < length; i++)
	{
		cout << obj.get_specific_Element(i) << " ";
	}
	cout << endl;
}
int main()
{
	const int size = 10;
	SimpleVector<int> intTable(size);
	SimpleVector<double> doubletable(size);
	
	for (int i = 0; i < size; i++)
	{
		intTable[i] = (i+1 * 2);
	}
	showValues(intTable, size);

	for (int i = 0; i < size; i++)
	{
		doubletable[i] = (i+1 * 2.6);
	}
	showValues(doubletable, size);
	
	return 0;
}
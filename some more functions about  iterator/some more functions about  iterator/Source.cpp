#include<iostream>
#include<vector>
using namespace std;
template< class T >
void showVector(vector<T> &v)
{
	
	for (int i =0; i < v.size(); i++)
	{
		
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int size = 5;
	int x;
	vector<int> intVect;

	vector<int>::iterator iter;

	for (int i = 0; i < size; i++)
	{
		intVect.push_back(i + 1);
	}
	showVector(intVect);

	cout << "Now i am going to use at Funtion \n";
	cout << "printing value at index 3 \n";
	x = intVect.at(2);
	cout << x << endl<<endl;

	cout << "Now using back() funtion \n";
	cout << intVect.back();
	cout << endl;
	
	cout << "Now using capacity() duntion\n";
	x = intVect.capacity();
	cout << x << endl;

	cout << "Erasing value at index 1 \n";
	vector<int>::iterator itr;
	itr = intVect.begin();
	itr++;
	intVect.erase(itr);
	showVector(intVect);

	cout << "Now clearing all vector\n";
	intVect.clear();
	showVector(intVect);

	cout << "Refilling it again\n";
	for (int i = 0; i < size; i++)
	{
		intVect.push_back(i + 1);
	} 

	itr = intVect.begin();
	itr += 5;
	intVect.insert(itr, 55);
	showVector(intVect);

	return 0;
}
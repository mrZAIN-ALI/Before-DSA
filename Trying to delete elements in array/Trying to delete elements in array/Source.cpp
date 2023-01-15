#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = (i + 1);
	}
	cout << arr[1];
	cout << "I am going to delete 2nd index value\n";
	//Even with inddex given delete operator will delete whole array 
	delete [1] arr;
	cout << arr[3];
}
#include"IntStack.h"
#include<iostream>
using namespace std;
int main()
{
	int size;
	int num;
	cout << "Enter size of stack\n";
	cin >> size;
	IntStack stack(size);

	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << "th value >";
		cin >> num;
		stack.push(num);

	}
	for (int i = 0; i < size; i++)
	{
		stack.pop(num);
		cout << "Poping " << num << " \n";
	}
}
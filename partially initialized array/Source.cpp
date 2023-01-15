#include<iostream>
using namespace std;
int main()
{
	const int Size = 10;
	int number[Size] = { 1,2,3,4,5 };
	cout << "showing partially intinalized array wiht index 10 \n ";
	for (int subs= 0; subs < Size; subs++)
	cout << number[subs]<<" n";
	return 0;
}

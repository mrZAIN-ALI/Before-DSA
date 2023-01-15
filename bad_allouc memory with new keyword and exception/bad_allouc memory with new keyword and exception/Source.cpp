#include<iostream>
#include<new>
using namespace std;
int main()
{
	double* ptr = nullptr;
	try
	{
		ptr = new double[1];
		cout << "Successful\n";
		cout << *(ptr + 4);
	}
	catch (bad_alloc)
	{
		cout << "insufficent storage\n";
	}
}
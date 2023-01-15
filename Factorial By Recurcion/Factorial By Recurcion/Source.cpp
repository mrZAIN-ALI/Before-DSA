#include<iostream>
using namespace std;
int facrotial(int);
int main()
{
	cout << facrotial(4);
	return 0;
}
int facrotial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * facrotial(n - 1);

}

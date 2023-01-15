#include<iostream>
using namespace std;
void staticv();
int main()
{
	int h=0;
	do
	{
		staticv();
		h++;
	} while (h < 4);
}
void staticv()
{
	static int statv = 44;
	cout << "The value of static variable is " << statv<<endl;
	cout << "now i am incrementing static variable\n ";
	statv++;
}

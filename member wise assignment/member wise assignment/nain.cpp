#include"rectangle.h"
#include<iostream>
using namespace std;

int main()
{
	Rectangle r1(10,20);
	Rectangle r2 = r1;

	cout << "Lenth for r1 : " << r1.getLenth() << endl;
	cout << "widht for r1 : " << r1.getWidth() << endl;

	cout << "Lenth for r2 : " << r2.getLenth() << endl;
	cout << "widht for r2 : " << r2.getWidth() << endl;

	cout << "Now i am using = operator for two decleared objects \n";

	r2 = r1;

	cout << "Lenth for r1 : " << r1.getLenth() << endl;
	cout << "widht for r1 : " << r1.getWidth() << endl;

	cout << "Lenth for r2 : " << r2.getLenth() << endl;
	cout << "widht for r2 : " << r2.getWidth() << endl;
	return 0;
}
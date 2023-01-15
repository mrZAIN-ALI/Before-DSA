#include"Rectangle.h"
#include<iostream>
using namespace std;
int main()
{
	double lenth, width;
	Rectangle myRectangle;

	cout << "Enter width : ";
	cin >> width;
	cout << "Enter LEnth: ";
	cin >> lenth;
	try
	{
		myRectangle.setWidth(width);
		myRectangle.setLenth(lenth);
		cout << "Area is : " << myRectangle.getArea() << endl;
	}
	catch(Rectangle::negativeValue)
	{
		cout << "You have Enterd Negative Value\n";
		cout << "Try again ";

	}

	return 0;
}
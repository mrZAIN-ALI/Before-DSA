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
	catch(Rectangle::negativeWidthValue)
	{
		cout << "You have Enterd Negative Width Value\n";
		cout << "Try again ";

	}
	catch (Rectangle::negativeLenthValue)
	{
		cout << "You have Enterd Negative Lenth Value\n";
		cout << "Try again \n";

	}
	cout << "End of Program \n";
	return 0;
}
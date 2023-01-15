#include"Rectangle.h"
#include<iostream>
using namespace std;
int main()
{
	double lenth, width;
	bool tryagain = true;
	Rectangle myRectangle;

	cout << "Enter width : ";
	cin >> width;
	cout << "Enter LEnth: ";
	cin >> lenth;
	while (tryagain)
	{
		try
		{
			myRectangle.setWidth(width);
			myRectangle.setLenth(lenth);
			tryagain = false;
		}
		catch (Rectangle::negativeWidthValue)
		{
			cout << "You have Enterd Negative Width Value\n";
			cout << "Try again > ";
			cin >> width;

		}
		catch (Rectangle::negativeLenthValue)
		{
			cout << "You have Enterd Negative Lenth Value\n";
			cout << "Try again > ";
			cin >> lenth;

		}
	}
	cout << "Area is : " << myRectangle.getArea() << endl;

	cout << "End of Program \n";
	return 0;
}
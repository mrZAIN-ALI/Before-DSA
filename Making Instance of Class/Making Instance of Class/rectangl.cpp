#include"rectangle.h"
using namespace std;

void Rectangle::setLenth(double len)
{
	lenth = len;
}
void Rectangle::setWidth(double wid)
{
	width = wid;
}

double Rectangle::getLenth()
{
	return lenth;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return lenth * width;
}

void Rectangle::showStatus()
{
	cout << "Here is Lenth : ";
	cout << lenth << endl;
	cout << "Here is width : ";
	cout << width << endl;
}
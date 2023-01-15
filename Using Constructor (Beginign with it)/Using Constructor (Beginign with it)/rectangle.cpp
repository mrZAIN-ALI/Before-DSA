#include"rectangle.h"
using namespace std;
Rectangle::Rectangle()
{
	lenth = 0.0;
	width = 0.0;
	cout << "i am from Constructor \n";
}
void Rectangle:: setLenth(double len)
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
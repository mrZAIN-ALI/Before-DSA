#include"rectangle.h"
#include<iostream>
using namespace std;
void Rectangle::setLenth(double len)
{
	lenth = len;
}
void Rectangle::setWidth(double wid)
{
	width = wid;
}
double Rectangle::getLenth() const
{
	return lenth;
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::area1() const
{
	return (lenth * width);
}
void Rectangle::status() const
{
	cout << "Current Lenth is : "<<getLenth()<<endl;
	cout << "Current Width is : "<<getWidth()<<endl;

}
#include"Rectangle.h"
Rectangle::Rectangle()
{
	width = 0.0;
	lenth = 0.0;
}
void Rectangle::setLenth(double len)
{
	if (len >= 0)
	{
		lenth = len;
	}
	else
	{
		throw negativeValue();
	}
}
void Rectangle::setWidth(double wid)
{
	if (wid >= 0)
	{
		width=wid;
	}
	else
	{
		throw negativeValue();
	}
}
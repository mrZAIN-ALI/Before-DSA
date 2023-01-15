#include"rectangle.h"

Rectangle::Rectangle(int lenth, int width)
{
	this->lenth = lenth;
	this->width = width;
}
Rectangle::Rectangle(const Rectangle &rectangle)
{
	lenth = rectangle.lenth;
}
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
	int lenth;
	int width;

public:

	void setLenth(int lenth)
	{
		this->lenth = lenth;
	}
	void setWidth(int width)
	{
		this->width = width;
	}

	int getLenth() { return lenth; }
	int getWidth() { return width; }

	Rectangle()
	{

	}
	Rectangle(int, int);

	Rectangle( const Rectangle&);

};
#endif
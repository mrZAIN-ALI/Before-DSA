#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
	double width;
	double lenth;
public:
	void setWidth(double ); 
	void setLenth(double ); 

	double getWidth() { return width; }
	double getLenth() { return lenth; }
	double getArea() { return lenth * width; }
	Rectangle();
	class negativeWidthValue {};
	class negativeLenthValue {};
};

#endif	
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;
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
	~Rectangle() { cout << "Rectangle Destructor"; }
	class negativeWidthValue 
	{
		double value;
	public:
		
		negativeWidthValue(double val) { value = val; }
		double getValue() { return value; }
		~negativeWidthValue() { cout << "Negative Width destructor\n"; }
	};
	class negativeLenthValue
	{
		double value;
	public:
		negativeLenthValue(double wid) { value = wid; }
		double getValue() { return value; }
		~negativeLenthValue() { cout << "Negative Lenth Destructor\n"; }
	};
	
};

#endif	
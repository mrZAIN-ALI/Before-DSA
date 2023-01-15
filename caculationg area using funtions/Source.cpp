#include<iostream>
#include<conio.h>
using namespace std;
double getradius();
double area(double );

int main()
{
	double radius;
	cout << "This program calculate area : \n";
	radius = getradius();
	cout << "Area of given radius is : " << area(radius);
	return 0;
}
double getradius()
{
	double radius;
	cout << "Enter radius to calculate area : \n ";
	cin >> radius;
	return radius;
}
double area(double inradius)
{
	return 3.1415 * (inradius * inradius);
}
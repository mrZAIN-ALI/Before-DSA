#include<iostream>
#include<istream>
#include<string>
using namespace std;
void  areaout(double = 4, double );
int main()
{
	double  inLenth, inWidth;
	cout << "This program calculate area it has default arguments \nlenth =4 and width=4 \n";
	cout << "With default arguments area is : ";
	areaout();
	areaout(3);
	cout << "please enter lenth and witdth if you want to alter default arguments otherwise enter -1 \n ";
	cout << "Please Enter lenth : "; 
	cin >> inLenth;
	if (inLenth == -1)
		return 0;
	else {
		cout << "please Enter widrh : ";
		cin >> inWidth;
		areaout(inLenth, inWidth);
	}
	
}
void areaout(double lenth, double width)
{
	double area;
	area = lenth * width;
	cout << "Area of lenth " << lenth << " And Width " << width << " is ==>> " << area;
}
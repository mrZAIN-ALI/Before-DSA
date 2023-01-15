#include<iostream>
#include"rectangle.h"
using namespace std;
int main()
{
	Rectangle box,room1;
	double lenth, width, area;
	cout << "Enter Lenth of box : ";
	cin >> lenth;
	cout << "Ente Width : ";
	cin >> width;

	box.setLenth(lenth);
	box.setWidth(width);
	area = box.area1();
	cout << "_____________________________\n";
	box.status();
	cout << "area is : " << area<<endl;
	cout << "_____________________________\n";
	
	cout << "Enter Lenth of Room 1 : ";
	cin >> lenth;
	cout << "Ente Width of Room 1: ";
	cin >> width;

	room1.setLenth(lenth);
	room1.setWidth(width);
	area = room1.area1();
	cout << "_____________________________\n";
	room1.status();
	cout << "area is : " << area<<endl;
	cout << "_____________________________\n";

}
#include<iostream>
#include"rectangle.h"
using namespace std;
int main()
{
	Rectangle room;
	Rectangle kitchen;
	double temp,area;

	cout << "Enter Lenth of Room :";
	cin >> temp;
	room.setLenth(temp);
	cout << "Enter Width of Room : ";
	cin >> temp;
	room.setWidth(temp);

	cout << "Here is current status of Room \n";
	room.showStatus();
	
	cout << "Enter Lenth for Kithcen in sq foot : ";
	cin >> temp;
	kitchen.setLenth(temp);

	cout << "Enter Width for Kitchen : ";
	cin >> temp;
	kitchen.setWidth(temp);

	cout << "Herr is current status : \n";
	kitchen.showStatus();

	cout << "________________________________________________________________\n";
	cout << "here is Total area of room and Kitchen :";
	area = room.getArea() + kitchen.getArea();
	cout<<area << " square foot ";
	cout << "________________________________________________________________\n";

	return 0;
}
#include<iostream>
using namespace std;
class RetailItems
{
	string description;
	int unitsOnHand;
	double price;
public:
	void setDesc(string desc)
	{
		description = desc;
		
	 }
	void setUnit(int unit)
	{
		unitsOnHand = unit;
	}
	void setPrice(double prz)
	{
		price = prz;
	}
	string getDesc()
	{
		return description;
	}
	int getunit()
	{
		return unitsOnHand;
	}
	double getPrice()
	{
		return price;
	}
	RetailItems(string des, int units, double prz)
	{
		setDesc(des);
		setUnit(units);
		setPrice(prz);
	}
};

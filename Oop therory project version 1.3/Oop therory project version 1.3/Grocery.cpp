#include"Grocery.h"
#include<iostream>
using namespace std;
void Grocery::calculate_Cupon_Off()
{
	double Total_Discount=0.0;
	if (get_Expire_days() == 2)
	{
		if (cupon_Off_percentage < 30)
		{
			Total_Discount = ((cupon_Off_percentage / 100) * 3);
		}
		else
		{
			cout << "Off Percentage Exeeds\n";
			//exit(0);
		}
	}
	cuponDiscount = Total_Discount;
}

Grocery::Grocery():Product()
{

}
Grocery::Grocery(string nam, string pId, string gener, string clr, double prz, float expDays) :
	Product(nam, pId, gener, clr,prz)
{
	set_Expire_days(expDays);
	calculate_Cupon_Off();
}


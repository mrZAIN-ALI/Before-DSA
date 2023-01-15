#include"Electronics.h"
Electronics::Electronics()
{
	warranty_TimePeriod = 0;
}
Electronics::Electronics(string nam, string pId, string gener, string clr, double prz, int warrTime) :
	Product(nam, pId, gener, clr, prz)
{
	warranty_TimePeriod = warrTime;
}
void Electronics::calculate_Cupon_Off()
{
	double electronics_special = 2.0;
	cuponDiscount = ((cupon_Off_percentage / 100) * get_Price())+electronics_special;
}

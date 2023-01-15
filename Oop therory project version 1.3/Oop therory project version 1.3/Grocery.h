#ifndef GROCERY_H
#define GROCERY_H
#include"product.h"
class Grocery :public Product
{
protected:
	double cupon_Off_percentage = 12.0;
	float expires_in_Days;
public:
	//Mutator
	void set_Expire_days(float days) { expires_in_Days = days; }
	void set_cupon_off_percentage(double off) { cupon_Off_percentage = off; }
	//Accessor
	double get_Cupon_Off() { return cupon_Off_percentage; }
	float get_Expire_days() const { return expires_in_Days; }
	void calculate_Cupon_Off();
	
	//Default Constructor
	Grocery();

	//parameterized constructor with addition field of exipres in days
	Grocery(string, string, string, string, double, float);

};
#endif
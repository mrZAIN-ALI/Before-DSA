#ifndef ELECTRONIC_H
#define ELECTRONIC_H
#include "product.h"
class Electronics : public Product
{
    double cupon_Off_percentage=19.0;
    int warranty_TimePeriod;

public:
    // Mutator
    void set_Warranty(int wrnty) { warranty_TimePeriod = wrnty; }
    void set_cupon_off_percentage(double off) { cupon_Off_percentage = off; }

    // Accessor
    int get_warranty(){return warranty_TimePeriod;}
    double get_Cupon_Off(){return cupon_Off_percentage;}
    //Default constutor
    Electronics();
    Electronics(string,string,string,string,double,int);
    //Virtual Destructor
    

    void calculate_Cupon_Off();
};
#endif
#include"product.h"
Product::Product()
{
    name=" ";
    produc_id=" ";
    product_genere=" ";
    color=" ";
    cuponDiscount=0.0;
    price=0.0;
}
Product::Product(string nam,string pId,string gener,string clr,double prz)
{
    name=nam;
    produc_id=pId;
    product_genere=gener;
    color=clr;
    price=prz;
}
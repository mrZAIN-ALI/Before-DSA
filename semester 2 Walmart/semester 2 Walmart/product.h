#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
using namespace std;
class Product
{
protected:
    string name;
    string produc_id;
    string product_genere;
    string color;
    double cuponDiscount;
    // double retail_price;
    double price;
    int arrSize ;
public:
    //Mutators
    void set_Name(string nam){name=nam;}
    void set_Id(string iD){produc_id=iD;}
    void set_Color(string clr){color=clr;}
    // void set_Gst(double gsT){gst=gsT;}
    void set_price(double prz){price=prz;}
    void set_product_genere(string gener){product_genere=gener;}
    void set_arr_size(const int s) { arrSize = s; }
    //Accessors
    string get_Name() const {return name;}
    string get_Id() const {return produc_id;}
    string get_Color()  const {return color;}
    double get_CuponDiscount() const {return cuponDiscount;}
    double get_Price() const {return price;}
    string get_Product_genere(){return product_genere;}
    int get_arr_size() const { return arrSize; }
    //Pure Viurtual Funtion for calculation Cupon discount basd on persendtage of each product Type
    virtual void calculate_Cupon_Off()=0;

    Product();

    Product(string,string,string,string,double);
    
};
#endif
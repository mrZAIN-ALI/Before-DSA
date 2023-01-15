#ifndef USER_H
#define USER_H
#include"Account.h"

class User:public Account
{
    int itemsPurchased;
    string itemsName;
public:
    void set_ItemPurchased(int itm){itemsPurchased=itm;}
    int get_ItemPurchased(){return itemsPurchased;}
    User(string,string,string,string,long long,bool,int);
    User();
    //Tis Funtion mus be decleared Friend of Product/Cart Class to get Items
    void setItemNames();

};
#endif
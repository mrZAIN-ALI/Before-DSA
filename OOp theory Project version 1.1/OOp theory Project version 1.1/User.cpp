#include"User.h"
User::User():Account()
{
    itemsPurchased=0;
    itemsName=" ";
}
User::User(string usrname,string passw,string add,string gend,long long ph,bool isad,int itemPurchase=0):
        Account(usrname,passw,add,gend,ph,isad)
{
    set_ItemPurchased(itemPurchase);
}
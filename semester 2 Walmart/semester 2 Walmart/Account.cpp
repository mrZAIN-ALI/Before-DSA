#include"Account.h"
#include<iostream>
Account::Account()
{
    userName=" ";
    password=" ";
    adress=" ";
    gender=" ";
    phoneNO=0;
    isAdmin=false;
};
          
Account::Account(string uName,string pass,string add,string gend,long long ph,bool isad)
{
    userName=uName;
    password=pass;
    adress=add;
    gender=gend;
    phoneNO=ph;
    isAdmin=isad;
}
//Defination of Mutators
void Account::set_User_Name(string uName){userName=uName;}
void Account::set_Password(string pass){password=pass;}
void Account::set_Adress(string ad){adress=ad;}
void Account::set_Gender(string gen){gender=gen;}
void Account::set_Phone(long long ph){phoneNO=ph;}
void Account::set_IsAdminOrNot(bool flag){isAdmin=flag;}

//Definainto of Accessors
string Account::get_User_name() const {return userName;}
string Account::get_Password() const {return password;}
string Account::get_Adress() const {return adress;}
string Account::get_Gender()const {return gender;}
long long Account::get_Phone() const {return phoneNO;}
bool Account::get_IsAdminOrnot() const {return isAdmin;}


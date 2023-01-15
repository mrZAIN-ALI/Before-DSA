#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
using namespace std;
class Account
{
    string userName;
    string password;
    string adress;
    string gender; 
    unsigned long long int phoneNO;
    bool isAdmin=false;

public:
    Account();
    Account(string,string,string,string,long long,bool);
    // Account(string,string,bool);
    //Poly
    virtual Account* account_log() const
    {
        Account *ptr = nullptr;
        return ptr;
    }
    // Accessor
    string get_User_name() const;
    string get_Password() const;
    string get_Adress() const;
    string get_Gender() const;
    long long get_Phone() const;
    bool get_IsAdminOrnot() const;

    //Mutators
    void set_User_Name(string);
    void set_Password(string);
    void set_Adress(string);
    void set_Gender(string);
    void set_Phone(long long);
    void set_IsAdminOrNot(bool); 

};
#endif
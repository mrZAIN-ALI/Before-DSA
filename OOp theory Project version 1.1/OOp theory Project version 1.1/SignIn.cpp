#include"SignIn.h"
#include<iostream>
#include<fstream>
using namespace std;
bool check_Credentials(string *,string*);
void load_Specific_File(string*);
void SignIn::log_In()
{

	string t_User_Name,t_Password;
	cout << "Enter User name : ";
	cin >> t_User_Name;
	cout << "Enter Passsword : ";
	cin >> t_Password;
	if (check_Credentials(&t_User_Name, &t_Password))
	{
		cout << "Log in success ful\n";
	}
	else
	{
		cout << "try AGAIN\n";
	}

}

bool check_Credentials(string *in_String,string *pass)
{
	bool flag=0,flag1=0,flagInner=0;
	string u_Name,pwd;
	fstream inFile;
	inFile.open("accounts.txt", ios::in);
	while (!inFile.eof())
	{
		//cout << "In File Success Full\n";
		/*if (inFile.eof())
		{
			cout << "End Break\n";
			break;
		}*/
		getline(inFile, u_Name);
		getline(inFile, pwd);
		
		
		for (int i = 0; i < (u_Name.length()); i++)
		{
			if (u_Name[i] != (( * in_String)[i]))
			{
				flag = false;
				flagInner = true;
				break;
			
			}
			flag = 1;

		}
		
		for (int i = 0; i < (pwd.length()); i++)
		{
			if (pwd[i] != ((*pass)[i]))
			{
				flag1 = false;
				break;
			}
			flag1 = 1;
		}
		if (flag && flag1) { return true; }
		if (flagInner && flag1) { return false; }
	}
	inFile.close();
	return flag1;
	//int lenth = u_Name.length();
}
void load_Specific_File(string* file_name)
{
	/*User::User(string usrname, string passw, string add, string gend, long long ph, bool isad, int itemPurchase = 0) :
		Account(usrname, passw, add, gend, ph, isad)*/
	string t_uname, t_passw, t_add, t_gend;
	long long ph = 0; bool t_isad = 0, int t_items = 0;;
	fstream inFile;
	inFile.open(*file_name, ios::in);

	inFile >> t_uname;
	inFile >> t_passw;
	inFile >> t_add;
	inFile >> t_gend;
	inFile >> ph;
	inFile >> t_isad;
	inFile >> t_items;
	
	
}
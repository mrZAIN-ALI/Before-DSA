#include"SignIn.h"
#include<iostream>
#include<fstream>
using namespace std;
bool check_Credentials(string *,string*);
Account* load_Specific_File(const string*);
Account * SignIn::account_log() const
{
	string t_User_Name=" ", t_Password=" ";
	Account* account_ptr = nullptr;
	do
	{
		
		cout << "Enter User name : ";
		cin>>ws;
		getline(cin, t_User_Name);
		cout << t_User_Name;
		cout << "Enter Passsword : ";
		getline(cin , t_Password);
		cout << t_Password;

	
	} while (!check_Credentials(&t_User_Name, &t_Password));
	if (check_Credentials(&t_User_Name, &t_Password))
	{
		string name = t_User_Name + ".txt";
		cout << "Log in success ful\n";
		account_ptr=load_Specific_File(&name);
		
	}
	else
	{
		cout << "try AGAIN\n";
	}

	return account_ptr;
}

bool check_Credentials(string *in_String,string *pass)
{
	bool flag=0,flag1=0,flagInner=0;
	string u_Name,pwd;
	fstream inFile;
	inFile.open("database/accounts.txt", ios::in);
	if (inFile)
	{
		while (!inFile.eof())
		{
			/*cout << "Checking\n";*/

			getline(inFile, u_Name);
			getline(inFile, pwd);

			for (int i = 0; i < (u_Name.length()); i++)
			{
				if (u_Name[i] != ((*in_String)[i]))
				{
					flag = false;
					flagInner = true;
					cout << "username fail\n";
					break;
				}
				flag = 1;

			}

			for (int i = 0; i < (pwd.length()); i++)
			{
				if (pwd[i] != ((*pass)[i]))
				{
					flag1 = false;
					cout << "password fail\n";
					break;
				}
				flag1 = 1;
			}
			if (flag && flag1) { return 1; }
			if (inFile.eof() && flagInner && flag1) { /*cout << "returning false\n";*/ return 0; }
		}
		inFile.close();
		return flag1;
	}
}
Account* load_Specific_File(const string* file_name)
{
	/*cout << "now loading file\n";*/
	Account *temp_account_ptr = nullptr;
	string t_uname, t_passw, t_add, t_gend;
	long long ph = 0; bool t_isad = 0; int t_items = 0;
	fstream inFile;
	inFile.open("database/"+(*file_name), ios::in);
	while (!inFile.eof())
	{
		getline(inFile, t_uname);
		getline(inFile, t_passw);
		getline(inFile, t_add);
		getline(inFile, t_gend);
		inFile>> ph;
		inFile>> t_isad;
		inFile>> t_items;
		
		if (!t_isad)
		{
			temp_account_ptr = new User(t_uname, t_passw, t_add, t_gend, ph, t_isad,t_items );
			//cout << "User\n";
		}
		else
		{
			temp_account_ptr = new Admin(t_uname, t_passw, t_add, t_gend, ph, t_isad);
			//cout << "Admin\n";

		}
	}


	return temp_account_ptr;
}
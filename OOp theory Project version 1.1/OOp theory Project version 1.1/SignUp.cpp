#include"SignUp.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void saveFile(Account&);
void save_Account_Only_File(Account&);
void SignUp::create_Account()
{
	/*User(string usrname, string passw, string add, string gend, long long ph, bool isad, int itemPurchase = 0) :
		Account(usrname, passw, add, gend, ph, isad)*/
	char u_a_choice;
	string t_user_name, t_password, t_Adress, t_gender;
	unsigned long long int t_phone;
	cout << "Hello There!\n";
	cout << "You Want to Create User or Admin Account\n"
		<< "'U' For User and 'A' For Admin\n";
	cin >> u_a_choice;
	//Getting Infromation
	cin.ignore();
	cout << "Enter user Name : ";
	getline(cin,t_user_name);
	cin.ignore('\0');
	cout << "Enter Password : ";
	getline(cin,t_password);
	cout << "Enter Address : ";
	getline( cin, t_Adress);
	cout << "Enter Gender M/F/O : ";
	getline(cin ,t_gender);
	//cin.ignore();
	cout << "Enter Phone : ";
	cin >> t_phone;
	cin.ignore();
	if (u_a_choice == 'U')
	{
		User user(t_user_name, t_password, t_Adress, t_gender, t_phone, 0, 0);
		saveFile(user);
		save_Account_Only_File(user);
	}
	else if (u_a_choice == 'A')
	{
		Admin admin(t_user_name, t_password, t_Adress, t_gender, t_phone, 1);
		saveFile(admin);
		save_Account_Only_File(admin);
	}
}
void saveFile(Account& obj)
{
	string fname = obj.get_User_name()+".txt";
	fstream outFile;
	outFile.open(fname, ios::app);
	if (outFile)
	{
		outFile << obj.get_User_name()<<"\t";
		outFile << obj.get_Password()<<"\t";
		outFile<<obj.get_Adress() << "\t";
		outFile << obj.get_Gender() << "\t";
		outFile << obj.get_Phone() << "\t";
		outFile << obj.get_IsAdminOrnot() << "\n";
	}

	outFile.close();
	/*cout << "Writing Data Successful\n";*/
}
void save_Account_Only_File(Account &obj)
{
	string fname = "accounts.txt";
	fstream outFile;
	outFile.open(fname, ios::app);
	if (outFile)
	{
		outFile << obj.get_User_name() << "\n";
		outFile << obj.get_Password() << "\n";
	}

	outFile.close();
	cout << "Writing Data Successful\n";
}
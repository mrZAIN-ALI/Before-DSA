#include"Account.h"
#include"product.h"
#include"Electronics.h"
#include"Grocery.h"
#include"SignUp.h"
#include"Admin.h"
#include"User.h"
#include"SignIn.h"
#include "Cart.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
using namespace std; 
void home();
Electronics* input_Electroics_product_details();
void save_Electronic_products(Electronics*);
Grocery* input_Grocery_product_details();
void load_Electronics_product();
void save_Grocery_products(Grocery*);
void load_Grocery_product();
void loadAccountDetails();
const int SIZE = 9;
Electronics* temp_El_ptr_Array[SIZE];
Grocery* temp_Grocery_pt_Array[SIZE];





int main()
{

	home();
	_getch();
	return 0;



}





void home()
{
	Electronics* electronics_ptr = nullptr;
	Account* account_ptr=nullptr;
	string choice;
	do
	{
		system("cls");
		cout << setw(115) << setfill('#') << " \n";
		cout << setw(115) << setfill('#') << " \n";
		cout << "|\t\t\t\t\tWelcome to Walmart \t\t\t\t\t\t\t|\n";
		cout << "|\t\t\t\t\tEnter 'sup' to create account 'sin' to sign in\t\t\t\t|\n";
		cout << setw(115) << setfill('#') << " \n";
		cout << setw(115) << setfill('#') << " \n";
		cout << ">>:";
		cin >> choice;
		if (choice == "q") { exit(0); }
		
		while (choice != "sin" && choice!="sup")
		{
			cout << "Try Agin>>";
			cin >> choice;
		
		}
		system("cls");
		if (choice == "sup")
		{
			SignUp s1;
			account_ptr = s1.account_log();

		}
		else if (choice == "sin")
		{
			SignIn s_In;
			if (account_ptr = s_In.account_log())
			{

				string cartChoice;
				load_Electronics_product();
				load_Grocery_product();
				system("cls");
				const int COUNTER_For_El_Array = temp_El_ptr_Array[0]->get_arr_size();
				//cout << COUNTER_For_El_Array;
				const int Counter_For_Groc_Array = temp_Grocery_pt_Array[0]->get_arr_size();
				cout << endl;
				cout <<"\t\t\t" << setw(99) << setfill('*') << " \n";
				cout << "\t\t\t|\t\t\t\t\tWALMART \t\t\t\t\t\t|  \n";
				cout << "\t\t\t|\t\t\t\t\tSave Money Live Better \t\t\t\t\t| \n";
				cout << "\t\t\t" << setw(99) << setfill('*') << " \n";
				cout <<endl;
				for (int i = 0; i <= COUNTER_For_El_Array; i++)
				{
					cout << setw(72) << setfill('*') << "\n";
					cout << "#" << "\t\t\t\t" << temp_El_ptr_Array[i]->get_Product_genere() << "\t\t\t\t\n";
					cout << setw(71) << setfill('*') << "\n";			
					cout << "#" << "\tID |\t\tName\t|\tColor\t|\tWarranty Time\n";
					cout << "#\t" << temp_El_ptr_Array[i]->get_Id() << "|\t\t" << temp_El_ptr_Array[i]->get_Name() << "\t|\t" << temp_El_ptr_Array[i]->get_Color() << "\t|\t" << temp_El_ptr_Array[i]->get_warranty() << " \n";
					cout << setw(71) << setfill('~') << "\n";
					cout << "+" << "  Cupon Discount\t\t =========>\t$" << "\t\t" << temp_El_ptr_Array[i]->get_Cupon_Off() << "\n";
					cout << setw(71) << setfill('~') << "\n";				
					cout << "+" << "  RETAIL PRICE\t\t\t =========>\t$" << "\t\t" << temp_El_ptr_Array[i]->get_Price() << "\n";				
					cout << setw(72) << setfill('_') << "\n\n";
	
				}
				for (int i = 0; i <= Counter_For_Groc_Array; i++)
				{
					cout << setw(71) << setfill('~') << " \n";
					cout << "#" << "\t\t\t\t" << temp_Grocery_pt_Array[i]->get_Product_genere() << "\t\t\t\t\n";
					cout << setw(71) << setfill('~') << "\n";
					cout << "#" << "\tID |\t\tName\t|\tCondation\t|Expires Time\n";
					cout << "#\t" << temp_Grocery_pt_Array[i]->get_Id() << "|\t\t" << temp_Grocery_pt_Array[i]->get_Name() << "\t|\t" << temp_Grocery_pt_Array[i]->get_Color() << "\t|\t\t " << temp_Grocery_pt_Array[i]->get_Expire_days() << " \n";
					cout << setw(71) << setfill('~') << " \n";
					cout << "+" << "  Cupon Discount\t\t =========>\t$" << "\t\t" << temp_Grocery_pt_Array[i]->get_Cupon_Off() << "\n";					
					cout << setw(71) << setfill('~') << "\n";
					cout << "+" << "  RETAIL PRICE\t\t\t =========>\t$" << "\t\t" << temp_Grocery_pt_Array[i]->get_Price() << "\n";
					cout << setw(72) << setfill('_') << "\n\n\n";

				}

				cout << setw(72) << setfill('#') << "\n\n\n";
				if ((account_ptr->get_IsAdminOrnot()))
						{
							int swtichChoice=0;
							cout << "Hello There\n";
							cout << "1)TO Enter New Items Detail Enter ==>1 \n"
								 << "2)TO View Details Enter ==>2\n"
								 << "3)TO Continue shopping Enter ==>3 \n"
								 << "4)TO Sign out Enter ==>4\n"
								 << "5)TO exit now Enter ==>5\n";
							cin >> swtichChoice;
							switch (swtichChoice)
							{
								case(1):
								{
									system("cls");
									cout << "Fro Electronics Enter 'elec' for Grocery Enter 'groc' \n>>:";
									string chic;
									cin >> ws;
									getline(cin, chic);
									while (chic != "elec" && chic!="groc")
									{
										cout << "Try Again";
										getline(cin, chic);
									}
									if (chic == "elec")
									{
										system("cls");
										Electronics* el_ptr = nullptr;
										el_ptr = input_Electroics_product_details();
									}
									else if (chic == "groc")
									{
										system("cls");
										Grocery* g_ptr = nullptr;
										g_ptr = input_Grocery_product_details();
									}
								}
								break;
								case(2):
								{
									system("cls");
									loadAccountDetails();
								}
								break;
								case(3):
								{
									break;
								}
								case(4):
								{
									home();
								}
								case(5):
								{
									exit(0);
								}

							}
				}

				cout << setw(72) << setfill('#') << "\n\n\n";
				cout << "Enter Id of Product TO Add Item to Cart \n";
				cout << "Enter VC to view cart \n";
				
				Cart c;
				
				do{
					cin >> cartChoice;
					if (cartChoice == "q") { home(); }
					for (int i = 0; i <= COUNTER_For_El_Array; i++)
					{

						if (cartChoice == temp_El_ptr_Array[i]->get_Id())
						{
							Electronics* e = temp_El_ptr_Array[i];
							c.addToECart(e);
							cout << "Added to cart" << endl;
							break;
						}
						
					}
					for (int i = 0; i <= Counter_For_Groc_Array; i++)
					{
						if (cartChoice == temp_Grocery_pt_Array[i]->get_Id())
						{
							Grocery* g = temp_Grocery_pt_Array[i];
							c.addToGCart(g);
							cout << "Added to cart" << endl;
							break;
						}
					}
				
				} while (cartChoice != "VC");

				
				cout << cartChoice;
				if(cartChoice == "VC")
				{	
					c.displayCart(account_ptr);
				}

			}
			else
			{
				cout << "Log in Fail\n";
			}
		}
		cin >> ws;
		getline(cin , choice);
		if (choice == "q")
		{
			home();
		}
		else if(choice=="c")
		{
			continue;
		}
	} while (choice != "q");
}
Electronics* input_Electroics_product_details()
{
	const int SIZE = 9;
	Electronics* temp_Electronics_ptr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		temp_Electronics_ptr[i] = nullptr;
	}
	string t_name;
	string t_produc_id;
	string t_product_genere;
	string t_color;
	int t_warranty_time = 0;
	double t_price = 0.0;
	int j = 0;

	do
	{

		cout << "Enter Product Name Of Product : ";
		cin >> ws;
		getline(cin, t_name);
		cout << t_name;
		if (t_name == "q") { break; }
		cout << "ENter Product Id : ";
		getline(cin, t_produc_id);
		cout << "Enter Product genere : ";
		getline(cin, t_product_genere);
		cout << "Enter Product Color : ";
		getline(cin, t_color);
		cin.ignore(0);
		cout << "Enter Product price $: ";
		cin >> t_price;
		cout << "Enter Product Warranty time : ";
		cin >> t_warranty_time;

		temp_Electronics_ptr[j] = new Electronics(t_name, t_produc_id, t_product_genere, t_color, t_price, t_warranty_time);
		save_Electronic_products(temp_Electronics_ptr[j]);
		j++;
	} while (j < SIZE);
	

	//Electronics::elPtr = temp_Electronics_ptr;

	return temp_Electronics_ptr[0];
}
void save_Electronic_products(Electronics* eptr)
{
	fstream outFile;
	outFile.open("database/electronics.txt", ios::app);

	outFile << eptr->get_Name() << endl;
	outFile << eptr->get_Id() << endl;
	outFile << eptr->get_Product_genere() << endl;
	outFile << eptr->get_Color() << endl;
	outFile << eptr->get_Price() << "\t";
	outFile << eptr->get_CuponDiscount() << "\t";
	outFile << eptr->get_warranty();

	outFile.close();
}
void load_Electronics_product()
{

	string t_name;
	string t_produc_id;
	string t_product_genere;
	string t_color;
	int t_warranty_time = 0;
	double t_price = 0.0;
	double t_cupon_dic=0.0;
	int cnt = 0;
	fstream inFile;
	inFile.open("database/electronics.txt", ios::in);
	if (inFile) {

		while (!inFile.eof())
		{
			getline(inFile, t_name);
			if (t_name=="")
			{
				break;
			}
			getline(inFile, t_produc_id);
			getline(inFile, t_product_genere);
			getline(inFile, t_color);
			inFile >> t_price;
			inFile >> t_cupon_dic;
			inFile >> t_warranty_time;

			temp_El_ptr_Array[cnt] = new Electronics(t_name, t_produc_id, t_product_genere, t_color, t_warranty_time, t_price);
			//cout << temp_El_ptr_Array[cnt]->get_Color();
			temp_El_ptr_Array[0]->set_arr_size(cnt);
			
			cnt++;

		}
	}
	else
	{
		cout << "load file faiil\n";
	}
	inFile.close();
	
	cout << "Load success\n";

}
Grocery* input_Grocery_product_details()
{
	const int SIZE = 9;
	Grocery* temp_Grocery_ptr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		temp_Grocery_ptr[i] = nullptr;
	}
	string t_name;
	string t_produc_id;
	string t_product_genere;
	string t_color;
	int t_Days_remaining = 0;
	double t_price = 0.0;
	int j = 0;

	do
	{

		cout << "Enter Product Name Of Product : ";
		cin >> ws;
		getline(cin, t_name);
		if (t_name == "q") { break; }
		cout << "ENter Product Id : ";
		getline(cin, t_produc_id);
		cout << "Enter Product genere : ";
		getline(cin, t_product_genere);
		cout << "Enter Product Condation of product : ";
		getline(cin, t_color);
		cin.ignore(0);
		cout << "Enter Product price $: ";
		cin >> t_price;
		cout << "Enter Profucd Expirey days Remaining : ";
		cin >> t_Days_remaining;

		temp_Grocery_ptr[j] = new Grocery(t_name, t_produc_id, t_product_genere, t_color, t_price, t_Days_remaining);
		save_Grocery_products(temp_Grocery_ptr[j]);
		j++;
	} while (j < SIZE);
	//Electronics::elPtr = temp_Electronics_ptr;

	return temp_Grocery_ptr[0];
}
void save_Grocery_products(Grocery* gptr)
{
	fstream outFile;
	outFile.open("database/Grocery.txt", ios::app);

	outFile << gptr->get_Name() << endl;
	outFile << gptr->get_Id() << endl;
	outFile << gptr->get_Product_genere() << endl;
	outFile << gptr->get_Color() << endl;
	outFile << gptr->get_Price() << "\t";
	outFile << gptr->get_CuponDiscount() << "\t";
	outFile << gptr->get_Expire_days();

	outFile.close();
}
void load_Grocery_product()
{
	string t_name;
	string t_produc_id;
	string t_product_genere;
	string t_condation;
	float t_expireIn_Days = 0.0;
	double t_price = 0.0;
	double t_cupon_dic = 0.0;
	int cnt = 0;
	fstream inFile;
	inFile.open("database/Grocery.txt", ios::in);
	if (inFile) {

		while (!inFile.eof())
		{
			getline(inFile, t_name);
			if (t_name == "")
			{
				break;
			}
			getline(inFile, t_produc_id);
			getline(inFile, t_product_genere);
			getline(inFile, t_condation);
			inFile >> t_price;
			inFile >> t_cupon_dic;
			inFile >> t_expireIn_Days;

			temp_Grocery_pt_Array[cnt] = new Grocery(t_name, t_produc_id, t_product_genere, t_condation,t_price,t_expireIn_Days);
			//cout << temp_El_ptr_Array[cnt]->get_Color();
			temp_Grocery_pt_Array[0]->set_arr_size(cnt);

			cnt++;

		}
	}
	else
	{
		cout << "load file faiil\n";
	}
	inFile.close();

	cout << "Load success\n";
}
void loadAccountDetails()
{
	string choice;
	Account* accPtr = nullptr;
	accPtr = new SignIn;
	accPtr = accPtr->account_log();
	system("cls");
	cout << "User Name is " << accPtr->get_User_name() << endl;
	cout << "Gender is " << accPtr->get_Gender() << endl;
	cout << "User Adress  is " << accPtr->get_Adress() << endl;
	cout << "Pone nummber is " << accPtr->get_Phone() << endl;
	if (accPtr->get_IsAdminOrnot())
	{
		cout << "He is Admin\n";
	}

	cin >> choice;
	while (choice != "q")
	{
		cout << "Try again: ";
		cin >> choice;
	}
	if (choice == "q")
	{	
		system("cls");
		home();
	}
}

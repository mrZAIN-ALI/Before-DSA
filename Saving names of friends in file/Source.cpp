#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	string f1, f2, f3;
	cout << "This program will take input of your frinnds name \n";
	cout << "And Save it in file located at desktop";
	ofstream outFile;
	outFile.open("C:\\Users\\ZAIN ALI\\OneDrive\\Desktop\\new.txt");
	cout << "Enter name of your friend 1 ";
	getline(cin,f1);
	cout << "Enter Name of your friend : ";
	getline(cin, f2);
	cout << "Again ";
	getline(cin, f3);
	cout << "Now savin data to file ";
	outFile << f1 << endl;
	outFile << f2 << endl;
	outFile << f3 << endl;
	outFile.close();


}
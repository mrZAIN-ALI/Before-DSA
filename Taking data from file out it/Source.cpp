#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream inputFile;
	string name;
	inputFile.open("C:\\Users\\ZAIN ALI\\OneDrive\\Desktop\\new.txt");
	cout << "NOw reading data from file \n";
	getline(inputFile, name);
	cout << name<<endl;
	getline(inputFile, name);
	cout << name<<endl;
	getline(inputFile, name);
	cout << name<<endl;

		inputFile.close();
	return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outputFile;
	outputFile.open("C:\\Users\\ZAIN ALI\\OneDrive\\Desktop\\new.txt");
	int num1=0, num2=0, num3=0;
	cout << "Enter number 1 : ";
	cin >> num1;
	cout << "Enter number 2 : ";
	cin >> num2;
	cout << "Enter Number 3 :";
	cin >> num3;
	cout << "Now saving data to file :";

	outputFile << num1<<endl;
	outputFile << num2<<endl;
	outputFile << num2<<endl;
	outputFile.close();
	cout << "Done ";
	return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream infile;
	int val1=0, val3=0, val2=0, sum=0;
	cout << "Openning File \n";
	infile.open("C:\\Users\\ZAIN ALI\\OneDrive\\Desktop\\new.txt",ios::in);
	infile >> val1;
	infile >> val2;
	infile >> val3;
	infile.close();
	cout << "Closaing file \n";
	sum = val1 + val2 + val3;
	cout << "sum of valuses store in file is : " << sum;
	
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int salesVal=0;
	fstream oFile;
	oFile.open("Sales.txt", ios::app);
	int noOfmonth;
	cout << "FOR how many months you want to enter your sales : ";
	cin >> noOfmonth;

	for (int counter = 0; counter < noOfmonth; counter++)
	{
		cout << "Enter Your sales for month # " << counter + 1<<"=>";
		cin >> salesVal;
		oFile << salesVal<<endl;

	
	}
	cout << "Data is written to text file in directory of this program";
	return 0;
}
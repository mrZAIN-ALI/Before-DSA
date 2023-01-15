#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout << "Now we are going to open file\n";
	ofstream outputFile;
	outputFile.open("C:\\Users\\ZAIN ALI\\OneDrive\\Desktop\\new.txt");
	outputFile << "New name :\n";
	outputFile << "NEw user1";
	outputFile.close();
	cout << "DONE \n";
	return 0;


}
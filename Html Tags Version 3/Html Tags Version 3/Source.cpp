#include<iostream>
#include<string>
#include<vector>
#include"TagsMatch.h"
#include<conio.h>
using namespace std;
void menu();
int main()
{
	string nameOfFile;
	char choice='0';
	vector<string> tags;
	bool flag=false;

	do
	{
		menu();
		choice = _getch();
		TagsMatch tagsMatch;
		switch (choice)
		{
		case('1'):
			{

				cout << "\nName:";
				cin >> ws;
				getline(cin,nameOfFile);
				while (!tagsMatch.setFileName(nameOfFile))
				{
					cout << "Can't load File  Try Again  :";
					cin >> ws;
					getline(cin, nameOfFile);
				}
				break;
			}
		case('2'):
		{

			
			tags=tagsMatch.LoadFileAndReturnVecotr(nameOfFile);
			flag=tagsMatch.areTagsMatched(tags);
			if (flag)
			{
				tagsMatch.display1(tags);
				cout << endl;
				system("PAUSE");
			}
			else
			{
				cout << endl;
				system("PAUSE");
				
			}

			break;
		}
		}
		
		
	} while (choice!='3');
	return 0;
}
void menu()
{
	system("CLS");
	cout <<"PRESS\n"
		<< "1.To Enter File Name  \n"
		<< "2.To Print Result \n"
		<<"3.To Eixt \n\n\n>";
}
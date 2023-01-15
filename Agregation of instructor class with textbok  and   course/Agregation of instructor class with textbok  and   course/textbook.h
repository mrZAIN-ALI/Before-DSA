#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include<iostream>
#include<string>
using namespace std;
class TextBook
{
	string title;
	string author;
	string publisher;
public:
	void set(string, string, string);
	TextBook()
	{
		set("", "", "");
		cout << "From constructor of text\n";
	}
	TextBook(string, string, string);
	void print();
	~TextBook()
	{
		cout << "From Destructor of text\n";
	}
};
#endif
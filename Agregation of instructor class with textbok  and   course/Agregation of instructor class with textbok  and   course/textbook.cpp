#include"textbook.h"
#include<iostream>
using namespace std;
void TextBook::set(string tit, string auth, string publ)
{
	title = tit;
	author = auth;
	publisher = publ;
}
TextBook::TextBook(string tit, string auth, string publ)
{
	set(tit,auth,publ);
}
void TextBook::print()
{
	cout << "Title is : " << title << endl;
	cout << "Author is : " << author << endl;
	cout << "Publisher is " << publisher << endl;
}
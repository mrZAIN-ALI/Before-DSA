#include"contactInfo.h"
#include<cstring>
#include<cctype>
using namespace std;

void ContactInfo::iniName(char* n)
{
	const int size = (strlen(n) + 2);
	name = new char[size];
	strcpy_s(name,size, n);
}

void ContactInfo::iniContact(char* c)
{
	const int size1 = (strlen(c) + 2);
	contact = new char[size1];

	strcpy_s(contact,size1, c);
}

ContactInfo::ContactInfo(char* n, char* c)
{
	iniName(n);
	iniContact(c);


}
	ContactInfo::~ContactInfo()
	{
		delete[] name;
		delete[]contact;
	}

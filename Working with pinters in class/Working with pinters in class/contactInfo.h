#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
class ContactInfo
{
private:

	char* name = nullptr;
	char* contact = nullptr;

	void  iniName(char*);
	void iniContact(char*);


public:
	//constructor
	ContactInfo(char*, char*);
	//destructor
	~ContactInfo();
	//ContactInfo();

	void print()
	{
		cout << "Hete is detail of person \n";
		cout << name<<endl;
		cout << contact;
	}
};
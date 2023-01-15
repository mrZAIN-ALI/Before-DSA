#include<iostream>
#include<string>
using namespace std;
class Animal
{
protected:
	int num;
	
public:
	virtual void function(int n) 
	{
		//num = n;
		cout << "I am from Animal\n"
		<< "And nmbner give is :"<<num<<endl;
	}


};
class Dog :public Animal
{
	string name;
public:
	virtual void function(long n)  override 
	{
		//name = s;
		cout << "From Dog\n"
			<< "number is : " << num
			<< "And String given is : " << name<<endl;
	}
};
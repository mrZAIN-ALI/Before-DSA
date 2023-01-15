#include<iostream>
using namespace std;
class Test
{
	int age;
	string name;
public:

	Test(const Test& obj)
	{
		age = obj.age;
		cout << "I habe copied Age only \n";

	}
	Test()
	{

	}
	void operator = (const Test& obj)
	{
		name = obj.name;
		cout << "I have copied Name only\n";
	}

	void setAge(int ag)
	{
		age = ag;
	}
	void setname(string nam) { name = nam; }
	int getage();
	string getnaem()
	{
		return name;
	}
};

	int Test::getage()
	{
		return age;
	}
int main()
{
	Test t1;
	t1.setAge(12);
	t1.setname("ZAIN");

	Test t2 = t1;
	cout << t2.getage()<<endl;
	cout << t2.getnaem() << endl;
	Test t3;
	t3 = t1;
	
	cout << t3.getnaem() << endl;

}
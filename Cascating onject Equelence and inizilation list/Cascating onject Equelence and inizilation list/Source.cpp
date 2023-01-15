#include<iostream>
using namespace std;
class Box
{
	int lenth, width, height;
public:
	void setlenth(int l)
	{
		lenth = l;
	}

	int getLenth()
	{
		return lenth;
	}

	void setwid(int w)
	{
		width = w;
	}

	int getwidth()
	{
		return width;
	}

	//object initilaizrt

	Box(int le = 4, int wi = 3, int he = 2) :lenth(le), width(wi), height(he)
	{

	}

	Box& fun1()
	{
		cout << "Hello i am from funtion 1 \n";

		return *this;
	}

	Box& fun2()
	{
		cout << "Herllo i amd from funtion 2 \n";

		return *this;
	}
	Box& fun3()
	{
		cout << "Hello uiamd from funtion 3 \n";

		return *this;
	}

	int volumeCal()
	{
		return lenth * width * height;
	}

	Box& operator =(Box& obj) ///use & here compulsory
	{
		lenth = obj.lenth;
		width = obj.width;
		height = obj.height;

		return *this;
	}
	
};
int main()
{
	Box b1(2);
	Box b2(3, 4);
	Box b3(1,2,4);

	b1.fun1().fun2().fun3();

	cout << "This is Volume from b1 : " << b1.volumeCal()<<endl;
	cout << "This is Volume from b2 :" << b2.volumeCal()<<endl;
	cout << "This is Volume from b3 :" << b3.volumeCal()<<endl;

	cout << "Now iam going to equal all objecrts \n";

	b1 = b2 = b3;

	cout << "This is Volume from b3 :" << b3.volumeCal() << endl;
	cout << "This is Volume from b2 :" << b2.volumeCal() << endl;
	cout << "This is Volume from b1 : " << b1.volumeCal() << endl;

	return 0;
}
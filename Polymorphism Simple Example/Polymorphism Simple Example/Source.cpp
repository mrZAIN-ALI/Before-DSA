#include<iostream>
using namespace std;
//Base Class
class BaseClass
{
protected :
	int score = 10;
public:
	int getScore() const { return score; }
	virtual void print() const
	{
		cout << "Value of Score is (from Base): " << getScore() << endl;

	}
	void setScore(int score) { this->score = score; }
};
//Derived Class
class DerivedClass :public BaseClass
{
protected:
	int score = 10;
public:
	int getScore() const { return score; }

	virtual void print() const
	{
		cout << "Value of Score is (from Derived): " << getScore() << endl;

	}
	void setScoreD(int score) { this->score = score; }
};
//Funtion Which take Obj as Reference 
void printObj( const BaseClass & obj);
//Funtion which talke obj by pinter
void printByptrOfObj(const BaseClass*);
int main()
{
	DerivedClass test1;
	test1.setScoreD(12);
	printObj(test1);

	BaseClass test2;
	printObj(test2);

	cout << "NOw iam goint to call funtion which takes pinter\n";
	DerivedClass test3;
	test3.setScore(77);
	printByptrOfObj(&test3);
	//test3.print();
}

void printObj( const BaseClass & obj)
{
	obj.print();
}
void printByptrOfObj(const BaseClass *obj)
{
	obj->print();
}
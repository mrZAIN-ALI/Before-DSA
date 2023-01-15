#include"PassFailactivity.h"
#include<iostream>
#include<iomanip>
using namespace std;
void displayGrade(const GradeActivity& obj);
int main()
{
	PassFailActivity test1(89);
	test1.setScore(90);
	displayGrade(test1);


	return 0;
}
void displayGrade(const GradeActivity& obj)
{
	cout << setprecision(1) << fixed;
	cout << "your Score is : " << obj.getScore()<<endl;
	cout << "your Grade is : " << obj.getChar()<<endl;
	

}

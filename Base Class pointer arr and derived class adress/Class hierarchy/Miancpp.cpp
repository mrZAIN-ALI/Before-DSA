#include"PassFailExam.h"
#include"FinalExam.h"
#include<iostream>
#include<iomanip>
using namespace std;
void displayGrade(const GradeActivity *obj);
int main()
{
	const int numbreOFtest = 4;
	GradeActivity* test[numbreOFtest] = {
		new GradeActivity(66.4),
		new PassFailExam(100,12,39),
		new GradeActivity(79.4),
		new PassFailExam(100,22,39)
	};

	for (int  i = 0; i < numbreOFtest; i++)
	{
		cout << "test # " << i + 1 << endl;
		displayGrade(test[i]);
		cout<< endl;
	}

	return 0;
}
void displayGrade(const GradeActivity *obj)
{
	cout << setprecision(1) << fixed;
	cout << "your Score is : " << obj->getScore()<<endl;
	cout << "your Grade is : " << obj->getChar()<<endl;

}

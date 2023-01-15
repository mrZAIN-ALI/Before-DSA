#include"PassFailExam.h"
#include<iostream>
using namespace std;
int main()
{
	double minps;
	int questions;
	int missed;

	cout << "Enter Number of questions in the Exam : ";
	cin >> questions;
	cout << "Enter Question you Missed : ";
	cin >> missed;
	cout << "Enter Minumum Point To get Passed : ";
	cin >> minps;
	PassFailExam exam(questions, missed, minps);
	cout << "Each Questions Count : " << exam.getPointEach()<<endl;
	cout << "Min passing Scre is : " << exam.getMinPassingScore()<<endl;
	cout << "Student Exam Sxore is : " << exam.getScore()<<endl;
	cout << "Student's grade is : " << exam.getChar();
}
#include"FinalExam.h"
#include<iostream>
using namespace std;
int main()
{
	int questions =0, missed = 0;

	//GradeActivity g1;
	/*g1.setScore(100.2);
	cout << g1.getScore() << endl;*/
	cout << "how many Question Are in Test: ";
	cin >> questions;
	cout << "how many Question did you missed : ";
	cin >> missed;


	FinalExam test1;
	test1.set(questions, missed);
	cout << test1.getScore() << endl;
	cout << "Each question have " << test1.getPointEach() << endl;
	cout << "Exam score is : " << test1.getScore() << endl;
	cout << "Exam Grade is : " << test1.getLetter()<<endl;
	
	//cout << g1.getScore() << endl;

	return 0;
}
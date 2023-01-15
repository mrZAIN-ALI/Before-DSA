#ifndef FINALEXAM_H
#define FINALEXAM_H
#include"gradeactivity.h"

class FinalExam :public GradeActivity
{
	int numberOfQuestions;
	int missedQuestions;
	double pointEach;
public:

	FinalExam()
	{
		numberOfQuestions = 0;
		missedQuestions = 0;
		pointEach = 0.0;
	}
	FinalExam(int questions, int missed)
	{
		set(questions, missed);
	}
	void set(int, int);
	void adjustScore();

	//Accessor
	int getNumberOfQuestions() const { return numberOfQuestions; }
	int getMissedQurstions() const { return missedQuestions; }
	double getPointEach() const { return pointEach; }
};
#endif
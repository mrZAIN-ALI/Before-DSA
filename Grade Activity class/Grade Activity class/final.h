#ifndef FINAL_H
#define	FINAL_H	
#include"gradeactivity.h"
class FinalExam : public GradeActivity
{
	int numberOfQuestions;
	int missed;
	double pointEach;
public:
	FinalExam()
	{
		numberOfQuestions = 0;
		missed = 0;
		pointEach = 0.0;
	}
	FinalExam(int question, int missed)
	{
		set(question, missed);
	}
	void set(int question, int missed);

	int getNumQuestion() { return numberOfQuestions; }
	int getMissedques() { return missed; }
	double getPoint() { return pointEach; }

	
};
#endif
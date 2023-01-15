#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include"PassFailactivity.h"
class PassFailExam :public PassFailActivity
{
	int numberOfQuestions;
	int missedQuestions;
	double pointEach;
public:
	PassFailExam() :PassFailActivity()
	{
		numberOfQuestions = 0;
		missedQuestions = 0;
			pointEach = 0.0;
	}
	PassFailExam(int questions, int missed, double mps) :PassFailActivity(mps)
	{
		set(questions, missed);
	}
	
	void set(int, int);
	//sets(3);     <-----
	//void sets(int);	<-------	                         /|\	
	//These statements are invalid	because of scope problem  |
	
	int getMissedQuestions() const  { return missedQuestions; }
	int getNumberOfQuestions()const { return numberOfQuestions; }
	double getPointEach() const { return pointEach; }

};
#endif
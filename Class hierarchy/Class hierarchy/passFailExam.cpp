#include"PassFailExam.h"

void PassFailExam::set(int ques, int mis)
{
	numberOfQuestions = ques;
	missedQuestions = mis;

	double numbericScore = 0.0;
	pointEach = (100.0 / numberOfQuestions);

	numbericScore = 100 - (pointEach * missedQuestions);

	setScore(numbericScore);



}
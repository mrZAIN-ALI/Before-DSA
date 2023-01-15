#include"FinalExam.h"

void FinalExam::set(int question,int missed)
{
	double numericScore=0.0;
	numberOfQuestions = question;
	missedQuestions = missed;

	pointEach = (100.0 / numberOfQuestions);
	
	numericScore = 100 - (missed * pointEach);

	//This Funtion Belongs to Base Class
	setScore(numericScore);

	adjustScore();
}
void FinalExam::adjustScore()
{
	double fraction = score - static_cast<int>(score);
	if (fraction>=0.5)
	{
		score += (1.0-fraction);
	}
}
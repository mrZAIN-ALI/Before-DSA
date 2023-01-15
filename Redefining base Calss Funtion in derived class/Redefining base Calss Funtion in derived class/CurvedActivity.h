#ifndef CURVEDACTIVITY_H
#define CURVEDACTIVITY_H
#include"gradeactivity.h"
class CurvedActivity :public GradeActivity
{
	double rawScore;
	double percentage;
public:
	void setPercentage(double per) { percentage = per; }
	double getPercentage() { return percentage; }

	double getRawScpre() { return rawScore; }

	void setScore(double s)
	{
		rawScore = s;
		GradeActivity::setScore(rawScore * percentage);
	}


};
#endif
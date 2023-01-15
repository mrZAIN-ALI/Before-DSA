#ifndef PASSFAILACTITVITTY_H
#define PASSFAILACTITVITTY_H
#include"gradeactivity.h"
class PassFailActivity :public GradeActivity
{
	double minPassingScore;
public:
	PassFailActivity() :GradeActivity()
	{
		minPassingScore = 0;
	}
	PassFailActivity(double mps) :GradeActivity()
	{
		minPassingScore = mps;
	}
	void setMinPassingScore(double mps)
	{
		minPassingScore = mps;
	}
	double getMinPassingScore() const
	{
		return minPassingScore;
	}
	char getChar() const;
};
#endif // !PASSFAILACTITVITTY_H

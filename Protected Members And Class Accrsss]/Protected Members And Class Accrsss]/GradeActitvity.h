#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H
class GradeActivity
{
protected:
	double score;
public:
	GradeActivity()
	{
		score = 0;
	}
	GradeActivity(double s)
	{
		score = s;
	}

	void setScore(double s)
	{
		score = s;
	}
	double getScore() const
	{
		return score;
	}
	char getLetter() const;
};
#endif

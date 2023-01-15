#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H
class GradeActivity
{
protected:
	double score;
//protected:
//	int testing=3;
public:
	GradeActivity() { score = 0; }
	GradeActivity(double s) { score = s; }

	void setScore(double s) { score = s; }
	double getScore() const { return score; }

	virtual char getChar() const;
};
#endif
#ifndef BUGGET_H
#define BUGGET_H

#include"auxiliary.h"
class Bugget {
	static double corpurateBugget;
	double divisionBugget;

public:

	static void addMainOfficeBug(double);

	void addCorpBugget(double);
	double getCorpBugget() const;
	void addDivBugget(double);
	double getDivBugget() const;
	Bugget();
	~Bugget();
	
	friend void Auxiliary::addBugget(double, Bugget&);
};



#endif

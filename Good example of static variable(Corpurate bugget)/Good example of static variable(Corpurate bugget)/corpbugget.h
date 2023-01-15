#ifndef CORPURATEBUGGET_H
#define CORPURATEBUGGET_H

class CorpurateBugget {

	static double corpurateBugget;
	double divisionBugget ;

public:

	double getCorpurateBugget() const;
	double getDivisionBugget() const;
	CorpurateBugget();
	~CorpurateBugget();
	void addDivisionBugget(double);

	
};
#endif

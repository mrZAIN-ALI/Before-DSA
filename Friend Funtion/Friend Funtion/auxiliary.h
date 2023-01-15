//#include"bugget.h"
#ifndef AUXILIARY_H
#define AUXILIARY_H

//forward declearation a much faster and best way instead of header includeing
class Bugget;

class Auxiliary {
	double divisionBugget;

public:
	void addBugget(double,Bugget&);
	double getDivisionBug();

	Auxiliary();
	~Auxiliary();
};
#endif
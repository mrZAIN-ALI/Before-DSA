#ifndef AuxiliaryOffice_H
#define AuxiliaryOffice_H
class Buget;
class AuxiliaryOffice
{
	double auxBuget=0.0;
public:
	void addBuget(double,  Buget&);
	double getAuxBuget() { return auxBuget; };
};
#endif

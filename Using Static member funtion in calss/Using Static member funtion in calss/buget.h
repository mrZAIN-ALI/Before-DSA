class Buget
{
	static double corpurateBuget;		//static mem variable
	double divisionBuget;
public:

	Buget();
	void addBuget(double);
	double getDivBuget() const ;
	double getcotpurateBuget() const;
	
	static void addOfficeBuget(double);

};

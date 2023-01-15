#include<iostream>
#include<iomanip>
using namespace std;

class Bugged
{
private:
    static double crpBug;
    double divisionBugged;

public:
    void addBugged(double b)
    {
        crpBug += b;
        divisionBugged += b;

    }
    double getDivisionBug() const
    {
        return divisionBugged;
    }
    double getcorpurateBugged() const
    {
        return crpBug;
    }
    Bugged()
    {
        divisionBugged = 0;
    }


};
double Bugged::crpBug = 0;
int main()
{
    const int numOfdDiv = 4;
    Bugged arrBug[numOfdDiv];
    double temp;

    for (int i = 0; i < numOfdDiv; i++)
    {
        cout << "ENter Bugged FOr Division number " << i + 1 << " :";
        cin >> temp;
        arrBug[i].addBugged(temp);
      
    }

    cout << fixed << showpoint << setprecision(2);

    for (int i = 0; i < numOfdDiv; i++)
    {
        cout << "HErer is buggd you have entered for dividion number  " << (i + 1) <<"==>" << arrBug[i].getDivisionBug();
        cout << endl;
    }

    cout << "Here is corpurate/Total of bugged you have enterde : " << arrBug[1].getcorpurateBugged();


}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double percentage=0.58,sales=8600000.0,profit=0.0;
    profit=(percentage*sales);
    cout<<showpoint<<fixed<<setprecision(2);
    cout<<"Company will make this year : $"<<profit;

    return 0;
}
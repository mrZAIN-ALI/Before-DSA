#include<iostream>
using namespace std;
int main()
{
    double pay_Amount=2200.0,
    pay_periods=22.0,
    annual_Pay=0.0;

    annual_Pay=pay_periods*pay_Amount;

    cout<<"Annual pay is : $"<<annual_Pay<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    double num1=28,
    num2=32,
    num3=37,
    num4=24,
    num5=33,
    sum=0,
    avg=0;
    sum=num1+num2+num3+num4+num5;
    avg=sum/5;

    cout<<"sum is : "<<sum<<endl;
    cout<<"Average is : "<<avg;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    double town_average=23.5,
    highway_average=28.9,
    town_distance=0,
    high_distance=0,
    gallons=15;
    town_distance=town_average*gallons;
    high_distance=highway_average*gallons;

    cout<<"Towns Distance  is <<"<<town_distance<<endl;
    cout<<"Highway  Distance  is <<"<<high_distance<<endl;

    return 0;
}
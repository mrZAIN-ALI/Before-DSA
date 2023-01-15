#include<iostream>
using namespace std;
int main()
{
    double total_sales_tax=0,purchaces=95,sales_tax_percent=0.04,country_tax_percent=0.02,
    sales_tax=0,contry_tax=0;
    sales_tax=sales_tax_percent*purchaces;
    contry_tax=country_tax_percent*purchaces;
    total_sales_tax=sales_tax+contry_tax;

    cout<<"total tax is : $"<<total_sales_tax;
    return 0;
}
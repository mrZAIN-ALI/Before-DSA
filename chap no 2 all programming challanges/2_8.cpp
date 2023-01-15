#include<iostream>
using namespace std;
int main()
{
    double  item_1 = 15.95,
    item_2 = 24.95,
    item_3 = 6.95,
    item_4 = 12.95,
    item_5 = 3.95,
    sub_tota=0,
    total=0,
    sales_tax=0,
    tax_petcentage=0.07;

    sub_tota=item_1+item_2+item_3+item_4+item_5;
    sales_tax=sub_tota*tax_petcentage;
    total=sub_tota+sales_tax;

    cout<<"Price of item 1 is "<<item_1<<endl;  
    cout<<"Price of item 2 is "<<item_2<<endl;  
    cout<<"Price of item 3 is "<<item_3<<endl;  
    cout<<"Price of item 4 is "<<item_4<<endl;  
    cout<<"Price of item 5 is "<<item_5<<endl;  
    cout<<"Sub total is : "<<sub_tota<<endl;
    cout<<"Tax is : "<<sales_tax<<endl;
    cout<<"Total is : "<<total<<endl;
    
    return 0;
}
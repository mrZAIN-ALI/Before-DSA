#include<iostream>
using namespace std;
int main()
{
    int row_size = 4 ;
    for (int i = 1; i <= row_size; i++)
    {
        for (int j = 0; j < (row_size-i); j++)
        {
            
            cout<<" ";
        }

        for (int k = 0; k < ((2*i)-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
 
    return 0;
}
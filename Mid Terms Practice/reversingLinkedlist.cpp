#include<list>
#include<iostream>
using namespace std;
void reverseList( list<int>& );
void display(list<int> );
// void reverseArrayUsingLinR(int &arr[],int i ,int j)
// {
    
// }
// int lineraSum(int *A,int)
// {

// }
int minval(int *arr,int i,int j)
{
    if (i==j)
    {
        return i;
    }
    int k=i;
    if (arr[i]<arr[j])
    {
        k=i;
    }
    minval(arr,i+1,j);
    
    return k;
}
void sort(int *arr,int n,int m)
{
    if (n==m)
    {
        return;
    }
    int k=minval(arr,0,m);
    if (arr[n]>arr[k])
    {
        int temp=arr[k];
        arr[k]=arr[n];
        arr[n]=temp;
        
    }
    sort(arr,n+1,m);
    
}
void towerOfHannoi(int n,char a,char b,char c)
{
    if (n==1 )
    {
        cout<<"Move Disk 1 from " <<a <<" to "<<b <<endl;

    }
    else
    {
        towerOfHannoi(n-1,a,c,b);
        cout<<"Move Disk NO "<<n<<" from "<<a <<" to " <<b <<endl;
        towerOfHannoi(n-1,c,b,a);
    }
    
}
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(13);
    l.push_back(14);
    
    display(l);
    reverseList(l);
    display(l);

    towerOfHannoi(5,'A','B','C');
    int arr[]={9,8,7,7,4,56,31,2};
    sort(arr,0,8);
    for (int i = 0; i < 8; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void display(list<int> l)
{
    while (!l.empty())
    {
        cout<<l.front()<<" ";
        l.pop_front();
    }
    cout<<endl;
}
void reverseList( list<int> & givenList)
{
    list<int> tempList;
    int n=0;
    while (!givenList.empty())
    {
        n=givenList.front();
        givenList.pop_front();
        tempList.push_back(n);
    }
    while (!tempList.empty())
    {
        n=tempList.front();
        tempList.pop_front();
        givenList.push_front(n);

    }
    
    
}
#include<iostream>
using namespace std;
void local();
int main()
{
	int i=0;
	while (i < 5)
	{
		cout << "Calling local funtion \n ";
	
		local();
		i++;
	}
	
	return 0;

}
void local()
{
	
		int local = 12;
	cout << "The  value of local variavle is  "<<local;
	cout << "\n Now i ma incermention local variavle and call it again in main funtion";
	local++;
	
}
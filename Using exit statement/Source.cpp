#include<iostream>
using namespace std;
void print();
int main()
{
     print();
	return 0;

}
void print()
{
	cout << "this program uses exit statement \n";
	cout << "Now i am using exit statement after this no statement will be executed \n";
	exit(EXIT_SUCCESS);//ALSO CAN USE EXIT_FAILURE AND exit(0)
	cout << "This statement will never execute ";
}
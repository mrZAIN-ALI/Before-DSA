#include"NumberList.h"
#include<iostream>
using namespace std;
int main()
{
	NumberList list;

	/*list.appendNode(1);
	list.appendNode(2);
	list.appendNode(3);
	list.appendNode(4);*/

	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(-1);

	list.displayNode();


	return 0;
}
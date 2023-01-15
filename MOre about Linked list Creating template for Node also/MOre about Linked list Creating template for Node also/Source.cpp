#include<iostream>
#include"NumberList.h"
using namespace std;
int main()
{
	Number_List<int> list;
	/*list.append_Node(1);
	list.append_Node(2);
	list.append_Node(2);*/
	list.insert_Node(1);
	list.insert_Node(3);
	list.insert_Node(2);
	list.delete_Node(1);
	list.display_Nodes();
}
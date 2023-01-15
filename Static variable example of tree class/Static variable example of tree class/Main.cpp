#include<iostream>
#include"tree.h"
using namespace std;
int main()
{
	Tree oak;
	Tree pulm;
	Tree pineable;

	//This will work only if objectCouber is Public
	//cout << "We have created : " << Tree::objectCouner << " Number of Trees \n";

	cout << "These are ways to access object counter \n";
	cout << "(1) Tree::getObjectCount \n This will work only if objectCouner is Public \n";
	cout << "(2) oak.getObjectCounter \n";

	cout << "We have created : " << oak.getObjectCount() << "  Tree Objects  \n";

	return 0;
}
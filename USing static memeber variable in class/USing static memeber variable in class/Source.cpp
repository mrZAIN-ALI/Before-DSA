#include<iostream>
using namespace std;
class Tree
{
	static int numberofTrees;
public:
	Tree()
	{
		numberofTrees++;
	}
	int gerNumberOFtrees() { return numberofTrees; };
};
int Tree::numberofTrees = 0;

int main()
{
	cout << "This program demostrate Use of static varaible in class\n";
	cout << "Making three objects of Calss tree\n";
	Tree palm, olive, blueeberry;

	cout << "Build successfull now \n";
	cout << "olive.getnumberofTrees() ==========> " << olive.gerNumberOFtrees();

	return 0;
}
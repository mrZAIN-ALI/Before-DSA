#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> intVect;
	
	vector<int>::iterator iter;

	int cnt=0;
	for (; cnt < 5; cnt++)
	{
		intVect.push_back(cnt + 1);
	}
	int i = 1;

	for (iter = intVect.begin();  iter< intVect.end(); iter++)
	{
		cout << *iter<<" ";
		/*cout << i<<endl;
		i++ ;
		*/
	}
	cout << endl;
 	for (iter = (intVect.end()); iter > intVect.begin();iter--)
	{
		cout << *(iter-1)<<" ";  //  <-------------
		
	}

	return 0;
}
#include"Stack.h"
#include<iostream>
#include<string>
using namespace std;
string inFix_to_PostFix(const string&);
int presedence(char);
int main()
{

	string s = "2+3*4+5*7+8*9";

	string n = inFix_to_PostFix(s);

	cout << n;
	return 0;
}
int presedence(char operend)
{
	if (operend == '^')
		return 3;
	else if (operend == '*' || operend == '/')
		return 2;
	else if (operend == '+' || operend == '-')
		return 1;
	else return -1;
}
string inFix_to_PostFix(const string& inFix)
{
	string postFix;
	Stack stack;

	for (int i = 0; i < inFix.length(); i++)
	{
		if (inFix[i] == '(')
		{
			stack.push(inFix[i]);
		}
		else if (inFix[i] == ')')
		{
			while (stack.peek()!='(')
			{
				postFix += stack.pop();
			}
			stack.pop();
		}
		else if (inFix[i] >= '0' && inFix[i] <= '9')
		{
			postFix+= inFix[i];
		}
		else if (stack.isEmpty())
		{
			stack.push(inFix[i]);
		}
		else if (!stack.isEmpty() && presedence(inFix[i]) >= presedence(stack.peek()))
		{
			stack.push(inFix[i]);
		}
		else if (!stack.isEmpty() && presedence(inFix[i]) <= presedence(stack.peek()))
		{
			while (!stack.isEmpty() && presedence(inFix[i]) <= presedence(stack.peek()))
			{

				postFix+= stack.pop();
				
			}
			stack.push(inFix[i]);
		}
	}
	while (!stack.isEmpty())
	{
		postFix += stack.pop();
	}

	return postFix;
}
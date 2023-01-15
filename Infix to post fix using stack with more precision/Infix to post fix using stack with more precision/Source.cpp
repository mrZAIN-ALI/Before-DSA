#include<stack>
#include<iostream>
using namespace std;
string inFixTo_PostFix(string);
int inStack(char);
int outStack(char);
int main()
{
	cout << inFixTo_PostFix("2*4^4-2+3*(2+2)");
	return 0;
}
int inStack(char inStack)
{
	if (inStack == '(')
	{
		return 0;
	}
	else if (inStack== '+' || inStack=='-')
	{
		return 2;
	}
	else if (inStack == '*' || inStack == '/'|| inStack=='%')
	{
		return 4;
	}
	else if (inStack == '^')
	{
		return 5;
	}
}
int outStack(char outStack)
{
	if (outStack == '(')
	{
		return 100;
	}
	else if (outStack == '+' || outStack == '-')
	{
		return 1;
	}
	else if (outStack == '*' || outStack == '/' || outStack == '%')
	{
		return 3;
	}
	else if (outStack == '^')
	{
		return 6;
	}
}
string inFixTo_PostFix(string inFix)
{
	string postFix;
	stack<char> stack;
	for (int i = 0; i < inFix.length(); i++)
	{
		if (inFix[i]>='0' && inFix[i] <= '9')
		{
			postFix += inFix[i];
			continue;
		}
		else
		{
			if (stack.empty())
			{
				stack.push(inFix[i]);
			}
			else if (inFix[i] == '(')
			{
				stack.push(inFix[i]);
			}
			else if (inFix[i] == ')')
			{
				while (!stack.empty() && stack.top() != '('  )
				{
					postFix += stack.top();
					stack.pop();
					
				}
					stack.pop();
				

			}
			else if (outStack(inFix[i]) > inStack(inFix[i]))
			{
				stack.push(inFix[i]);
			}
			else if (outStack(inFix[i]) < inStack(inFix[i]))
			{
				while (!stack.empty() && outStack(inFix[i]) < inStack(inFix[i]))
				{
					if (stack.top() == '(')
						break;
					postFix += stack.top();
					stack.pop();
				}
				stack.push(inFix[i]);
			}
		}
	}

	while (!stack.empty())
	{
		postFix += stack.top();
		stack.pop();
	}
	return postFix;
}
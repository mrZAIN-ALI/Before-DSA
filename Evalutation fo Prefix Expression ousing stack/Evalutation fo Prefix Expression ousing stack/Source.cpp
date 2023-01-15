#include<stack>
#include<iostream>
#include<string>
using namespace std;
double evaluatePreFix(string);
int main()
{
    string s = "+*23*32";
 
    cout << evaluatePreFix(s) << endl;
    return 0;
}
double evaluatePreFix(string actual_string)
{
    double first, second, ans;
    int j = -1;
    string reversed_string = actual_string;
    for (int i = actual_string.length() - 1; i >= 0; i--)
    {
        j++;
        reversed_string[j] = actual_string[i];
      
    }

    stack<double> stak;
    for (int i = 0; i < reversed_string.length(); i++)
    {
        if (reversed_string[i] >= '0' && reversed_string[i] <= '9')
        {
            stak.push(static_cast<double>(reversed_string[i]) - 48);
            // cout<<stak.top()<<endl;
            continue;
        }
        else if (!stak.empty())
        {
            second = stak.top();
            stak.pop();
            if (stak.empty())
            {
                cout << "inappropiate string\n";
                return 0;
            }

            first = stak.top();
            stak.pop();
            if (reversed_string[i] == '+')
            {
                ans = first + second;
                stak.push(ans);

            }
            else if (reversed_string[i] == '-')
            {
                stak.push(first - second);
            }
            else if (reversed_string[i] == '*')
            {
                stak.push(first * second);
            }
            else if (reversed_string[i] == '/')
            {
                stak.push(first / second);
            }
            else if (reversed_string[i] == '%')
            {
                stak.push(static_cast<int>(first) % static_cast<int>(second));
            }
            else if (reversed_string[i] == '^')
            {
                stak.push(static_cast<int>(first) ^ static_cast<int>(second));
            }
        }

    }

    if (!stak.empty())
    {
        ans = stak.top();
    }
    return ans;

}
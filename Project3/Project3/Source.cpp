#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b)
{
	return (a + b);
}
template <class t>
t sum(t a, t b, t c)
{
	return (a + b + c);
}
int main()
{
	int a, b, c;
	cout << "Enter two nnumbers\n";
	cin >> a >> b;
	cout << "sum is ==> " << sum(a, b)<<endl;
	cout << "Enter Three numbers \n";
	cin >> a >> b >> c;
	cout << "sum is ==> " << sum(a, b, c);

	return 0;
}
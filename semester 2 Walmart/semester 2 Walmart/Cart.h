#include "Account.h"
#include "User.h"
#include "product.h"
#include<string>
#include "Electronics.h"
#include "Grocery.h"
using namespace std;

class Cart
{
	
	int eCount = 0;
	int gCount = 0;
	Electronics eArr[10];
	Grocery gArr[10];

public:
	void displayCart(Account* const);
	void addToECart(Electronics* e);
	void addToGCart(Grocery* g);
	string get_name();
};

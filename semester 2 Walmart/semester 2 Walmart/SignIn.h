#ifndef SIGNIN_H
#define SIGNIN_H
#include"Account.h"
#include"User.h"
#include"Admin.h"
class SignIn:public Account
{
public:
	Account * account_log() const;
};
#endif // ! SIGNIN_H

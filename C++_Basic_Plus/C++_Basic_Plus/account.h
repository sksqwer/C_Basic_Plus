#pragma once

#ifndef __account
#define __account

#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string name;
	string number;
	long cash;

public:
	Account(string name, string number);
	void Print();
	void Deposit(long cash);
	void Withdraw(long cash);
};




#endif // !1

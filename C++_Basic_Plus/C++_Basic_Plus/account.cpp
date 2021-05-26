#include "account.h"
#include <iostream>

using namespace std;

Account::Account(string name, string number)
{
	this->name = name;
	this->number = number;
	this->cash = 0;
}
void Account::Print()
{
	cout << "name: " << name << endl;
	cout << "account number: " << number << endl;
	cout << "cash: " << cash << "원\n";

}
void Account::Deposit(long cash)
{
	this->cash += cash;
	cout << cash << "원 입금 완료.\n";
}
void Account::Withdraw(long cash)
{
	this->cash -= cash;
	cout << cash << "원 출금 완료.\n";
}
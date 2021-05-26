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
	cout << "cash: " << cash << "��\n";

}
void Account::Deposit(long cash)
{
	this->cash += cash;
	cout << cash << "�� �Ա� �Ϸ�.\n";
}
void Account::Withdraw(long cash)
{
	this->cash -= cash;
	cout << cash << "�� ��� �Ϸ�.\n";
}
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <cmath>
#include <fstream>
#include <conio.h>

#include "account.h";


using namespace std;



int main()
{

	// : source code
	string name;
	string number;
	long cash;
	cin >> name >> number;

	Account ac(name, number);

	cin >> cash;
	ac.Deposit(cash);
	ac.Print();

	cin >> cash;
	ac.Withdraw(cash);
	ac.Print();



	return 0;


}
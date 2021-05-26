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
#include <stack>
#include <queue>

//#include "account.h";
//#include "mytime1.h"
//#include "complex0.h"

//
//
//int main()
//{
//
//	// : source code
//	string name;
//	string number;
//	long cash;
//	cin >> name >> number;
//
//	Account ac(name, number);
//
//	cin >> cash;
//	ac.Deposit(cash);
//	ac.Print();
//
//	cin >> cash;
//	ac.Withdraw(cash);
//	ac.Print();
//
//
//
//	return 0;
//
//
//}
//
//
//
//int main()
//{
//
//	// : source code
//
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "planning time = ";
//	planning.show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.show();
//	cout << endl;
//
//	total = coding + fixing;
//	cout << "coding + fixing time = ";
//	total.show();
//	cout << endl;
//
//	Time morefixing(3, 28);	
//	cout << "more fixing time = ";
//	morefixing.show();
//	cout << endl;
//
//	total = morefixing.operator+(total);
//	cout << "morefixing.operator+(total) = ";
//	total.show();
//	cout << endl;
//
//	(total - morefixing).show();
//	(total * 10).show();
//
//	return 0;
//
//
//}

//
//
//int main()
//{
//
//	// : source code
//	complex a(3.0, 4.0);
//	complex c;
//	cout << "하나의 복소수를 입력하십시오(끝내려면 q):\n";
//
//	while (cin >> c)
//	{
//		cout << "c = " << c << endl;
//		cout << "공액복소수 = " << ~c << endl;
//		cout << "a = " << a << endl;
//		cout << "a + c = " << a + c << endl;
//		cout << "a - c = " << a - c << endl;
//		cout << "a * c = " << a * c << endl;
//		cout << "2 * c = " << 2 * c << endl;
//		cout << "하나의 복소수를 입력하십시오(끝내려면 q):\n";
//	}
//
//
//
//	return 0;
//
//
//}
//


/*
문1 
	중위 표기법 1 + 2
	전위 표기법 + 1 2
	후위 표기법 1 2 +
	stack, queue; 를 이용한 계산기

	연산자 우선순위
	( ) < + - < * /;
	1. 1글자 
	2. 피연산자 후위표기 postfixQueue
	3. 연산자 
		-(호일 경우 연산 )를 꺼낼때까지 operator stack
	
	ex)
	((4x2 + 12) x (123 + 7))	operator stack	postfix queue					operand stack
	(								(
	(							   ((
	4													4
	x							   ((x									
	2												   4 2
	+							   ((+				  4 2 x
	12												 4 2 x 12
	)								(				4 2 x 12 +
	x							   ( x
	(							  ( x (       
	123											  4 2 x 12 + 123
	+							 ( x ( +		 
	7											 4 2 x 12 + 123 7
	)							  ( x			4 2 x 12 + 123 7 +
	)									       4 2 x 12 + 123 7 + x					
												2 x 12 + 123 7 + x						4
											     x 12 + 123 7 + x				       4 2
												  12 + 123 7 + x					    8
												   + 123 7 + x						   8 12
												   123 7 + x						    20
												   7 + x							  20 123
												    + x							     20 123 7
													 x								  20 130
																					   2600
*/


using namespace std;



enum OPER { LB = '(', RB = ')', PLU = '+', MINU = '-' , MUL = '*', DIV = '/'};

bool check_number(char c);
double Calc(double a, double b, char c);
int rank_oper(char c);
void show(stack<char> _a, queue<string> _b, stack<double> _c);


int main()
{
	string Equation;
	//	char _OPER[6] = { '(', ')', '*', '/', '+', '-' };
	int len;
	double res;
	string temp;
	cout << "수학식을 입력하시오(종료 q): ";
	
	while (1)
	{
		stack<char> Operator_St;
		stack<double> operand_St;
		queue<string> Postfix_Qu;

		getline(cin, Equation);
		len = Equation.length();
		if (Equation == "q" || len == 0)
			break;

		cout << "------------------------------------------" << endl;
		cout << "Operator_Stack\t\tOperand_Stack\t\tPostfix_queue" << endl;

		for (int i = 0; i < len; i++)
		{
			if (Equation[i] == ' ')
				continue;

			if (Equation[i] == LB)
				Operator_St.push(Equation[i]);
			else if (Equation[i] == RB)
			{
				while ( Operator_St.size() != 0 && Operator_St.top() != LB )
				{
					temp = Operator_St.top();
					Operator_St.pop();
					Postfix_Qu.push(temp);
				}

				Operator_St.pop();
			}
			else if (check_number(Equation[i]))
			{
				temp = "";
				while (check_number(Equation[i]))
				{
					temp += Equation[i];
					i++;
				}
				Postfix_Qu.push(temp);
				i--;
			}
			else
			{
				if(Operator_St.size() == 0)
					Operator_St.push(Equation[i]);
				else
				{
					if(rank_oper(Operator_St.top()) < rank_oper(Equation[i]))
						Operator_St.push(Equation[i]);
					else
					{
						temp = Operator_St.top();
						Operator_St.pop();
						Postfix_Qu.push(temp);
						Operator_St.push(Equation[i]);
					}
				}
			}

			show(Operator_St, Postfix_Qu, operand_St);

		}
		while (Operator_St.size() != 0)
		{
			temp = Operator_St.top();
			Operator_St.pop();
			Postfix_Qu.push(temp);

			show(Operator_St, Postfix_Qu, operand_St);
		}

		while (!Postfix_Qu.empty())
		{
			temp = Postfix_Qu.front();
			Postfix_Qu.pop();
			if (check_number(temp[0]))
				operand_St.push(stod(temp));
			else
			{
				double a, b;
				a = operand_St.top();
				operand_St.pop();
				b = operand_St.top();
				operand_St.pop();
				operand_St.push(Calc(b, a, temp[0]));
			}
			show(Operator_St, Postfix_Qu, operand_St);


		}


		cout << "수학식을 입력하시오(종료 q): ";
	}





	return 0;
}


bool check_number(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	else
		return false;
}


double Calc(double a, double b, char c)
{
	switch (c)
	{
	case MUL:
		return a * b;
	case DIV:
		return a / b;
	case PLU:
		return a + b;
	case MINU:
		return a - b;
	default:
		return 0;
	}

}


int rank_oper(char c)
{
	switch (c)
	{
	case MUL:
		return 2;
	case DIV:
		return 2;
	case PLU:
		return 1;
	case MINU:
		return 1;
	case LB:
		return 0;
	case RB:
		return 0;
	default:
		return 0;
	}
}



void show(stack<char> _a, queue<string> _b, stack<double> _c)
{
	stack<char> a = _a;
	queue<string> b = _b;
	stack<double> c = _c;
	for (int i = 0; i < a.size(); i++)
	{
		cout << _a.top() << " ";
		_a.pop();
	}
	cout << "\t\t";
	for (int i = 0; i < b.size(); i++)
	{
		cout << _b.front() << " ";
		_b.pop();
	}
	cout << "\t\t";
	for (int i = 0; i < c.size(); i++)
	{
		cout << _c.top() << " ";
		_c.pop();
	}
	cout << endl;
}
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <stack>
#include <queue>
#include <ctime>

#include "StringBad.h"
#include "tabtenn0.h" 
#include "AcctABC.h"
#include "GeometricObject.h"
#include "Stopwatch.h"
#include "Worker0.h"

using namespace std;
//
//int main()
//{
//	const int SIZE = 5;
//	Waiter bob("홍길동", 314L, 5);
//	Singer bev("조수미", 522L, 3);
//
//	Worker * lolas[SIZE];
//
//	int ct;
//
//	for (ct = 0; ct < SIZE; ct++)
//	{
//		char choice;
//		cout << "직종을 입력하십시오: \n"
//			<< "w: 웨이터		s: 가수		"
//			<< "t: 가수 겸 웨이터		q: 종료\n";
//		cin >> choice;
//		while (strchr("wstq", choice) == NULL)
//		{
//			cout << "w, s, t, q 중에서 하나를 선택하십시오: ";
//			cin >> choice;
//		}
//		if (choice == 'q')
//			break;
//		switch (choice)
//		{
//		case 'w':
//			lolas[ct] = new Waiter;
//			break;
//		case 's':
//			lolas[ct] = new Singer;
//			break;
//		case 't':
//			lolas[ct] = new SingingWaiter;
//			break;
//		}
//		cin.get();
//		lolas[ct]->Set();
//	}
//
//	cout << "\n사원 현황은 다음과 같습니다:\n";
//	int i;
//	for (i = 0; i < ct; i++)
//	{
//		cout << endl;
//		lolas[i]->Show();
//	}
//	for (i = 0; i < ct; i++)
//		delete lolas[i];
//
//	cout << "프로그램을 종료합니다.\n";
//
//
//
//	return 0;
//}
//
//
//string Comma_Format(string &);
//void makeFraction(string &);
//
//int main()
//{
//	string str, comma_str;
//
//	cin >> str;
//
//	comma_str = Comma_Format(str);
//
//	makeFraction(str);
//
//	return 0;
//}
//
//
//string Comma_Format(string &s)
//{
//	int len = s.length();
//	int temp,decimal_itr = len;
//	string str = "";
//	bool decimal = false;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '.')
//		{
//			decimal_itr = i;
//			decimal = true;
//			break;
//		}
//	}
//	cout << "출력 1: ";
//	for (int i = 0; i < decimal_itr; i++)
//		if(s[i] != '-')
//			cout << s[i] << " ";
//	if (decimal)
//	{
//		cout << ", 소수점 이하: ";
//		for (int i = decimal_itr + 1; i < len; i++)
//			cout << s[i] << " ";
//	}
//
//	cout << endl;
//	temp = decimal_itr;
//	for (int i = 0; i < len; i++)
//	{
//		if (i < decimal_itr)
//		{
//			if (temp % 3 == 0 && i != 0 && s[i-1] != '-')
//			{
//				str += ',';
//				str += s[i];
//			}
//			else
//				str += s[i];
//			temp--;
//		}
//		else
//			str += s[i];
//	}
//
//
//
//	cout << "출력 2: "<< str << endl;
//
//
//
//
//	return str;
//
//}
//
//void makeFraction(string &s)
//{
//	int len = s.length();
//	int temp, decimal_itr = len;
//	string str = "";
//	bool decimal = false;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '.')
//		{
//			decimal_itr = i;
//			decimal = true;
//			break;
//		}
//	}
//
//	if (!decimal)
//	{
//		cout << "실수: " << s << endl;
//		cout << "분수:  " << s << "/" << 1 << endl;
//	}
//	else
//	{
//		int denominator, numerator, temp = 1, temp2;
//		denominator = stoi(s.substr(0, decimal_itr));
//		numerator = stoi(s.substr(decimal_itr + 1, len - decimal_itr - 1));
//		temp2 = numerator;
//		while (numerator != 0)
//		{
//			temp *= 10;
//			numerator /= 10;
//		}
//		if (denominator < 0)
//		{
//			denominator *= -1;
//			denominator = denominator * temp + temp2;
//			numerator = temp;
//			denominator *= -1;
//		}
//		else 
//		{
//			denominator = denominator * temp + temp2;
//			numerator = temp;
//		}
//
//		temp = sqrt(denominator);
//
//		while (denominator % 2 == 0 && numerator % 2 == 0)
//		{
//			denominator /= 2;
//			numerator /= 2;
//		}
//		while (denominator % 5 == 0 && numerator % 5 == 0)
//		{
//			denominator /= 5;
//			numerator /= 5;
//		}
//
//		cout << "실수: " << s << endl;
//		cout << "분수: " << denominator << "/" << numerator << endl;
//	}
//
//
//
//}

void swap(int *, int *);
void makearr(int *, const int);
void bubblesort1(int *, int);
void bubblesort2(int *, int);
void bubblesort3(int *, const int);
void selectionsort1(int *, const int);
void selectionsort2(int *, const int);
void Straight_Insertionsort(int *, const int);
void print(int arr[], int size, int n, int s);
void arrcpy(int *, const int *, int);

int main()
{
	const int size = 100000;
	int *arr = new int[size];
	int *arr2 = new int[size];
	makearr(arr, size);
	arrcpy(arr2, arr, size);
	StopWatch T;
	//cout << "초기: ";
	/*for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	int rp = 0;
	bool ch = false;
	cout << rp << "중복" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				ch = true;
				++rp;
			}
		}
	}
	if (ch)
		cout << rp << "중복" << endl;

	cout << endl << "bubblesort1" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort1(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	cout << endl << "bubblesort2" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort2(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	cout << endl << "bubblesort3" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort3(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	cout << endl << "selectionsort1" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	selectionsort1(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";


	cout << endl << "selectionsort2" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	selectionsort2(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	cout << endl << "Straight_Insertionsort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	Straight_Insertionsort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	/*cout << "정렬 후: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	return 0;
}


void bubblesort1(int *arr, int size)
{
	int compare = 0, nswap = 0;
	for (int i = 0; i < size; i++)
	{
		//		cout << " 패스" << i + 1 << endl;
		for (int j = size - 1; j > i; j--)
		{
			compare++;
			if (arr[j] < arr[j - 1])
			{
				nswap++;
				//				print(arr, size, j - 1, true);
				swap(&arr[j], &arr[j - 1]);
			}
			//			else
			//				print(arr, size, j - 1, false);
		}
	}

//	cout << "비교를 " << compare << "회 했습니다.\n";
//	cout << "교환을 " << nswap << "회 했습니다.\n";

}


void bubblesort2(int *arr, int size)
{
	int compare = 0, nswap = 0;
	for (int i = 0; i < size; i++)
	{
		int temp = nswap;
		//		cout << " 패스" << i + 1 << endl;
		for (int j = size - 1; j > i; j--)
		{
			compare++;
			if (arr[j] < arr[j - 1])
			{
				nswap++;
				//				print(arr, size, j - 1, true);
				swap(&arr[j], &arr[j - 1]);
			}
			//			else
			//				print(arr, size, j - 1, false);
		}
		if (nswap == temp)
			break;
	}

//	cout << "비교를 " << compare << "회 했습니다.\n";
//	cout << "교환을 " << nswap << "회 했습니다.\n";

}


void bubblesort3(int *arr, int size)
{
	int compare = 0, nswap = 0;
	for (int i = 0; i < size; i++)
	{
		int temp = size - 1;
		//		cout << " 패스" << i + 1 << endl;
		for (int j = size - 1; j > i; j--)
		{
			compare++;
			if (arr[j] < arr[j - 1])
			{
				nswap++;
				//				print(arr, size, j - 1, true);
				swap(&arr[j], &arr[j - 1]);
				temp = j - 1;
			}
			//			else
			//				print(arr, size, j - 1, false);
		}
		i = temp;
	}

//	cout << "비교를 " << compare << "회 했습니다.\n";
//	cout << "교환을 " << nswap << "회 했습니다.\n";

}

void selectionsort1(int *arr, const int size)
{
	int compare = 0, nswap = 0, min;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			//			compare++;
			if (arr[i] > arr[j])
			{
				//				nswap++;
				//				print(arr, size, i, j);
				swap(&arr[i], &arr[j]);
			}
		}

	}

//	cout << "비교를 " << compare << "회 했습니다.\n";
//	cout << "교환을 " << nswap << "회 했습니다.\n";

}

void selectionsort2(int *arr, const int size)
{
	int compare = 0, nswap = 0, min;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			//			compare++;
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		//		print(arr, size, i, min);
		if (arr[i] != arr[min])
		{
			//			nswap++;
			swap(&arr[i], &arr[min]);
		}


	}
	//	cout << "비교를 " << compare << "회 했습니다.\n";
	//	cout << "교환을 " << nswap << "회 했습니다.\n";
}

void Straight_Insertionsort(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
			{
				for (int k = i; k > j; k--)
				{
					swap(arr[k], arr[k - 1]);
				}
				break;
			}
		}
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void makearr(int *arr, const int size)
{
	/*bool *ch = new bool[size];
	memset(ch, false, sizeof(bool) * size);
	int ran;
	srand((unsigned long long)time(NULL));
	StopWatch T;
	for (int i = 0; i < size; i++)
	{
		ran = rand() % size;
		if (!ch[ran])
		{
			ch[ran] = true;
			arr[i] = ran;
			T.start();
		}
		else
		{
			if (T.getElapsedTime() > 10)
			{
				for (int j = 0; j < size; j++)
					if (!ch[j])
					{
						arr[i] = j;
						ch[j] = true;
					}
				T.start();
			}
			else
				i--;
		}
		T.stop();
	}

	int rp = 0;
	for (int i = 0; i < size; i++)
	{
		if (ch[i])
			rp++;
	}
	cout << rp << endl;
	delete[] ch;*/

	srand((unsigned long long)time(NULL));
	int ran;
	for (int i = 0; i < size; i++)
		arr[i] = i;
	for (int i = 0; i < size; i++)
	{
		int ran = rand() % size;
		swap(arr[i], arr[ran]);

	}
}

void print(int arr[], int size, int n, int s)
{
	for (int i = 0; i < size; i++)
	{
		if (i == n || i == s)
			cout << "+";
		else
			cout << " ";
		cout << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


}

void arrcpy(int *arr, const int *arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr2[i];
}
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
#include <stack>
#include <queue>
#include <ctime>

#include "StringBad.h"
#include "tabtenn0.h" 
#include "AcctABC.h"
#include "GeometricObject.h"
#include "Stopwatch.h"

using namespace std;

//
//int main()
//{
	//Brass Piggy("Porcelot Pigg", 381299, 4000.00);
	//BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
	//Piggy.ViewAcct();
	//cout << endl;
	//Hoggy.ViewAcct();
	//cout << endl;
	//cout << "Hogg 씨의 계좌애 $1000 입금: \n";
	//Hoggy.Deposit(1000.00);
	//cout << "Hogg 씨의 현재잔액: $" << Hoggy.Balance() << endl;
	//cout << "Pigg 씨의 계좌에서 $4200 인출:\n";
	//Piggy.Withdraw(4200.00);
	//cout << "Pigg 씨의 현재 잔액: $" << Piggy.Balance() << endl;
	//cout << "Hogg 씨의 계좌에서 $4200 인출:\n";
	//Hoggy.Withdraw(4200.00);
	//Hoggy.ViewAcct();
	/*

	const int CLIENTS = 4;

	Brass * p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;
	
	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "고객의 이름을 입력하십시오: ";
		getline(cin, temp);
		cout << "고객의 계좌 번호를 입력하십시오: ";
		cin >> tempnum;
		cout << "계좌 개설 잔액을 입력하십시오: $";
		cin >> tempbal;
		cout << "Brass 계좌는 1, "
			<< "BrassPlus 계좌는 2를 입력하십시오: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "1 아니면 2, 둘 중 하나를 입력하십시오: ";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "당좌 대월 한도를 입력하십시오: $";
			cin >> tmax;
			cout << "당좌 대월 이자율을 소수점 형식으로 "
				<< "입력하십시오: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		
		while (cin.get() != '\n')
			continue;
	}

	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}

	cout << "프로그램을 종료합니다." << endl;

	return 0;

}*/

//
//
//int main()
//{
//	const int CLIENTS = 4;
//
//	AcctABC * p_clients[CLIENTS];
//	string temp;
//	long tempnum;
//	double tempbal;
//	char kind;
//
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		cout << "고객의 이름을 입력하십시오: ";
//		getline(cin, temp);
//		cout << "고객의 계좌 번호를 입력하십시오: ";
//		cin >> tempnum;
//		cout << "계좌 개설 잔액을 입력하십시오: $";
//		cin >> tempbal;
//		cout << "Brass 계좌는 1, "
//			<< "BrassPlus 계좌는 2를 입력하십시오: ";
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "1 아니면 2, 둘 중 하나를 입력하십시오: ";
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);
//		else
//		{
//			double tmax, trate;
//			cout << "당좌대월 한계를 입력한다 : $";
//			cin >> tmax;
//			cout << "이자율을 입력한다 "
//				<< "소수점을 사용한다: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
//		}
//
//		while (cin.get() != '\n')
//			continue;
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		p_clients[i]->ViewAcct();
//		cout << endl;
//	}
//
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		delete p_clients[i];
//	}
//
//	cout << "프로그램을 종료합니다." << endl;
//
//	return 0;
//
//	
//
//	return 0;
//}

/*
문1.
	GeometricObject 베이스 클래스를 설계하라.
	Circle2D, Rectangle2D, Mypoint2D, Triangle2D 클래스에서 
	공통된 요소로 추상 클래스 GeometricObject 를 만들고
	이를 상속 받은 형태로 클래스 재정의 하라.
	위치, 넓이 구하기 등의 함수를 가상함수로 정의하라.
	각 클래스를 기존 코드에 적용 시켜서 잘 작동하는지 테스트하라.
	UML 클래스 다이어 그램도 작성.


*/
//
//int main()
//{
//	Circle2D C1(2, 2, 5.5);
//	Circle2D C2(2, 2, 5.5);
//	Circle2D C3(4, 5, 10.5);
//	Rectangle2D R1(2,2,5.5,4.9);
//	Rectangle2D R2(5,5,10.5,3.2);
//	Rectangle2D R3(3, 5, 2.3, 5.4);
//	MyPoint P1(0, 0);
//	MyPoint P2(10 , 30.5);
//	cout << C1.getradius() << endl;
//	cout << C1.contains(3, 3) << endl;
//	cout << C1.contains(C2) << endl;
//	cout << C1.overlaps(C3) << endl;
//	cout << C1.getArea() << endl;
//	cout << C1.getPerimeter() << endl;
//	
//	cout << endl;
//
//	cout << R1.getheight() << endl;
//	cout << R1.getwidth() << endl;
//	cout << R1.getArea() << endl;
//	cout << R1.getPerimeter() << endl;
//	cout << R1.contains(3, 3) << endl;
//	cout << R1.contains(R2) << endl;
//	cout << R1.overlaps(R3) << endl;
//
//	cout << endl;
//
//	cout << P1.isIn(C1) << endl;
//	cout << P1.isIn(R1) << endl;
//	cout << P1.distance(P2) << endl;
//
//
//	return 0;
//}

void swap(int *, int *);
void print(int [], int, int, bool);
void _set(int*, int*);
void sort1(int*, int);
void sort2(int *, int );
void sort3(int *, int );
void arrcpy(int *arr, int *arr2, int size);
void makearr(int *arr, const int size);

int main()
{
	const int size = 10000;
	int *arr = new int[size];
	int *arr2 = new int[size];
	StopWatch T;

	makearr(arr, size);

	arrcpy(arr2, arr, size);
	T.start();
	sort1(arr, size);
	T.stop();
	cout << T.getElapsedTime() << "ms 걸림\n";

	arrcpy(arr, arr2, size);
	T.start();
	sort2(arr, size);
	T.stop();
	cout << T.getElapsedTime() << "ms 걸림\n";

	arrcpy(arr, arr2, size);
	T.start();
	sort3(arr, size);
	T.stop();
	cout << T.getElapsedTime() << "ms 걸림\n";

	return 0;
}

void _set(int *arr)
{
	arr[0] = 6;
	arr[1] = 4;
	arr[2] = 3;
	arr[3] = 7;
	arr[4] = 1;
	arr[5] = 9;
	arr[6] = 8;
}

void sort1(int *arr, int size)
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

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

}


void sort2(int *arr, int size)
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

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

}


void sort3(int *arr, int size)
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

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

}


void print(int arr[], int size, int n, bool s)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i == n)
		{
			if (s)
				cout << "+";
			else
				cout << "-";
		}
		else
			cout << " ";
	}
	cout << endl;

}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void arrcpy(int *arr, int *arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr2[i];
}


void makearr(int *arr, const int size)
{
	bool *ch = new bool[size];
	memset(ch, false, sizeof(bool) * size);
	int ran;
	srand((unsigned long long)time(NULL));
	StopWatch T;
	bool late = true;
	for (int i = 0; i < size; i++)
	{
		ran = rand() % size;
		if (!ch[ran])
		{
			ch[ran] = true;
			arr[i] = ran;
		}
		else
		{
			if (T.getElapsedTime() > 1000)
			{
				for (int j = 0; j < size; j++)
					if (!ch[j])
					{
						arr[i] = j;
						ch[j] = true;
					}
				late = true;
			}
			else
			{
				if (late)
				{
					T.start();
					late = false;
				}

				i--;
			}
		}
		T.stop();
	}


	delete[] ch;
}
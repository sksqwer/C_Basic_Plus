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

#include "StringBad.h"
#include "Circle2D.h"
#include "Rectangle2D.h"
#include "Mypoint.h"
#include "tabtenn0.h"

using namespace std;

/*
문1. x축 y축의 점을 표시하는 MyPoint 클래스를 설계
	- 좌표를 나타내는 두 개의 x, y 데이터 필드
	- 지정 좌표의 점을 생성하는 생성자.
	- x와 y 데이터 필드를 위한 각각 두개의 get함수, set 함수
	- Mypoint 유형의 한 점에서 다른 점까지의 거리를 반환하는 distance 함수
		클래스 UML 다이어그램을 그리고, 클래스를 구현하라.

	ex> (0,0) 과 (10, 30.5) 를 생성하고 두 점 사이의 거리를 표시하는 테스트 프로그램 작성

	1.1 생성된 좌표의 점이 Circle2D클래스의 객체나 Rectangle2D의 객체의 내부에 있는지의 여부를 판단하는 IsIn 함수를 구현하라.
		Circle2D, Rectangle2D 쪽에 isIn(Mypoint& ) 형식 또는 
		bool Mypoint::Inin(Circle2D& ) and
		MyPoint::isIn(Rectangle2D &)
		를 구현해서 테스트 하는 프로그램 작성

*/
//
//
//int main()
//{
//	MyPoint a;
//	MyPoint b(10, 30.5);
//	cout << "두 점 사이의 거리는: " << a.distance(b) << endl;
//	Circle2D c(0, 0, 5);
//	Rectangle2D r(0, 0, 5, 5);
//	if (a.isIn(c))
//		cout << "a는 c에 포함된다." << endl;
//	else
//		cout << "a는 c에 포함되지 않는다." << endl;
//	if (a.isIn(r))
//		cout << "a는 r에 포함된다." << endl;
//	else
//		cout << "a는 r에 포함되지 않는다." << endl;
//
//	return 0;
//} 
//
//const int BUF = 512;
//
//class JustTesting
//{
//private:
//	string words;
//	int number;
//public:
//	JustTesting(const string & s = "Just Testing", int n = 0)
//	{
//		words = s; number = n; cout << words << " 생성\n";
//	}
//	~JustTesting() { cout << words << " 파괴\n"; }
//	void show() const
//	{
//		cout << words << ", " << number << endl;
//	}
//};
//
//int main()
//{
//	char * buffer = new char[BUF];
//
//	JustTesting *pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;
//	pc2 = new JustTesting("Heap1", 20);
//
//	cout << "메모리 블록 주소: \n" << "buffer: "
//		<< (void *)buffer << "      heap: " << pc2 << endl;
//	cout << "메모리 내용:  \n";
//	cout << pc1 << ": ";
//	pc1->show();
//	cout << pc2 << ": ";
//	pc2->show();
//
//	JustTesting *pc3, *pc4;
//	pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad Idea, 6");
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "메모리 내용:  \n";
//	cout << pc3 << ": ";
//	pc3->show();
//	cout << pc4 << ": ";
//	pc4->show();
//
//	delete pc2;
//	delete pc4;
//
//	pc3->~JustTesting();
//	pc1->~JustTesting();
//	delete [] buffer;
//	cout << "종료\n";
//
//
//	return 0;
//}
//
//
//int main()
//{
//	TableTennisPlayer player1("Tara", "Boomdea", false);
//	RatedPlayer rplayer1(1140, "MAllory", "Duck", true);
//	rplayer1.Name();
//	if (rplayer1.Hastable())
//		cout << ": 탁구대가 있다.\n";
//	else
//		cout << ": 탁구대가 없다.\n";
//	player1.Name();
//	if (player1.Hastable())
//		cout << ": 탁구대가 있다.\n";
//	else
//		cout << ": 탁구대가 없다.\n";
//
//	cout << "이름: ";
//	rplayer1.Name();
//	cout << "; 랭킹: " << rplayer1.Rating() << endl;
//	RatedPlayer rplayer2(1212, player1);
//	cout << "이름: ";
//	rplayer2.Name();
//	cout << "; 랭킹: " << rplayer2.Rating() << endl;
//
//	return 0;
//}
//
//const int N = 8;
//
//void Queen(bool[][N], bool[][N]);
//void Queen(bool[][N], bool[][N],  int, int);
//void print(bool[][N]);
//
//
//int main()
//{
//	bool arr[N][N] = { false };
//	bool ch[N][N] = { false };
//	Queen(arr, ch);
//
//	return 0;
//}
//
//void Queen(bool arr[][N], bool ch[][N])
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//				Queen(arr, ch, i, j);
//				print(arr);
//		}
//	}
//}
//
//void Queen(bool arr[][N], bool ch[][N], int a, int b)
//{
//	bool check = true;
//	arr[a][b] = true;
//	ch[a][b] = true;
//	for (int i = 1; i < N; i++)
//	{
//		if(a - i >= 0)
//			ch[a - i][b] = true;
//		if(a + i < N)
//		ch[a + i][b] = true;
//		if (b - i >= 0)
//		ch[a][b - i] = true;
//		if (b + i < N)
//		ch[a][b + i] = true;
//		if (a - i >= 0 && b - i >= 0)
//		ch[a - i][b - i] = true;
//		if (a + i < N && b + i < N)
//		ch[a + i][b + i] = true;
//		if (a - i >= 0 && b + i < N)
//		ch[a - i][b + i] = true;
//		if (a + i < N && b - i >= 0)
//		ch[a + i][b - i] = true;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (ch[i][j] == false)
//			{
//				Queen(arr, ch, i, j);
//				check = false;
//			}
//		}
//	}
//
////	if(check)
////		print(arr);
//
//
//
//
//
//
//}
//
//
//void print(bool arr[][N])
//{
//	for (int i = 0; i < N; i++)
//	{
//		cout << "\t";
//		for (int j = 0; j < N; j++)
//		{
//			if (arr[i][j] == true)
//				cout << "■";
//			else
//				cout << "□";
//		}
//		cout << endl;
//
//	}
//	cout << endl;
//}

const int N = 8;
int sum = 0;
void Queen(bool[], bool[], bool[]);
void Queen(bool[], bool[], bool[], int , int, int);
void print(bool[]);


int main()
{
	bool arr[N * N] = { false };
	bool ch[N * N] = { false };
	bool overlap[N * N] = { false };
	Queen(arr, ch, overlap);

	return 0;
}

void Queen(bool arr[], bool ch[], bool overlap[])
{
	/*bool *arr = new bool[N*N];
	for (int i = 0; i < N*N; i++)
		arr[i] = ARR[i];
	bool *ch = new bool[N*N];
	for (int i = 0; i < N*N; i++)
		ch[i] = CH[i];

	bool *ov = new bool[N*N];
	for (int i = 0; i < N*N; i++)
		ch[i] = overlap[i];*/

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			overlap[i * N + j] = true;
			Queen(arr, ch, overlap, 1 ,i , j);
		}
	}
}

void Queen(bool ARR[], bool CH[], bool overlap[], int total, int a, int b)
{
	bool arr[N*N];
	for (int i = 0; i < N*N; i++)
		arr[i] = ARR[i];
	bool ch[N*N];
	for (int i = 0; i < N*N; i++)
		ch[i] = CH[i];

	bool ov[N * N];
	for (int i = 0; i < N * N; i++)
		ov[i] = overlap[i];

	bool check = true;
	arr[a * N + b] = true;
	ch[a * N + b] = true;
	for (int i = 1; i < N; i++)
	{
		if (a - i >= 0)
			ch[(a - i) * N + b] = true;
		if (a + i < N)
			ch[(a + i) * N + b] = true;
		if (b - i >= 0)
			ch[a * N + b - i] = true;
		if (b + i < N)
			ch[a * N + b + i] = true;
		if (a - i >= 0 && b - i >= 0)
			ch[(a - i) * N + b - i] = true;
		if (a + i < N && b + i < N)
			ch[(a + i) * N + b + i] = true;
		if (a - i >= 0 && b + i < N)
			ch[(a - i) * N + b + i] = true;
		if (a + i < N && b - i >= 0)
			ch[(a + i) * N + b - i] = true;
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!ch[i * N + j])
			{
				check = false;

				if (!ov[i * N + j])
				{
					ov[i * N + j] = true;
					Queen(arr, ch, ov,total + 1, i, j);
				}
			}
		}
	}
	
	if (check && total == N)
	{
		sum++;
		cout << sum << endl;
		print(arr);
	}


}


void print(bool arr[])
{
	for (int i = 0; i < N; i++)
	{
		cout << "\t";
		for (int j = 0; j < N; j++)
		{
			if (arr[i * N + j])
				cout << "■";
			else
				cout << "□";
		}
		cout << endl;

	}
	cout << endl;
}
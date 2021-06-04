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

using namespace std;



/*
문1. 
	N명의 이용자를 가진 소셜 네트워크 서비스가 있습니다.
	각각의 이용자는 1번 부터 N번 까지 번호가 붙어 있습니다.
	이 소셜 네트워크에서 각 이용자의 친구 수를 분석하려고 합니다.
*/
//
//bool rel[101][101] = { false };
//bool fr[101][101] = { false };
//int res[101] = { 0 };
//int N;
//void search();
//
//int main()
//{
//	cout << "Input Number of People: ";
//	cin >> N;
//
//	int a, b, k;
//	for (int i = 1; i <= N; i++)
//	{
//		cout << "number of friends #" << i << "Person has: ";
//		cin >> k;
//		for (int j = 1; j <= k; j++)
//		{
//			cout << j << "st/nd/rd/th friend is: ";
//			cin >> a;
//			if (a < 1 || a > N)
//			{
//				cout << "Wrong!\n";
//				j--;
//				continue;
//			}
//			rel[i][a] = true;
//		}
//		cout << endl;
//	}
//
//	search();
//	cout << endl;
//	cout << "[DIRECT FRIED LIST]\n";
//	for (int i = 1; i <= N; i++)
//	{
//		cout << "Person #" << i << "has ";
//		for (int j = 1; j <= N; j++)
//		{
//			if (rel[i][j])
//				cout << j << " ";
//		}
//		cout << "as a friend\n";
//	}
//	cout << "====================================\n";
//	cout << "[TOTAL FRIEND LIST]\n";
//	for (int i = 1; i <= N; i++)
//	{
//		cout << "Person #" << i << "has ";
//		for (int j = 1; j <= N; j++)
//		{
//			if (fr[i][j])
//				cout << j << " ";
//		}
//		cout << "as a friend\n";
//	}
//	
//
//
//	return 0;
//}
//void search()
//{
//	bool arr[101];
//	for (int i = 1; i <= N; i++)
//	{
//		memset(arr, false, sizeof(bool) * N+1);
//		for (int j = 1; j <= N; j++)
//		{
//			if (rel[i][j])
//			{
//				fr[i][j] = true;
//				for (int k = 1; k <= N; k++)
//				{
//					if (k == i)
//						continue;
//					fr[i][k] |= (rel[j][k] | rel[i][k]);
//				}
//			}
//
//		}
//		for (int j = 1; j <= N; j++)
//		{
//			if (arr[j])
//				res[i]++;
//		}
//	}
//}
//
//int N;
//
//vector<int> *directfr;
//vector<int> *fr;
//
//void search();
//
//int main()
//{
//	cout << "Input Number of People: ";
//	cin >> N;
//	directfr = new vector<int>[N];
//	fr = new vector<int>[N];
//
//	int a, b, k;
//	for (int i = 0; i < N; i++)
//	{
//		cout << "number of friends #" << i + 1  << "Person has: ";
//		cin >> k;
//		for (int j = 0; j < k; j++)
//		{
//			cout << j << "st/nd/rd/th friend is: ";
//			cin >> a;
//			if (a < 1 || a > N)
//			{
//				cout << "Wrong!\n";
//				j--;
//				continue;
//			}
//			directfr[i].push_back(a);
//		}
//		cout << endl;
//	}
//
//	search();
//	cout << endl;
//	cout << "[DIRECT FRIED LIST]\n";
//	for (int i = 0; i < N; i++)
//	{
//		cout << "Person #" << i + 1 << "has ";
//		for (auto iter = directfr[i].begin(); iter != directfr[i].end(); iter++)
//		{
//			cout << *iter << " ";
//		}
//		cout << "as a friend\n";
//	}
//	cout << "====================================\n";
//	cout << "[TOTAL FRIEND LIST]\n";
//	for (int i = 0; i < N; i++)
//	{
//		cout << "Person #" << i + 1 << "has ";
//		for (auto iter = fr[i].begin(); iter != fr[i].end(); iter++)
//		{
//			cout << *iter << " ";
//		}
//		cout << "as a friend\n";
//	}
//	
//
//	delete[] directfr;
//	delete[] fr;
//
//
//	return 0;
//}
//
//void search() 
//{
//	queue<int> q;
//	int temp;
//	bool *visit = new bool[N];
//	for (int i = 0; i < N; i++)
//	{
//		memset(visit, false, sizeof(bool) * N);
//		for (auto iter = directfr[i].begin(); iter != directfr[i].end(); iter++)
//		{
//			q.push(*iter);
//		}	
//
//		while (!q.empty())
//		{
//			temp = q.front();
//			q.pop();
//			visit[temp - 1] = true;
//			fr[i].push_back(temp);
//			for (auto iter = directfr[temp - 1].begin(); iter != directfr[temp - 1].end(); iter++)
//			{
//				if (*iter - 1 == i)
//					continue;
//				if (visit[temp - 1])
//				{
//					fr[i].push_back(*iter);
//					visit[*iter - 1] = true;
//				}
//			}
//		}
//
//	}
//
//	delete[] visit;
//
//
//}

/*
문2.
	Stopwatch class를 설계하라.
		1, get함수를 갖는 전용 데이터 필드 startTime, endTime
		2. startTime을 현재 시간으로 초기화 하는 인수 없는 생성자
		3. startTime을 현재 시간으로 재설정하는 start() 함수
		4. endTime을 현재 시간으로 재설정하는  stop()함수
		5. 스톱워치의 경과 시간을 millisecinds로 반환하는 getElapsedTime()함수
		
		해당 클래스에 대한 UML 다이어 그램을 그리고,

		앞서 만들었던 문제의 해결시간을 체크하는 코드를 추가하고
		버블 정렬을 사용하여 10,000개의 숫자를 정렬하는데 걸린 
		실행시간을 측정 하는 프로그램을 작성하라.
		(10만개 숫자를 만드는 함수(또는 클래스)를 만들어 놓고 계속 재활용)

*/
void swap(int *, int *);
void makearr(int *,const int);
void bubblesort(int *,const int);
void selectionsort1(int *, const int);
void selectionsort2(int *,const int);
void print(int arr[], int size, int n, int s);
void arrcpy(int *, int *, int);

int main()
{
	const int size = 80000;
	int *arr = new int[size];
	int *arr2 = new int[size];
	makearr(arr, size);
	arrcpy(arr2, arr, size);
	StopWatch T;
	//cout << "초기: ";
	/*for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	cout << endl << "sort1" << endl;
	T.start();
	selectionsort1(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";


	cout << endl << "sort2" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	selectionsort2(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";


	/*cout << "정렬 후: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	return 0;
}


void bubblesort(int *arr, const int size)
{
	int compare = 0, nswap = 0;
	for (int i = 0; i < size; i++)
	{
		int temp = size - 1;
		for (int j = size - 1; j > i; j--)
		{
			compare++;
			if (arr[j] < arr[j - 1])
			{
				nswap++;
				swap(&arr[j], &arr[j - 1]);
				temp = j - 1;
			}
		}
		i = temp;
	}

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

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

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

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

	cout << "비교를 " << compare << "회 했습니다.\n";
	cout << "교환을 " << nswap << "회 했습니다.\n";

}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
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

void arrcpy(int *arr, int *arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr2[i];
}
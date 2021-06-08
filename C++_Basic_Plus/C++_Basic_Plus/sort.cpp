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
#include <algorithm>
#include <stack>
#include <queue>
#include <ctime>

#include "GeometricObject.h"
#include "Stopwatch.h"
#include "Stacktp.h"
#include "Worker0.h"

using namespace std;
void swap(int *, int *);
void makearr(int *, const int);
void bubblesort1(int *, int);
void bubblesort2(int *, int);
void bubblesort3(int *, const int);
void selectionsort1(int *, const int);
void selectionsort2(int *, const int);
void Straight_Insertionsort(int *, const int);
void shell_sort(int *, const int);
void print(int arr[], int size, int n, int s);
void arrcpy(int *, const int *, int);

int main()
{
	const int size = 10000;
	int *arr = new int[size];
	int *arr2 = new int[size];
	makearr(arr, size);
	arrcpy(arr2, arr, size);
	StopWatch T;

	cout << "sort갯수: " << size << endl;

	/*cout << "초기: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/

	/*int rp = 0;
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
		cout << rp << "중복" << endl;*/

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

	cout << endl << "Shell_sort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	shell_sort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";

	//cout << "정렬 후: ";
	//for (int i = 0; i < size; i++)
	//	cout << arr[i] << " ";
	//cout << endl;

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

void shell_sort(int *arr, const int size)
{
	int h = 1;
	while (h * 9 < size)
	{
		h *= 3;
		h++;
	}
	while (h > 0)
	{
		for (int i = 0; i < size; i += h)
		{
			int min = i;
			for (int j = i + h; j < size; j += h)
			{
				if (arr[min] > arr[j])
					min = j;
			}
			if (min != i)
				swap(arr[i], arr[min]);
		}
		h--;
		h /= 3;
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
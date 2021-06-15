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
void Quick_sort(int *, const int, const int, const int);
void merge_sort(int *, int *, int, int, int, int, const int);
void heap_sort(int *, const int);
void make_heap(int *arr, const int size);
void down_heap(int *arr, int n, const int size);
void distribution_sort(int *, const int);
void print(int arr[], int size, int n, int s);
void printquick(int arr[], int size, int n, int s, int);
void printarr(int *arr,int, int, int, int, int size);
void arrcpy(int *, const int *, int);
bool check_complete(int *, const int);


int main()
{
	const int size = 1000000;
	int *arr = new int[size];
//	int arr[10] = { 0,1,1,3,3,9,9,2,5,7};
	int *arr2 = new int[size];
	makearr(arr, size);
	arrcpy(arr2, arr, size);
	StopWatch T;

	cout << "sort 갯수: " << size << endl;

	/*cout << "초기: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;*/
/*
	cout << endl << "bubblesort1" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort1(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

	cout << endl << "bubblesort2" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort2(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;


	cout << endl << "bubblesort3" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	bubblesort3(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;


	cout << endl << "selectionsort1" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	selectionsort1(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;


	cout << endl << "selectionsort2" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	selectionsort2(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;


	cout << endl << "Straight_Insertionsort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	Straight_Insertionsort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;


	cout << endl << "shell_sort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	shell_sort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

*/
	cout << endl << "Quick_sort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	Quick_sort(arr, 0, size - 1, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

	cout << endl << "Merge_sort" << endl;
	int *arr3 = new int[size];
	arrcpy(arr3, arr2, size);
	memset(arr, 0, sizeof(int) * size);
	T.start();
	merge_sort(arr, arr3, 0, (size - 1) / 2, (size - 1) / 2 + 1, size - 1, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

	cout << endl << "heap_Sort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	make_heap(arr, size);
	heap_sort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

	cout << endl << "distribution_sort" << endl;
	arrcpy(arr, arr2, size);
	T.start();
	distribution_sort(arr, size);
	T.stop();

	cout << T.getElapsedTime() << "ms 걸림\n";
	if (!check_complete(arr, size))
		cout << "실패!" << endl;

	//cout << "정렬 후: ";
	//for (int i = 0; i < size; i++)
	//	cout << arr[i] << " ";
	//cout << endl;

	delete[] arr;
	delete[] arr2;
	delete[] arr3;

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

void Quick_sort(int *arr,const int l,const int r,const int size)
{
	int pl = l, pr = r;

	int p = (pl + pr) / 2;
	int x = arr[p];
	while (pl <= pr)
	{
		while (arr[pl] < x) pl++;
		while (arr[pr] > x) pr--;
		if (pl <= pr)
		{
//			printquick(arr, size, pl, pr, p);
			swap(arr[pl], arr[pr]);
			pl++;
			pr--;
		}
	}
	if (l < pr) Quick_sort(arr, l, pr, size);
	if (r > pl) Quick_sort(arr, pl, r, size);


}

void merge_sort(int *res, int *arr, int ll , int lr, int rl, int rr, const int size)
{
	int n = ll;
	const int _ll = ll, _lr = lr, _rl = rl, _rr = rr;
	int l = (ll + lr) / 2, r = (lr + rr) / 2;
	if (ll != lr)
		merge_sort(res, arr, ll, l, l + 1, lr, size);
	if(rl != rr)
		merge_sort(res, arr, rl, r, r + 1, rr, size);

	while (ll <= lr && rl <= rr)
	{
		if (arr[ll] <= arr[rl])
		{
			res[n++] = arr[ll++];
//			printarr(res, _ll, _lr, _rl, _rr, size);
		}
		else
		{
			res[n++] = arr[rl++];
//			printarr(res, _ll, _lr, _rl, _rr, size);
		}
	}
	while (ll <= lr)
	{
		res[n++] = arr[ll++];
//		printarr(res, _ll, _lr, _rl, _rr, size);
	}
	while (rl <= rr)
	{
		res[n++] = arr[rl++];
//		printarr(res, _ll, _lr, _rl, _rr, size);
	}
	for (int i = _ll; i <= _rr; i++)
		arr[i] = res[i];
}

void heap_sort(int *arr,const int size)
{
	for (int i = size - 1; i > 0; i--)
	{
		swap(arr[0], arr[i]);
		down_heap(arr, 0, i);
	}

}

void make_heap(int *arr, const int size)
{
	int paren;
	for (int i = size - 1; i > 0; i--)
	{
		paren = (i % 2) ? i / 2 : i / 2 - 1;

		if (arr[i] > arr[paren])
		{
			swap(arr[i], arr[paren]);
			down_heap(arr, i, size);
		}

	}
}
void down_heap(int * arr, int n, const int size)
{
	int paren = n;
	int child1, child2;
	int max;
	while (1)
	{
		child1 = 2 * paren + 1;
		child2 = 2 * paren + 2;
		max = paren;
		
		if (child1 < size && arr[max] < arr[child1])
			max = child1;
		if (child2 < size && arr[max] < arr[child2])
			max = child2;

		if (max != paren)
		{
			swap(arr[paren], arr[max]);
			paren = max;
		}
		else
			return;
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

void distribution_sort(int *arr, const int size)
{
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	int *disarr = new int[max + 1];
	memset(disarr, 0, sizeof(int) * (max + 1));

	for (int i = 0; i < size; i++)
		disarr[arr[i]]++;

	int cur = 0;
	for (int i = 0; i < size; i++)
	{
		if (disarr[cur] == 0)
		{
			cur++;
			i--;
		}
		else
		{
			while (disarr[cur] != 0)
			{
				arr[i] = cur;
				disarr[cur]--;
				if (disarr[cur] != 0)
					i++;
			}
			cur++;
		}
	}

	delete[] disarr;
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

void printquick(int arr[], int size, int n, int s, int p)
{
	for (int i = 0; i < size; i++)
	{
		if (i == n)
			cout << "<";
		else if (i == s)
			cout << ">";
		else if (i == p)
			cout << "*";
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
void printarr(int *arr,int ll, int lr, int rl, int rr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == ll || i == rl)
			cout << "<";
		else if (i == lr || i == rr)
			cout << ">";
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

bool check_complete(int *arr, const int size)
{
	bool ch = true;
	for (int i = 0; i < size - 1; i++)
		if (arr[i] > arr[i + 1])
			ch = false;
	return ch;
}

void arrcpy(int *arr, const int *arr2, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr2[i];
}


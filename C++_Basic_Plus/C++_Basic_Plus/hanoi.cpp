

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
#include <conio.h>
#include <stack>
#include <queue>

#include "StringBad.h"

using namespace std;
const int MAX = 987654321;
int n;
vector<int> a, b, c;
void hanoi(int pre);
void show();
void move(vector<int> &v1, vector<int> &v2);
//
//int main()
//{
//	cout << "원반 최대 크기(0:exit) : ";
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		a.insert(a.end(), i);
//
////	show();
//	hanoi(2);
//
//
//	return 0;
//
//}

void hanoi(int pre)
{
	if (n == 0)
		return;

	if (c.size() == n)
		return;

	vector<int> *pl, *pr;
	int ta = MAX, tb = MAX, tc = MAX;

	long long k = 1;

	for (int i = 0; i < n; i++)
		k *= 2;
	k--;
	cout << k << endl;

	for (int i = 0; i < k; i++)
	{
		ta = MAX, tb = MAX, tc = MAX;
		if (pre == 0)
		{
			if (!b.empty())
				tb = b.front();

			if (!c.empty())
				tc = c.front();

			if (tb < tc)
			{
				if (b.size() % 2)
				{
					move(b, c);
					cout << 2 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(b, a);
					cout << 2 << " " << 1 << endl;
					pre = 0;
				}
			}
			else
			{
				if (c.size() % 2)
				{
					move(c, b);
					cout << 3 << " " << 2 << endl;
					pre = 1;
				}
				else
				{
					move(c, a);
					cout << 3 << " " << 1 << endl;
					pre = 0;
				}
			}
		}
		else if (pre == 1)
		{
			if (!a.empty())
				ta = a.front();

			if (!c.empty())
				tc = c.front();

			if (ta < tc)
			{
				if (a.size() % 2)
				{
					move(a, c);
					cout << 1 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(a, b);
					cout << 1 << " " << 2 << endl;
					pre = 1;
				}
			}
			else
			{
				if (c.size() % 2)
				{
					move(c, b);
					cout << 3 << " " << 2 << endl;
					pre = 1;
				}
				else
				{
					move(c, a);
					cout << 3 << " " << 1 << endl;
					pre = 0;
				}
			}
		}
		else
		{
			if (!a.empty())
				ta = a.front();

			if (!b.empty())
				tb = b.front();

			if (ta < tb)
			{
				if (a.size() % 2)
				{
					move(a, c);
					cout << 1 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(a, b);
					cout << 1 << " " << 2 << endl;
					pre = 1;
				}
			}
			else
			{
				if (b.size() % 2)
				{
					move(b, c);
					cout << 2 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(b, a);
					cout << 2 << " " << 1 << endl;
					pre = 0;
				}
			}
		}

//		show();

	}

	return;

}

//
//void show()
//{
//	for (int i = 0; i < n; i++)
//	{
//		int asize = a.size(), bsize = b.size(), csize = c.size();
//		cout << "\t\t[";
//		if (asize < n - i)
//			cout << " ";
//		else
//		{
//			cout << a[asize - (n - i)];
//		}
//		cout << "]\t";
//		cout << "[";
//		if (b.size() < n - i)
//			cout << " ";
//		else
//		{
//			cout << b[bsize - (n - i)];
//		}
//		cout << "]\t";
//		cout << "[";
//		if (c.size() < n - i)
//			cout << " ";
//		else
//		{
//			cout << c[csize - (n - i)];
//		}
//		cout << "]\t\n";
//	}
//
//	cout << "\t\t A \t B \t C \n"
//		<< "\t\t-------------------\n";
//}

void move(vector<int> &v1, vector<int> &v2)
{
	v2.insert(v2.begin(), v1[0]);
	v1.erase(v1.begin());
}


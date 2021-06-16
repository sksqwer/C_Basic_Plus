#include <iostream>
#include <string>
#include <ctime>

#include "Stopwatch.h"

using namespace std;

int Brute_Force_Method(string, string);
int KMP(string, string);


int main()
{
	srand((unsigned int)time(NULL));
	const int n = 10000000;
	string str1, str2;
	int cmp;
	for (int i = 0; i < n; i++)
		//	str1 += 'A' + (rand() % 2);
		str1 += 'A';
	str1[n - 1] = 'B';
	str2 = "AAAAAAAAAB";
//	str2 = "AAAAAAAAAAAAAAAAA";

	StopWatch stopw;

	cout << "Brute_Force_Method" << endl;
	stopw.start();
	cout << Brute_Force_Method(str1, str2) << endl;
	stopw.stop();
	cout << stopw.getElapsedTime() << "ms" << endl;

	cout << "KMP" << endl;
	stopw.start();
	cout << KMP(str1, str2) << endl;
	stopw.stop();
	cout << stopw.getElapsedTime() << "ms" << endl;

	return 0;
}

int Brute_Force_Method(string str1, string str2)
{
	int len1 = str1.length(), len2 = str2.length();
	int res, cmp;

	for (int i = 0; i < len1; i++)
	{
		if (str1[i] == str2[0])
		{
			if (i + len2 > len1)
				break;
			bool ch = true;
			res = i;
			for (int j = 1; j < len2; j++)
			{
				if (str2[j] != str1[res + j])
				{
					ch = false;
					break;
				}
			}
			if (ch)
				return res;
		}
	}

	return -1;

}


int KMP(string str1, string str2)
{
	int len1 = str1.length(), len2 = str2.length();
	int res,cmp;

	for (int i = 0; i < len1; i++)
	{
		if (str1[i] == str2[0])
		{
			if (i + len2 > len1)
				break;
			bool ch = true;
			res = i;
			for (int j = 1; j < len2; j++)
			{
				i = (str2[0] == str1[res + j]) ? (i + j - 1) : i;

				if (str2[j] != str1[res + j])
				{
					ch = false;
					break;
				}
			}
			if (ch)
				return res;
		}
	}

	return -1;
}
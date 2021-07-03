#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <limits>

#include "Stopwatch.h"

using namespace std;

int Brute_Force_Method(string, string);
int KMP(string, string);
int Boyer_Moore(string, string);
int Boyer_Moore2(string, string);


void print(string , string, const int, const int, const int);

int main()
{
	int kmp_res = -1, By_res = -1;
	string str1, str2;
	int n = 1000000;
	int count = 0;
	while (1)
	{
		if (count == 10) break;
		srand((unsigned int)time(NULL));
//		const int n = 100;
		str1 = "", str2 = "";
		int cmp;
//			str1 = "ABABABAA";
		//	str1 = "BDBDEDEABCECDECEABCEADBABCEBDECBECEEAAEEEECEBBAACB";
//			n = str1.length();
		for (int i = 0; i < n; i++)
			str1 += 'A' + (rand() % 2);

		//char temp;
		//int random;
		//for (int i = 0; i < n; i++)
		//{
		//	random = rand() % n;
		//	temp = str1[i];
		//	str1[i] = str1[random];
		//	str1[random] = temp;
		//}

//			for (int i = 0; i < n; i++)
//				str1 += 'A';
//			str1[n - 1] = 'B';
		//	str2 = "ABCAABDF";
		for (int i = 0; i < 3; i++)
			str2 += 'A' + (rand() % 2);
//			str2 = "ABAA";



		//	cout << str1 << endl;
		//	cout << str2 << endl;


		/*	for (int i = 0; i < n; i++)
			{
				cout.width(3);
				cout << i;
			}
			cout << endl;
			cout << endl;
			for (int i = 0; i < n; i++)
			{
				cout.width(3);
				cout << str1[i];
			}
			cout << endl;
		*/

		StopWatch stopw;


		//cout << "Brute_Force_Method" << endl;
		//stopw.start();
		//cout << Brute_Force_Method(str1, str2) << endl;
		//stopw.stop();
		//cout << stopw.getElapsedTime() << "ms" << endl;

//		By_res = Boyer_Moore(str1, str2);
//		kmp_res = KMP(str1, str2);
		int Bruse_res = -1;
		//if (By_res != kmp_res && By_res != Bruse_res && Bruse_res != kmp_res)
		//if(1)
		
		if(1)
		{
			cout << count << endl;
			count++;
			//cout << str1 << endl;
			//cout << str2 << endl;

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

			cout << "Boyer_Moore" << endl;
			stopw.start();
			cout << Boyer_Moore(str1, str2) << endl;
			stopw.stop();
			cout << stopw.getElapsedTime() << "ms" << endl;

			cout << "Boyer_Moore2" << endl;
			stopw.start();
			cout << Boyer_Moore2(str1, str2) << endl;
			stopw.stop();
			cout << stopw.getElapsedTime() << "ms" << endl;
			
		}
		Sleep(1000);
	}


	/*	for (int i = 0; i < n; i++)
	{
		cout.width(3);
		cout << i;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout.width(3);
		cout << str1[i];
	}
	cout << endl;*/

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
	int *skip = new int[len2];
	int itr = 0;
	skip[0] = 0;
	for (int i = 1; i < len2; i++)
	{

		if (str2[i] == str2[0] && itr == 0) // 
		{
			skip[i] = ++itr;
		}
		else if (itr > 0 && str2[i] == str2[itr])
		{
			skip[i] = ++itr;
		}
		else
		{
			itr = 0;
			skip[i] = 0;
			i--;
		}
	}

	int res, cmp;
	itr = 1;
	for (int i = 0; i < len1; i++)
	{
		if (str1[i] == str2[0])
		{
			bool ch = true;
			res = i;
			for (int j = itr; j < len2; j++)
			{
				if (str2[j] != str1[res + j])
				{
					ch = false;
					if (skip[j - 1] == 0)
					{
						itr = 1;
						i += j - 1;
					}
					else
					{
						i += j - skip[j - 1] - 1;
						itr = skip[j - 1];
					}
					break;
				}
			}
			if (ch)
			{
				delete[] skip;
				return res;
			}
		}
	}

	delete[] skip;
	return -1;
}

int Boyer_Moore(string str1, string str2)
{
	int len1 = str1.length(), len2 = str2.length();
	int res = 0, cmp, itr = len2 - 1;
	bool ch = false;
	while (itr < len1)
	{
		ch = false;
		int cp = len2 - 1;
		int itr2 = itr;
		while (str2[cp] == str1[itr])
		{
//			print(str1, str2, itr, cp, itr2);
			if (cp == 0)
				return itr;
			itr--;
			cp--;
		}

		int cp2 = 0;
		for (int i = cp - 1; i >= 0; i--)
		{
//			print(str1, str2, itr, i, itr2);
			if (str1[itr] == str2[i])
			{
				cp2 = i;
				ch = true;
				break;
			}

		}
		if (!ch)
			itr += len2;
		else
		{
			itr += len2 - cp2 - 1;
		}



	}
	


	return -1;
}

void print(string str1, string str2, const int itr, const int cp, const int itr2)
{
	int len1 = str1.length(), len2 = str2.length();

	cout << "str1 : ";
	for (int i = 0; i < len1; i++)
		cout << str1[i] << " ";
	cout << endl;
	cout << "     : ";
	for (int i = 0; i < len1; i++)
	{
		if (i == itr2) cout << "* ";
		else if (i == itr2 - len2 + cp + 1) cout << "^ ";
		else cout << "  ";
	}
	cout << endl;
	cout << "str2 : ";
	for (int i = 0; i < len1; i++)
	{
		if (i < itr2 - len2 + 1 || i > itr2)
			cout << "  ";
		else
		{
			for (int j = 0; j < len2; j++)
			{
				cout << str2[j] << " ";
				i++;
			}
		}

	}
	cout << endl << endl;
}


/*int len1 = str1.length(), len2 = str2.length();
int res,cmp;

for (int i = 0; i < len1; i++)
{
	if (str1[i] == str2[0])
	{
		if (i + len2 > len1)
			break;
		bool ch = true;
		bool ch2 = true;
		res = i;
		for (int j = 1; j < len2; j++)
		{
			if (ch2)
			{
				if (str2[0] == str1[res + j])
				{
					ch2 = false;
					i = (i + j - 1);
				}
			}



			if (str2[j] != str1[res + j])
			{
				ch = false;
				break;
			}
		}
		if (ch)
			return res;
		else if(ch2)
			i = res + len2 - 1;
	}
}

return -1;*/



int Boyer_Moore2(string str1, string str2)
{
	int len1 = str1.length(), len2 = str2.length();
	int res = 0, cmp, itr = len2 - 1;
	bool ch = false;
	int *skip = new int[UCHAR_MAX];

	for (int i = 0; i < UCHAR_MAX; i++)
		skip[i] = len2;

	for (int i = 0; i < len2; i++)
		skip[str2[i]] = i;
	itr = len2 - 1;
	int cp = len2 - 1;
	int skip_temp = 0;
	while (itr < len1)
	{
		ch = false;
		cp = len2 - 1;
		int itr2 = itr;
//		print(str1, str2, itr, cp, itr2);
		while (str2[cp] == str1[itr])
		{
//			cout << "itr: " << itr << "cp: " << cp << endl;
//			print(str1, str2, itr, cp, itr2);
			if (cp == 0)
			{
				delete[] skip;
				return itr;
			}
			itr--;
			cp--;
		}
		skip_temp = skip[str2[cp]];
		if (skip_temp == len2) // 패턴에 없는 문자일경우
			itr += len2 - cp + skip_temp - 1;
		else
		{
			if (skip_temp < cp) // 
			{
				itr += len2 - skip_temp + 1;
			}
			else
			{
				itr += len2 - cp;
			}
		}
	}


	delete[] skip;

	return -1;
}

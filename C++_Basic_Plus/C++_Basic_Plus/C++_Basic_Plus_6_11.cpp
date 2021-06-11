#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <list>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <cctype>


#include "GeometricObject.h"
#include "Stopwatch.h"
#include "Stacktp.h"
#include "Worker0.h"
#include "Tv.h"
#include "Queuetp.h"

using namespace std;
//
//template<class T>
//class TooBig
//{
//private:
//	T cutoff;
//public:
//	TooBig(const T & t) : cutoff(t) {}
//	bool operator () (const T & v) { return v > cutoff; }
//};
//
//void outint(int n) { cout << n << " "; }
//
//int main()
//{
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int> etcetera(vals, vals + 10);
//
//	cout << "원래의 리스트:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "정비된 리스트: \n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	return 0;
//}
//
//char toLower(char ch) { return tolower(ch); }
//string & ToLower(string & st);
//void display(const string & s);
//
//int main()
//{
//	vector<string> words;
//	cout << "단어들을 입력하십시오(끝내려면 quit) : \n";
//	string input;
//	while (cin >> input && input != "quit")
//		words.push_back(input);
//	cout << "다음과 같은 단어들을 입력하셨습니다.\n";
//	for_each(words.begin(), words.end(), display);
//	cout << endl;
//
//	set<string> wordset;
//	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
//	cout << "\n단어들의 알파벳순 리스트:\n";
//	for_each(wordset.begin(), wordset.end(), display);
//	cout << endl;
//
//	map<string, int> wordmap;
//	set<string>::iterator si;
//	for (si = wordset.begin(); si != wordset.end(); si++)
//		wordmap[*si] = count(words.begin(), words.end(), *si);
//
//	cout << "\n단어별 빈도: \n";
//	for (si = wordset.begin(); si != wordset.end(); si++)
//		cout << *si << ": " << wordmap[*si] << endl;
//	return 0;
//
//}
//
//string & ToLower(string & st)
//{
//	transform(st.begin(), st.end(), st.begin(), toLower);
//	return st;
//}
//void display(const string & s)
//{
//	cout << s << " ";
//}
//
//vector<int> Lotto(int, int);
//
//int main()
//{
//	vector<int> winners;
//	const int size = 45, n = 6;
//
//	for(int i = 0; i < 10; i++)
//	{
//		winners = Lotto(size, n);
//		//for (auto itr = winners.begin(); itr != winners.end(); itr++)
//		//	cout << (*itr) << " ";
//		for_each(winners.begin(), winners.end(), [](const int & n) ->void { cout << n << " "; });
//		cout << endl;
//	}
//
//
//}
//vector<int> Lotto(int, int);
//
//vector<int> Lotto(int size, int n)
//{
//	/*vector<int> a;
//	int *arr = new int[size];
//	for (int i = 0; i < size; i++)
//		arr[i] = i + 1;
//
//	random_shuffle(arr, arr + size);
//
//	for (int i = 0; i < n; i++)
//		a.push_back(arr[i]);
//
//	sort(a.begin(), a.end());
//
//	return a;*/
//	vector<int> a(size, 0);
//	int i = 1;
//	transform(a.begin(), a.end(), a.begin(), [&i](int n) ->int {return i++; });
//	random_shuffle(a.begin(), a.end());
//	a.erase(a.begin() + n, a.end());
//	sort(a.begin(), a.end());
//	return a;
//
//}


void Lotto(int, int);

int main()
{
	const int size = 45, n = 6;

	for (int i = 0; i < 10; i++)
		Lotto(size, n);
	return 0;
}
void Lotto(int size, int n)
{
	vector<int> a(size, 0);
	int i = 1;
	transform(a.begin(), a.end(), a.begin(), [&i](int n) ->int {return i++; });
	random_shuffle(a.begin(), a.end());
	a.erase(a.begin() + n, a.end());
	sort(a.begin(), a.end());
	for_each(a.begin(), a.end(), [](const int & n) ->void {cout.width(2);  cout << n << " "; });
	cout << endl;
}
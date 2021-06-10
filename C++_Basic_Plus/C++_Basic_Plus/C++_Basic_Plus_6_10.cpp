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
#include <iterator>
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
#include "Tv.h"
#include "Queuetp.h"

using namespace std;
//
//void change(const int *, int);
//
//int main()
//{
//	int pop1 = 38383;
//	const int l = 2000;
//	const int *pop2 = &l;
//	int *m = const_cast<int *>(pop2);
//	(*m)++;
//	cout << *m <<" " << *pop2 << " " << l << endl;
//	cout << m <<" " << pop2 << " " << &l << endl;
//	cout << *m << " " << *pop2 << " " << l << endl;
//	cout << "pop1, pop2: " << pop1 << ", " << *pop2 << " " << l << endl;
//	change(&pop1, -103);
//	change(&l, -103);
//	cout << "pop1, pop2: " << pop1 << ", " << *pop2 << " " << l << endl;
//	cout << *m << " " << pop2 << endl;
//
//	return 0;
//}
//void change(const int *pt, int n)
//{
//	int * pc;
//
//	pc = (const_cast<int *>(pt));
//	int &m = *(const_cast<int *>(pt));
//	*pc += n;
//	m += n;
//	cout << m << endl;
//}

//
//class Report
//{
//private:
//	string str;
//public:
//	Report(const string s) : str(s) 
//	{
//		cout << "객체가 생성되었습니다.!\n";
//	}
//	~Report() {
//		cout <<
//			"객체가 삭제되었습니다!\n";
//	}
//	void comment() const { cout << str << endl; }
//};
//
//int main()
//{
//	{
//		auto_ptr<Report> ps(new Report("auto_ptr"));
//		ps->comment();
//	}
//	{
//		shared_ptr<Report> ps(new Report("shared_ptr"));
//		ps->comment();
//	}
//	{
//		unique_ptr<Report> ps(new Report("unique_ptr"));
//		ps->comment();
//	}
//}
//
//
//struct Review
//{
//	string title;
//	int rating;
//};
//
//bool FillReview(Review & rr);
//void ShowReview(const Review & rr);
//
//int main()
//{
//	vector<Review> books;
//	Review temp;
//	while (FillReview(temp))
//		books.push_back(temp);
//	int num = books.size();
//	if (num > 0)
//	{
//		cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다.\n"
//			<< "등급\t제목\n";
//		for (int i = 0; i < num; i++)
//			ShowReview(books[i]);
//		cout << "한 번 더 출력한다.\n"
//			<< "등급\t제목\n";
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//		vector<Review> oldlist(books);
//		if (num > 3)
//		{
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "삭제한 후:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
//			cout << "삽입한 후:\n";
//			for (pr = books.begin(); pr != books.end(); pr++)
//				ShowReview(*pr);
//		}
//		books.swap(oldlist);
//		cout << "oldlist와 books를 교환한 후:\n";
//		for (pr = books.begin(); pr != books.end(); pr++)
//			ShowReview(*pr);
//
//	}
//	else 
//		cout << "입력 x" << endl;
//
//	return 0;
//}
//
//bool FillReview(Review & rr)
//{
//	cout << "책 제목을 입력하십시오(끝내려면 quit를 입력) :";
//	getline(cin, rr.title);
//	if (rr.title == "quit")
//		return false;
//	cout << "책 등급(0-10)을 입력하십시오: ";
//	cin >> rr.rating;
//	if (!cin)
//		return false;
//	while (getchar() != '\n')
//		continue;
//	return true;
//}
//
//void ShowReview(const Review & rr)
//{
//	cout << rr.rating << "\t" << rr.title << endl;
//}
//
//int main()
//{
//	int casts[10] = { 6, 7, 2 ,9, 4, 11, 8, 7, 10, 5 };
//	vector<int> dice(10);
//
//	copy(casts, casts + 10, dice.begin());
//	cout << "주사위를 던져라!\n";
//
//	ostream_iterator<int, char> out_iter(cout, " ");
//
//	copy(casts, casts + 10, out_iter);
//	cout << endl;
//	cout << "역방향 이터레이터의 암시적 사용: \n";
//	copy(dice.rbegin(), dice.rend(), out_iter);
//	cout << endl;
//	cout << "역방향 이터레이터의 명시적 사용: \n";
//
//	vector<int>::reverse_iterator ri;
//	for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
//		cout << *ri << ' ';
//	cout << endl;
//
//	return 0;
//}
//
//void outint(int n) { cout << n << " "; }
//
//int main()
//{
//	list<int> one(5, 2);
//	int stuff[5] = { 1, 2, 4, 8,6 };
//	list<int> two;
//	two.insert(two.begin(), stuff, stuff + 5);
//	int more[6] = { 6, 4,2,4,6,5 };
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//
//	cout << "리스트 one: ";
//	for_each(one.begin(), one.end(), outint);
//	cout << endl << "리스트 two: ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "리스트 three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "리스트 three에서 2들을 삭제: ";
//	three.remove(2);
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "접목 후의 리스트: ";
//	three.splice(three.begin(), one);
//	for_each(three.begin(), three.end(), outint);
//	cout << "리스트 one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "단일화 후의 리스트: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();
//
//	cout << endl << "정렬과 단일화 후의 리스트: ";
//	for_each(three.begin(), three.end(), outint);
//
//	two.sort();
//	three.merge(two);
//	cout << endl << "정렬된 리스트 two를 리스트 three에 합병: ";
//	for_each(three.begin(), three.end(), outint);
//	return 0;
//}

typedef int KeyType;
typedef std::pair<const KeyType, string> Pair;
typedef std::multimap<KeyType, string> MapCode;

int main()
{
	MapCode codes;

	codes.insert(Pair(415, "샌프란시스코"));
	codes.insert(Pair(510, "오클랜드"));
	codes.insert(Pair(718, "브루클린"));
	codes.insert(Pair(718, "스태튼 섬"));
	codes.insert(Pair(415, "샌라파엘"));
	codes.insert(Pair(510, "버클리"));

	cout << "지역코드가 415인 도시수: "
		<< codes.count(415) << endl;
	cout << "지역 코드가 718인 도시수"
		<< codes.count(718) << endl;
	cout << "지역 코드가 510인 도시수"
		<< codes.count(510) << endl;
	cout << "지역 코드    도시\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it)
		cout << "    " << (*it).first << "    "
		<< (*it).second << endl;

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	cout << "지역코드가 718인 도시들:\n";
	for (it = range.first; it != range.second; ++it)
		cout << (*it).second << endl;



}
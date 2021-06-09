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
#include "Tv.h"
#include "Queuetp.h"

using namespace std;
//
//int main()
//{
//	Tv s42;
//	cout << "42\" TV의 초기 설정값: \n";
//	s42.setting();
//	s42.onoff();
//	s42.chanup();
//	cout << "\n42\" TV의 변경된 설정값: \n";
//	s42.setting();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n 리모콘 사용 후 42\" TV의 설정값: \n";
//	s42.setting();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" TV의 변경된 설정값: \n";
//	s58.setting();
//
//
//	grey.setting();
//	s58.setting_remote(grey);
//	grey.setting();
//
//
//
//	return 0;
//}


//int main()
//{
//	QueueTP<string> cs(5);
//	string temp;
//
//	while (!cs.isfull())
//	{
//		cout << "이름을 입력하십시오. 도착하신 순서대로 "
//			"사은품을 드립니다.\n"
//			"이름: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "큐가 가득 찼으므로, 지금부터 사음품을 나누어 드리겠습니다.\n";
//
//	while (!cs.isempty())
//	{
//		cs.dequeue(temp);
//		cout << temp << " 님! 감사합니다. 안녕히 가십시오/\n";
//	}
//
//	return 0;
//}
//
//double hmean(double a, double b);
//
//int main()
//{
//	double x, y, z;
//
//	cout << " 두 수를 입력하십시오: ";
//
//	while (cin >> x >> y)
//	{
//		try {
//			z = hmean(x, y);
//		}
//		catch (const char * s)
//		{
//			cout << s << endl;
//			cout << "두 수를 새로 입력하십시오: ";
//			continue;
//		}
//		cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
//		cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
//	}
//	cout << "프로그램을 종료합니다.\n";
//
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw "잘못된 hmean() 매개변수: a = -b는 허용되지 않습니다.";
//	return 2.0 * a * b / (a + b);
//}

//
//class bad_hmean
//{
//private:
//	double v1;
//	double v2;
//public:
//	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
//	void mesg();
//};
//
//inline void bad_hmean::mesg()
//{
//	cout << "hmean(" << v1 << ", " << v2 << ") : "
//		<< "잘못된 매개변수: a = -b\n";
//}
//
//class bad_gmean
//{
//public:
//	double v1;
//	double v2;
//	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
//	const char * mesg();
//};
//
//inline const char * bad_gmean::mesg()
//{
//	return "gmean() 매개변수들은 >= 0 이어야 합니다. \n";
//}
//
//double hmean(double a, double b) throw(bad_hmean);
//double gmean(double a, double b) throw(bad_gmean);
//
//int main()
//{
//	double x, y, z;
//
//	cout << " 두 수를 입력하십시오: ";
//
//	while (cin >> x >> y)
//	{
//		try {
//			z = hmean(x, y);
//			cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
//			cout << x << ", " << y << "의 기화평균은 " << gmean(x,y) << "입니다.\n";
//			cout << "다른 두 수를 입력하십시오(끝내려면 q): ";
//		}
//		catch (bad_hmean & bg)
//		{
//			bg.mesg();
//			cout << "두 수를 새로 입력하십시오: ";
//			continue;
//		}
//		catch (bad_gmean & hg)
//		{
//			hg.mesg();
//			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//			cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n ";
//			break;
//		}
//	}
//	cout << "프로그램을 종료합니다.\n";
//
//}
//
//
//double hmean(double a, double b) throw(bad_hmean)
//{
//	if (a == -b)
//		throw bad_hmean(a, b);
//	return 2.0 * a * b / (a + b);
//}
//double gmean(double a, double b) throw(bad_gmean)
//{
//	if (a < 0 || b < 0)
//		throw bad_gmean(a, b);
//	return sqrt(a * b);
//}

class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) : hold(h) {}
	virtual void Speak() const { cout << "나는 Grand 클래스이다.!\n"; }
	virtual int Value() const { return hold; }
};

class Superb : public Grand
{
public:
	Superb(int h = 0) : Grand(h) {}
	void Speak() const { cout << " 나는 Superb 클래스이다!!\n"; }
	virtual void Say() const
	{
		cout << "내가 가지고 있는 Superb 값은" << Value() << "이다.\n";
	}
};

class Magnificant : public Superb
{
private:
	char ch;
public:
	Magnificant(int h = 0, char c = 'A') : Superb(h), ch(c) {}
	void Speak() const { cout << " 나는 Magnificant 클래스이다!!\n"; }
	void Say() const { cout << "나가 가지고 있는 문자는 " << ch << "이고, 정수는 " << Value() << "이다\n"; }
};

Grand * GetOne();

int main()
{
	srand(unsigned int(time(0)));
	Grand * pg;
	Superb * ps;
	for (int i = 0; i < 5; i++)
	{
		pg = GetOne();
		pg->Speak();
		if (ps = dynamic_cast<Superb *>(pg))
			ps->Say();
	}
	return 0;

}

Grand * GetOne()
{
	Grand * p = nullptr;
	switch (rand() %3)
	{
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificant(rand() % 100, 'A' + rand() % 26);
		break;
	}
	return p;
}
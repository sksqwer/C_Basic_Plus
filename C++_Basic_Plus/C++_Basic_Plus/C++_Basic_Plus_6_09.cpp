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
//	cout << "42\" TV�� �ʱ� ������: \n";
//	s42.setting();
//	s42.onoff();
//	s42.chanup();
//	cout << "\n42\" TV�� ����� ������: \n";
//	s42.setting();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n ������ ��� �� 42\" TV�� ������: \n";
//	s42.setting();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" TV�� ����� ������: \n";
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
//		cout << "�̸��� �Է��Ͻʽÿ�. �����Ͻ� ������� "
//			"����ǰ�� �帳�ϴ�.\n"
//			"�̸�: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "ť�� ���� á���Ƿ�, ���ݺ��� ����ǰ�� ������ �帮�ڽ��ϴ�.\n";
//
//	while (!cs.isempty())
//	{
//		cs.dequeue(temp);
//		cout << temp << " ��! �����մϴ�. �ȳ��� ���ʽÿ�/\n";
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
//	cout << " �� ���� �Է��Ͻʽÿ�: ";
//
//	while (cin >> x >> y)
//	{
//		try {
//			z = hmean(x, y);
//		}
//		catch (const char * s)
//		{
//			cout << s << endl;
//			cout << "�� ���� ���� �Է��Ͻʽÿ�: ";
//			continue;
//		}
//		cout << x << ", " << y << "�� ��ȭ����� " << z << "�Դϴ�.\n";
//		cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
//	}
//	cout << "���α׷��� �����մϴ�.\n";
//
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw "�߸��� hmean() �Ű�����: a = -b�� ������ �ʽ��ϴ�.";
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
//		<< "�߸��� �Ű�����: a = -b\n";
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
//	return "gmean() �Ű��������� >= 0 �̾�� �մϴ�. \n";
//}
//
//double hmean(double a, double b) throw(bad_hmean);
//double gmean(double a, double b) throw(bad_gmean);
//
//int main()
//{
//	double x, y, z;
//
//	cout << " �� ���� �Է��Ͻʽÿ�: ";
//
//	while (cin >> x >> y)
//	{
//		try {
//			z = hmean(x, y);
//			cout << x << ", " << y << "�� ��ȭ����� " << z << "�Դϴ�.\n";
//			cout << x << ", " << y << "�� ��ȭ����� " << gmean(x,y) << "�Դϴ�.\n";
//			cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(�������� q): ";
//		}
//		catch (bad_hmean & bg)
//		{
//			bg.mesg();
//			cout << "�� ���� ���� �Է��Ͻʽÿ�: ";
//			continue;
//		}
//		catch (bad_gmean & hg)
//		{
//			hg.mesg();
//			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//			cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n ";
//			break;
//		}
//	}
//	cout << "���α׷��� �����մϴ�.\n";
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
	virtual void Speak() const { cout << "���� Grand Ŭ�����̴�.!\n"; }
	virtual int Value() const { return hold; }
};

class Superb : public Grand
{
public:
	Superb(int h = 0) : Grand(h) {}
	void Speak() const { cout << " ���� Superb Ŭ�����̴�!!\n"; }
	virtual void Say() const
	{
		cout << "���� ������ �ִ� Superb ����" << Value() << "�̴�.\n";
	}
};

class Magnificant : public Superb
{
private:
	char ch;
public:
	Magnificant(int h = 0, char c = 'A') : Superb(h), ch(c) {}
	void Speak() const { cout << " ���� Magnificant Ŭ�����̴�!!\n"; }
	void Say() const { cout << "���� ������ �ִ� ���ڴ� " << ch << "�̰�, ������ " << Value() << "�̴�\n"; }
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
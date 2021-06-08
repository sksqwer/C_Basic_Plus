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
//
//int main()
//{
//	int l, n;
//	int res = 0, temp;
//	vector<int> v;
//	cin >> l >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//	sort(v.begin(), v.end());
//	res = v.front();
//	if (res < l - v.back())
//		res = l - v.back();
//	for (int i = 0; i < n - 1; i++)
//	{
//		if((v[i + 1] - v[i]) % 2 == 1)
//			temp = (v[i + 1] - v[i]) / 2 + 1;
//		else
//			temp = (v[i + 1] - v[i]) / 2;
//		if (res < temp)
//			res = temp;
//	}
//	
//	cout << res << endl;
//
//	return 0;
//}


//
//int main()
//{
//	Stack<std::string> st;
//	char ch;
//	std::string po;
//
//	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
//		<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
//
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << "\a";
//			continue;
//		}
//
//		switch (ch)
//		{
//		case 'A':
//		case 'a':
//			cout << "�߰��� �ֹ����� ��ȣ�� �Է��Ͻʽÿ�: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "������ ���� �� �ֽ��ϴ�.\n";
//			else
//				st.push(po);
//			break;
//		case 'P':
//		case 'p':
//			if (st.isempty())
//				cout << "������ ��� �ֽ��ϴ�.\n";
//			else
//			{
//				st.pop(po);
//				cout << "#" << po << " �ֹ����� ó���߽��ϴ�\n";
//
//				break;
//			}
//		}
//		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
//			<< "�����Ϸ��� Q�� �Է��Ͻʽÿ�.\n";
//	}
//
//	cout << "���α׷��� �����մϴ�\n";
//
//
//	return 0;
//}
//
//const int Num = 10;
//int main()
//{
//	srand(time(0));
//	cout << "������ ũ�⸦ �Է��Ͻʽÿ�: ";
//	int stacksize;
//	cin >> stacksize;
//	Stack<const char *> st(stacksize);
//
//	const char * in[Num] = {
//		"1: ���ȣ", "2: �ָ���",
//		"3: �̸���", "4, ������",
//		"5: �̼���", "6, �ɼ���",
//		"7: �ڹ���", "8, ȫ�浿",
//		"9: �����", "10, �Ͼ߽�"
//	};
//
//	const char * out[Num];
//
//	int processed = 0;
//	int nextin = 0;
//	while (processed < Num)
//	{
//		if (st.isempty())
//			st.push(in[nextin++]);
//		else if (st.isfull())
//			st.pop(out[processed++]);
//		else if (rand() % 2 && nextin < Num)
//			st.push(in[nextin++]);
//		else
//			st.pop(out[processed++]);
//	}
//	for (int i = 0; i < Num; i++)
//		cout << out[i] << endl;
//
//	cout << "���α׷��� �����մϴ�.\n";
//
//	return 0;
//
//}

template <class T>
class queueTp
{
private:
	enum {SIZE = 10};
	T* ptr;
	int cur = 0;
	int back = 0;
	int size;
	int cur_size = 0;
public:
	queueTp()
	{
		cur = 0;
		back = 0;
		cur_size = 0;
		size = SIZE;
		ptr = new T[size];
	}
	queueTp(int n)
	{
		cur = 0;
		back = 0;
		cur_size = 0;
		size = n;
		ptr = new T[size];
	}
	~queueTp()
	{
		delete[] ptr;
	}
	bool isempty()
	{
		if (cur_size == 0)
			return true;
		else 
			return false;
	}
	bool isfull()
	{
		if (cur_size == size)
			return true;
		else
			return false;
	}
	bool pop()
	{
		if (cur_size == 0)
			return false;
		else
		{
			cur = (cur + 1) % size;
			cur_size--;
			return true;
		}
	}
	bool push(const T t)
	{
		if (cur_size == size)
			return false;
		else
		{
			ptr[back] = t;
			back = (back + 1) % size;
			cur_size++;
			return true;
		}
	}
	T front() const
	{
		return ptr[cur];
	}
};


int main()
{

	int ct, n;
	cin >> n;
	queueTp<Worker *> q(n);

	for (ct = 0; ct < n; ct++)
	{
		char choice;
		cout << "������ �Է��Ͻʽÿ�: \n"
			<< "w: ������		s: ����		"
			<< "t: ���� �� ������		q: ����\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "w, s, t, q �߿��� �ϳ��� �����Ͻʽÿ�: ";
			cin >> choice;
		}
		Worker *w;
		if (choice == 'q')
			break;
		else if (choice == 'w')
			w = new Waiter;
		else if (choice == 's')
			w = new Singer;
		else 
			w = new SingingWaiter;

		w->Set();
		q.push(w);
		cin.get();
	}

	cout << "\n��� ��Ȳ�� ������ �����ϴ�:\n";
	Worker *w;
	while (!q.isempty())
	{
		cout << endl;
		w = q.front();
		w->Show();
		delete w;
		q.pop();
	}

	cout << "���α׷��� �����մϴ�.\n";


	return 0;
}
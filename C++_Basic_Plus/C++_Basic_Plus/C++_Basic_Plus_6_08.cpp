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
//	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
//		<< "종료하려면 Q를 입력하십시오.\n";
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
//			cout << "추가할 주문서의 번호를 입력하십시오: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "스택이 가득 차 있습니다.\n";
//			else
//				st.push(po);
//			break;
//		case 'P':
//		case 'p':
//			if (st.isempty())
//				cout << "스택이 비어 있습니다.\n";
//			else
//			{
//				st.pop(po);
//				cout << "#" << po << " 주문서를 처리했습니다\n";
//
//				break;
//			}
//		}
//		cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
//			<< "종료하려면 Q를 입력하십시오.\n";
//	}
//
//	cout << "프로그램을 종료합니다\n";
//
//
//	return 0;
//}
//
//const int Num = 10;
//int main()
//{
//	srand(time(0));
//	cout << "스택의 크기를 입력하십시오: ";
//	int stacksize;
//	cin >> stacksize;
//	Stack<const char *> st(stacksize);
//
//	const char * in[Num] = {
//		"1: 노미호", "2: 주리혜",
//		"3: 이몽룡", "4, 성춘향",
//		"5: 이수일", "6, 심순애",
//		"7: 박문수", "8, 홍길동",
//		"9: 김두한", "10, 하야시"
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
//	cout << "프로그램을 종료합니다.\n";
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
		cout << "직종을 입력하십시오: \n"
			<< "w: 웨이터		s: 가수		"
			<< "t: 가수 겸 웨이터		q: 종료\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "w, s, t, q 중에서 하나를 선택하십시오: ";
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

	cout << "\n사원 현황은 다음과 같습니다:\n";
	Worker *w;
	while (!q.isempty())
	{
		cout << endl;
		w = q.front();
		w->Show();
		delete w;
		q.pop();
	}

	cout << "프로그램을 종료합니다.\n";


	return 0;
}
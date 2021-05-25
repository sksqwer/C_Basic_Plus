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

using namespace std;
//
//#ifndef ___IntStack
//#define ___IntStack
//
//typedef struct {
//	int max;
//	int ptr;
//	int *stk;
//}IntStack;
//
//int Initialize(IntStack *s, int max)
//{
//	if (max < 1)
//		return -1;
//	s->max = max;
//	s->stk = new int[max + 1];
//	s->ptr = 0;
//	s->stk[0] = 0;
//
//	return 0;
//}
//
//int Push(IntStack *s, int x)
//{
//	if (s->ptr >= (s->max - 1))
//		return -1;
//	s->stk[++(s->ptr)] = x;
//	return 0;
//}
//
//int Pop(IntStack *s, int *x)
//{
//	if (s->ptr < 1)
//		return -1;
//	*x = s->stk[(s->ptr)--];
//	return 0;
//}
//
//int Peek(const IntStack *s, int *x)
//{
//	if (s->ptr < 1)
//		return -1;
//	*x = s->stk[s->ptr];
//	return 0;
//}
//
//void Clear(IntStack *s)
//{
//	s->ptr = 0;
//}
//
//int Capacity(const IntStack *s)
//{
//	return s->max;
//}
//
//int Size(const IntStack *s)
//{
//	return s->ptr;
//}
//
//int IsEmpty(const IntStack *s)
//{
//	if (s->ptr == 0)
//		return true;
//	else
//		return false;
//}
//
//int Isfull(const IntStack *s)
//{
//	if (s->ptr == (s->max - 1))
//		return true;
//	else
//		return false;
//}
//
//int Search(const IntStack *s, int x)
//{
//	for (int i = 1; i <= s->ptr; i++)
//	{
//		if (x == s->stk[i])
//			return true;
//	}
//	return false;
//}
//
//void Print(const IntStack *s)
//{
//	for (int i = 1; i <= s->ptr; i++)
//	{
//		cout << s->stk[i] << " ";
//	}
//}
//
//void Terminate(IntStack *s)
//{
//	if(s->stk != NULL)
//		delete[] s->stk;
//	s->max = 0;
//	s->ptr = 0;
//}
//
//#endif
//
//
//int main()
//{
//
//	// : source code
//
//	IntStack s;
//	if (Initialize(&s, 64) == -1)
//	{
//		cout << "스택 생성에 실패하였습니다.\n";
//		return 1;
//	}
//
//	while (1)
//	{
//		int menu, x;
//		cout << "현재 데이터 수 : " << Size(&s) << " / " << Capacity(&s) << endl;
//		cout << "(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료 : ";
//		cin >> menu;
//
//		if (menu == 0)
//		{
//			Terminate(&s);
//			break;
//		}
//		switch (menu)
//		{
//		case 1:
//			cout << "데이터: ";
//			cin >> x;
//			if (Push(&s, x) == -1)
//				cout << "\a오류: 푸시에 실패하였습니다.\n";
//			break;
//		case 2:
//			if (Pop(&s, &x) == -1)
//				cout << "\a오류: 팝에 실패하였습니다.\n";
//			else
//				cout << "팝 데이터는 " << x << "입니다.\n";
//			break;
//		case 3:
//			if(Peek(&s, &x) == -1)
//				cout << "\a오류: 피크에 실패하였습니다.\n";
//			else
//				cout << "피크 데이터는 " << x << "입니다.\n";
//			break;
//		case 4:
//			Print(&s);
//			break;
//		}
//
//		cout << endl;
//	}
//
//
//	return 0;
//
//
//}
//

template<typename T>
class IntQueue
{
private:
	int max = 0;
	int num = 0;
	int front = 0;
	int rear = 0;
	T *que = NULL;

public:
	IntQueue()
		: max{}
		, num{}
		, front{}
		, rear{}
		, que{}
	{}

	~IntQueue()
	{
		delete[] que;
	}
	bool Initialize(int max)
	{
		if (this->max > 0 || max < 1)
			return false;

		this->max = max;
		que = new int[max];
		return true;
	}

	bool Enque(T x)
	{
		if (num == max)
			return false;

		num++;
		que[rear] = x;
		rear = ++rear % max;

		return true;
	}

	bool Deque(T * const x)
	{
		if (num == 0)
			return false;

		num--;
		*x = que[front];
		front = ++front % max;
		return true;
	}

	bool const Peek(T *x)
	{
		if (num == 0)
			return false;

		*x = que[num];
		return true;

	}
	
	void Clear()
	{
		num = 0;
		front = 0;
		rear = 0;
	}

	int const Capacity()
	{
		return max;
	}

	int const Size()
	{
		return num;
	}

	bool const IsEmpty()
	{
		if (num == 0)
			return true;
		else
			return false;
	}

	bool const IsFull()
	{
		if (num == max)
			return true;
		else
			return false;
	}

	bool const search(T x)
	{
		int itr = front;
		while (itr != rear)
		{
			if (que[itr] == x)
				return true;

			itr = (itr++) % max;
		}
		return false;
	}

	void const print()
	{
		int itr = front;
		while (itr != rear)
		{
			cout << que[itr] << " ";

			itr = (itr++) % max;
		}
		cout << endl;

	}
};

int main()
{
	IntQueue<int> q;

	if (q.Initialize(2) == -1)
	{
		cout << "큐의 생성에 실패하였습니다.\n";
		return -1;
	}

	while (1)
	{
		int m, x;

		cout << "현재 데이터 수: " << q.Size() << " / " << q.Capacity() << endl;
		cout << "(1)인큐 (2)디큐 (3)피크 (4)출력 (0)종료 : ";
		cin >> m;

		if (m == 0) break;
		
		switch (m)
		{
		case 1:
			cout << "데이터 : ";
			cin >> x;
			if (q.Enque(x) == false)
				cout << "오류 : 인큐 실패!" << endl;
			break;
		case 2:
			if (q.Deque(&x) == false)
				cout << "오류 : 디큐 실패!" << endl;
			else
				cout << "디큐한 데이터는 " << x << "입니다.\n";
			break;
		case 3:
			if (q.Peek(&x) == false)
				cout << "오류 : 피크 실패!" << endl;
			else
				cout << "피크한 데이터는 " << x << "입니다.\n";
			break;
		case 4:
			q.print();
			break;

		}
		cout << endl;

	}
		


	return 0;
}
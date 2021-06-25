#include <iostream>
#include <string>
#include <ctime>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "Tree.h"

using namespace std;

template<typename T>
void menu(Tree<T> t);

int main()
{
	Tree<int> t;
	menu(t);



	return 0;
}

template<typename T>
void menu(Tree<T> t)
{
	int n;
	int v;
	T d;
	while (1)
	{
		cout << "(1) ���� (2) ���� (3) �˻� (4) ��� (0) ����: ";
		cin >> n;

		switch (n)
		{
		case 1:
		{
			cout << "�����ϴ� �����͸� �Է��ϼ���.\n";
			cout << "��ȣ: ";
			cin >> v;
			cout << "�̸�: ";
			cin >> d;
			t.insert(node<T>(v, d));
		}
			break;
		case 2:
		{
			cout << "�����ϴ� �����͸� �Է��ϼ���.\n";
			cout << "��ȣ: ";
			cin >> v;
			t.Delete(node<T>(v, 0));
		}
			break;
		case 3:
		{
			cout << "�˻��ϴ� �����͸� �Է��ϼ���.\n";
		cout << "��ȣ: ";
		cin >> v;
		cout << "�̸�: ";
		cin >> d;
		t.Search(t.Root, d);

		}
			break;
		case 4:
		{
			cout << "[��� ��� ���]\n";
			t.print(t.Root);
		}
			break;
		case 5:
			return;
			break;
		}

	}
}
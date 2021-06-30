#include <iostream>
#include <string>
#include <ctime>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "HashTable.h"

using namespace std;

void menu()
{
	int n, size;
	cout << "�ؽ����̺��� ����� �Է��ϼ���: ";
	cin >> size;
	static Hash t(size);

	while (1)
	{
		cout << "(1) �߰� (2) ���� (3) �˻� (4) ��� ���� (5) ���� (0) ���� :";
		cin >> n;
		_data temp;

		switch (n)
		{
		case 1:
		{
			cout << "�߰��� �����͸� �Է��ϼ���.\n";
			cout << "��ȣ: ";
			cin >> temp.no;
			cout << "�̸�: ";
			cin >> temp.name;
			t.Add(&temp);
		}
		break;
		case 2:
		{
			cout << "������ �����͸� �Է��ϼ���.\n";
			cout << "��ȣ: ";
			cin >> temp.no;
			t.Remove(temp.no);

		}
		break;
		case 3:
		{
			cout << "�˻��� �����͸� �Է��ϼ���.\n";
			cout << "��ȣ: ";
			cin >> temp.no;
			t.Search(temp.no);
		}
		break;
		case 4:
		{
			cout << "reset ����\n";
			t.Clear();

		}
		break;
		case 5:
		{
			t.Dump();
		}
		break;
		case 0:
		{
			t.Clear();
			t.Terminate();
			return;
		}
		break;
		}
	}
}

int main()
{
	menu();

	return 0;
}
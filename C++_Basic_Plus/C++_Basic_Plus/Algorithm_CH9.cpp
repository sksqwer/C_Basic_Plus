#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "List.h"

using namespace std;

/*
����
	�Է� ������ ��� ���� ��ȣ�������
	���ĵ� ����Ʈ�� �����ϴ� ���α׷��� �ۼ��϶�.
	1. ����Ʈ �ʱ�ȭ
	2. ��� �߰�
		2.1 ���� �տ� �߰�
		2.2 ���� �ڿ� �߰�
		2.3 ��� ���̿� �߰�
	3. ��� ����
		3.1 ���� �� ��� ����
		3.2 �� �� ��� ����
		3.3 ��� ���� ����
	4. �˻�
		��ȣ�� �Է� �޾Ƽ� �ش� ������ �̸� ���
	5. ��� 
		����Ʈ ��ü ������ ���

	ex) 
		�޴� ����
			1. �л� �߰�
			2. �л� ���� 
			3. ��ü ���
	
		1 -> ��ȣ : 3
			�̸� : XX
		1 -> ��ȣ : 2
			�̸� : YY
	*/

void menu(List& l)
{
	cout << "�޴� ����\n";
	cout << "\t 1. �л� �߰�\n";
	cout << "\t 2. �л� ����\n";
	cout << "\t 3. ��ü ���\n";
	cout << "\t 4. ����\n";
	int n;
	cin >> n;
	int num;
	string name;

	switch (n)
	{
	case 1:
		cout << "��ȣ: ";
		cin >> num;
		cout << "�̸�: ";
		cin >> name;
		l.push_num(num, name);
		break;
	case 2:
		cout << "������ ��ȣ: ";
		cin >> num;
		l.remove_num(num);
		break;
	case 3:
		l.print();
		break;
	case 4:
		exit(0);
		break;
	}
}

int main()
{
	List classmate;

	while (1)
	{
		menu(classmate);
	}

	return 0;

}
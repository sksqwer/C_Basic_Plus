#include "Worker0.h"
#include <iostream>

using namespace std;

//Worker mathod
void Worker::Data() const
{
	cout << "��� �̸�: " << fullname << endl;
	cout << "��� ��ȣ: " << id << endl;
}

void Worker::Get()
{
	cin.get();
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

Worker::~Worker() {}

void Waiter::Data() const
{
	cout << "������ ���: " << panache << endl;
}

void Waiter::Get()
{
	cout << "������ ����� �Է��Ͻʽÿ�: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

//Waiter Mathod
void Waiter::Set()
{
	cout << "������ �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "����: ������\n";
	Worker::Data();
	Data();
}

//Singer Mathod

const char * Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };
void Singer::Data() const
{
	cout << "��Ҹ� ����: " << pv[voice] << endl;
}
void Singer::Get()
{
	cout << "������ ��Ҹ� ���� ��ȣ�� �Է��Ͻʽÿ�:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 == 0)
		cout << endl;
	while (cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "0���� ũ�ų� ���� " << Vtypes << "���� ���� ���� �Է��Ͻÿ�." << endl;

	while (cin.get() != '\n')
		continue;
}
void Singer::Set()
{
	cout << "������ �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
	
}

void Singer::Show() const
{
	cout << "����: ����\n";
	Worker::Data();
	Data();
}

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Singer::Get();
	Waiter::Get();

}

void SingingWaiter::Set()
{
	cout << "���� �� �������� �̸��� �Է��Ͻʽÿ�: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "����: ���� �� ������\n";
	Worker::Data();
	Data();
}

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
//
//
//int main()
//{
//
//	// : source code
//	double x1, x2, y1, y2, r1, r2;
//	double len;
//	cout << "ù ���� �� x y r: ";
//	cin >> x1 >> y1 >> r1;
//	cout << "�� ���� �� x y r: ";
//	cin >> x2 >> y2 >> r2;
//
//	len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//
//	if (r1 >= len + r2)
//		cout << "�� ��° ���� ù ��° ���� ���ο� �ִ�." << endl;
//	else if ((r1 + r2) >= len)
//		cout << "�� ��° ���� ù ���� ���� ��ģ��." << endl;
//	else
//		cout << "�� ���� ��ġ�� �ʴ´�." << endl;
//
//
//
//
//
//
//	return 0;
//
//
//}
//
//int main()
//{
//
//	// : source code
//
//	double x1, x2, y1, y2, w1, w2, h1, h2;
//
//
//
//	cout << "ù ���� ���簢�� x y w h: ";
//	cin >> x1 >> y1 >> w1 >> h1;
//	cout << "�� ���� ���簢�� x y w h: ";
//	cin >> x2 >> y2 >> w2 >> h2;
//
//	if ((x1 - (w1 - w2) <= x2 && x1 + (w1 - w2) >= x2) && (y1 - (h1 - h2) <= y2 && y1 + (h1 - h2) >= y2))
//	{
//		cout << "�� ���� �簢���� ù��° �簢�� ���ο� �ִ�." << endl;
//	}
//	else if ((x1 - (w1 + w2) <= x2 && x1 + (w1 + w2) >= x2) && (y1 - (h1 + h2) <= y2 && y1 + (h1 + h2) >= y2))
//	{
//		cout << "�� ��° �簢���� ù��° �簢���� ��ģ��. \n";
//	}
//	else
//		cout << "�� �簢���� ��ġ�� �ʴ´�.\n";
//
//
//
//	return 0;
//
//
//}

//
//template<typename T>
//T max5(T arr[])
//{
//	T max = arr[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	return max;
//}
//
//
//int main()
//{
//
//	// : source code
//	int Irr[5];
//	double Drr[5];
//
//	cout << "���� 5�� �Է�: ";
//	cin >> Irr[0] >> Irr[1] >> Irr[2] >> Irr[3] >> Irr[4];
//	cout << "�Ǽ� 5�� �Է�: ";
//	cin >> Drr[0] >> Drr[1] >> Drr[2] >> Drr[3] >> Drr[4];
//
//
//	cout << "���� �� �ִ�: " << max5(Irr) << endl;
//	cout << "�Ǽ� �� �ִ�: " << max5(Drr) << endl;
//
//
//
//	return 0;
//
//
//}
//
//template <typename T>
//T Maxn(T* arr, int n)
//{
//	T max;
//	if (n > 0)
//		max = arr[0];
//	else
//		return NULL;
//
//	int itr = 0;
//
//	for (int i = 1; i < n; i++)
//	{
//		if ((max < arr[i]))
//		{
//			max = arr[i];
//			itr = i;
//		}
//	}
//
//	return arr[itr];
//
//
//}
//
//
//template <> const char* Maxn<const char*>(const char** arr, int n)
//
//{
//	int max = 0, itr = -1, len;
//
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		len = 0;
//		while (arr[i][j])
//		{
//			len++;
//			j++;
//		}
//		if (max < len)
//		{
//			itr = i;
//			max = len;
//		}
//	}
//
//	return arr[itr];
//
//}
//
//
//
//int main()
//{
//
//	// : source code
//
//	int Irr[6] = { 1, 2, 3, 4, 5 ,6 };
//	double Drr[4] = { 1.5, 2.5, 3.5, 4.5 };
//	const char* Crr[5] = { {"asd"}, {"asdasd"}, {"askdl"}, {"a"}, {"as"} };
//
//	cout << "����: " << (Maxn(Irr, 6)) << endl;
//	cout << "�Ǽ�: " << (Maxn(Drr, 4)) << endl;
//	cout << "���ڿ�: " << (Maxn(Crr, 5)) << endl;
//
//
//
//	return 0;
//
//
//}

//
//namespace pers
//{
//	struct Person
//	{
//		std::string fname;
//		std::string lname;
//	};
//
//	void getPerson(Person &rp)
//	{
//		cout << "�̸��� �Է��Ͻÿ�: ";
//		cin >> rp.fname;
//		cout << "���� �Է��Ͻÿ�: ";
//		cin >> rp.lname;
//	}
//	void showPerson(const Person &rp)
//	{
//		cout << rp.lname << ", " << rp.fname;
//	}
//
//
//}
//
//namespace debts
//{
//	using namespace pers;
//	struct Debt
//	{
//		Person name;
//		double amount;
//	};
//	void getDebt(Debt &rd)
//	{
//		getPerson(rd.name);
//		cout << "��ä�� �Է��Ͻʽÿ�: ";
//		cin >> rd.amount;
//	}
//	void showDebt(const Debt &rd)
//	{
//		pers::showPerson(rd.name);
//		cout << ": $" << rd.amount << endl;
//	}
//	double sumDebt(const Debt ar[], int n)
//	{
//		double total = 0;
//		for (int i = 0; i < n; i++)
//			total += ar[i].amount;
//		return total;
//	}
//}
//
//void other(void);
//void another(void);
//
//int main()
//{
//
//	// : source code
//
//	using debts::Debt;
//	using debts::showDebt;
//	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
//	showDebt(golf);
//	other();
//	another();
//
//
//	return 0;
//
//
//}
//
//
//void other(void)
//{
//	using namespace debts;
//	Person dg = { "Doodles", "Glister" };
//	showPerson(dg);
//	cout << endl;
//	Debt zippy[3];
//	int i;
//	for (i = 0; i < 3; i++)
//		getDebt(zippy[i]);
//	for (i = 0; i < 3; i++)
//		showDebt(zippy[i]);
//	cout << "��ä �Ѿ�: $" << sumDebt(zippy, 3) << endl;
//	return;
//
//}
//void another(void)
//{
//	using pers::Person;
//	Person collector = { "Milo", "Rightshift" };
//	pers::showPerson(collector);
//	cout << endl;
//}

/*
��3.
	������ �鸸 �� ������ ���� �ùķ��̼� �ϰ�
	�ո�� �޸��� ���� ����ϴ� ���α׷��� �ۼ��϶�..

	100��° �϶�.. �ո� 00% �޸� 00%
	1000��° �϶�.. �ո� 00% �޸� 00%
	.
	..
	...
	10000��° �϶�.. �ո� 00% �޸� 00%
	1000000��° �϶�.. �ո� 00% �޸� 00%


*/

//
//
//int main()
//{
//
//	// : source code
//	const int num = 1000000000;
//	int n;
//	int r = 100, front = 0, rear = 0;
//
//	for (int i = 0; i < num; i++)
//	{
//		n = rand();
//		if ((n % 2) == 0)
//			front++;
//		else
//			rear++;
//
//		if (i == r)
//		{
//			cout << r << "��° �ϋ�.. �ո� " << (100.0 * ((double)front / (double)(front + rear))) << "% �޸� " << (100.0 * ((double)rear / (double)(front + rear))) << endl;
//			r *= 10;
//		}
//	}
//
//
//
//	return 0;
//
//
//}
//

/*
��4
	������ ����� ������ ������ 
		���		������		Ȯ��			������		Ȯ��
		------------------------------------------------------
		5star	A-item		1%			
		------------------------------------------------------
		4star	B-item		3%			C-item		3%
		------------------------------------------------------
		3star	D-item		5%			E-item		5%
				F-item		5%			
		------------------------------------------------------
		2star	G-item		10%			H-item		10%
				i-item		10%			J-item		10%
		------------------------------------------------------
		1star	K-item		38%
		
		�� �������� ������ Ȯ���� �°� ��Ȯ�� ���� �� �ֵ���
		���α׷��� �ۼ��Ͻÿ�.
		ex> Ƚ�� ? 100		A: 1		, B: 3 , .......
			Ƚ�� ? 1000		A: 10		, B: 30 , .......


*/
int Item[11] = { 1,3,3,5,5,5,10,10,10,10,38 };
int R_Item[11] = { 0 };
bool comple[11] = { false };

bool check(int i);

int main()
{

	// : source code
	ifstream File;
	
	int num;
	File.open("DB.txt", fstream::binary);

	if (File.is_open())
	{
		int i = 0;
		int n;
		bool m;
		while (i < 11)
		{
			File.read((char*)&n, sizeof(int));
			R_Item[i] = n; 
			File.read((char*)&comple[i], sizeof(bool));
			i++;
		}	
		
	}

	File.close();
	int random;

	cout << "Ƚ�� ? ";
	cin >> num;

	srand(time(0));

	for(int i = 0; i < num; i++)
	{
		bool ch = true;
		

		random = rand() % 100;

		if (random == 99)// 1
		{
			if (check(0))
			{
				i--;
				continue;
			}
			else
				cout << "AAAAAAAA" << i << endl;
		}
		else if (random < 99 && random >= 96) // 3
		{
			if (check(1))
			{
				i--;
				continue;
			}
		}
		else if (random < 96 && random >= 93) // 3
		{
			if (check(2))
			{
				i--;
				continue;
			}
		}
		else if (random < 93 && random >= 88) // 5
		{
			if (check(3))
			{
				i--;
				continue;
			}
		}
		else if (random < 88 && random >= 83) // 5
		{
			if (check(4))
			{
				i--;
				continue;
			}
		}
		else if (random < 83 && random >= 78)// 5
		{
			if (check(5))
			{
				i--;
				continue;
			}
		}
		else if (random < 78 && random >= 68)// 10
		{
			if (check(6))
			{
				i--;
				continue;
			}
		}
		else if (random < 68 && random >= 58)// 10
		{
			if (check(7))
			{
				i--;
				continue;
			}
		}
		else if (random < 58 && random >= 48)// 10
		{
			if (check(8))
			{
				i--;
				continue;
			}
		}
		else if (random < 48 && random >= 38)// 10
		{
			if (check(9))
			{
				i--;
				continue;
			}
		}
		else if (random < 38)
		{
			if (check(10))
			{
				i--;
				continue;
			}
		}

		for (int j = 0; j < 11; j++)
		{
			if (!comple[j])
				ch = false;

		}

		if (ch)
		{
			for (int j = 0; j < 11; j++)
			{
				comple[j] = false;
			}
		}


	}


	cout << "\tA: " << R_Item[0];
	cout << "\tB:  " << R_Item[1];
	cout << "\tC:  " << R_Item[2] << endl;
	cout << "\tD:  " << R_Item[3];
	cout << "\tE:  " << R_Item[4];
	cout << "\tF:  " << R_Item[5] << endl;
	cout << "\tG:  " << R_Item[6];
	cout << "\tH:  " << R_Item[7];
	cout << "\tI:  " << R_Item[8] << endl;
	cout << "\tJ:  " << R_Item[9];
	cout << "\tK:  " << R_Item[10] << endl;


	ofstream O_File;

	O_File.open("DB.txt", fstream::binary);
	for (int i = 0; i < 11; i++)
	{
		O_File.write((char*)&R_Item[i], sizeof(int));
		O_File.write((char*)&comple[i], sizeof(bool));
	}





	return 0;


}

bool check(int i)
{
	if (!comple[i])
	{
		R_Item[i]++;
		if ((R_Item[i] % Item[i]) == 0)
			comple[i] = true;
		return false;
	}
	else
		return true;
}
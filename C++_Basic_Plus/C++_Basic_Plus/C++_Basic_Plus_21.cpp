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
//	cout << "첫 번쨰 원 x y r: ";
//	cin >> x1 >> y1 >> r1;
//	cout << "두 번쟤 원 x y r: ";
//	cin >> x2 >> y2 >> r2;
//
//	len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//
//	if (r1 >= len + r2)
//		cout << "두 번째 원은 첫 번째 원의 내부에 있다." << endl;
//	else if ((r1 + r2) >= len)
//		cout << "두 번째 원은 첫 번쨰 원과 겹친다." << endl;
//	else
//		cout << "두 원은 겹치지 않는다." << endl;
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
//	cout << "첫 번쨰 직사각형 x y w h: ";
//	cin >> x1 >> y1 >> w1 >> h1;
//	cout << "두 번쟤 직사각형 x y w h: ";
//	cin >> x2 >> y2 >> w2 >> h2;
//
//	if ((x1 - (w1 - w2) <= x2 && x1 + (w1 - w2) >= x2) && (y1 - (h1 - h2) <= y2 && y1 + (h1 - h2) >= y2))
//	{
//		cout << "두 번쨰 사각형은 첫번째 사각형 내부에 있다." << endl;
//	}
//	else if ((x1 - (w1 + w2) <= x2 && x1 + (w1 + w2) >= x2) && (y1 - (h1 + h2) <= y2 && y1 + (h1 + h2) >= y2))
//	{
//		cout << "두 번째 사각형은 첫번째 사각형과 겹친다. \n";
//	}
//	else
//		cout << "두 사각형은 겹치지 않는다.\n";
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
//	cout << "정수 5개 입력: ";
//	cin >> Irr[0] >> Irr[1] >> Irr[2] >> Irr[3] >> Irr[4];
//	cout << "실수 5개 입력: ";
//	cin >> Drr[0] >> Drr[1] >> Drr[2] >> Drr[3] >> Drr[4];
//
//
//	cout << "정수 중 최댓값: " << max5(Irr) << endl;
//	cout << "실수 중 최댓값: " << max5(Drr) << endl;
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
//	cout << "정수: " << (Maxn(Irr, 6)) << endl;
//	cout << "실수: " << (Maxn(Drr, 4)) << endl;
//	cout << "문자열: " << (Maxn(Crr, 5)) << endl;
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
//		cout << "이름을 입력하시오: ";
//		cin >> rp.fname;
//		cout << "성을 입력하시오: ";
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
//		cout << "부채를 입력하십시오: ";
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
//	cout << "부채 총액: $" << sumDebt(zippy, 3) << endl;
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
문3.
	동전을 백만 번 던지는 것을 시뮬레이션 하고
	앞면과 뒷면의 수를 출력하는 프로그램을 작성하라..

	100번째 일때.. 앞면 00% 뒷면 00%
	1000번째 일때.. 앞면 00% 뒷면 00%
	.
	..
	...
	10000번째 일때.. 앞면 00% 뒷면 00%
	1000000번째 일때.. 앞면 00% 뒷면 00%


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
//			cout << r << "번째 일떄.. 앞면 " << (100.0 * ((double)front / (double)(front + rear))) << "% 뒷면 " << (100.0 * ((double)rear / (double)(front + rear))) << endl;
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
문4
	아이템 목록이 다음과 같을때 
		등급		아이템		확률			아이템		확률
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
		
		각 아이템이 지정된 확률에 맞게 정확히 나올 수 있도록
		프로그램을 작성하시오.
		ex> 횟수 ? 100		A: 1		, B: 3 , .......
			횟수 ? 1000		A: 10		, B: 30 , .......


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

	cout << "횟수 ? ";
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
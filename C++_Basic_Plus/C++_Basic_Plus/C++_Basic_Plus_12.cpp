#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;
//
//
//int main()
//{
//
//	// : source code
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//
//	float tub = 10.0 / 3.0;
//	double mint = 10.0 / 3.0;
//	const float million = 1.0e6;
//
//	cout << "tub = " << tub;
//	cout << ", a million tubs = " << million * tub;
//	cout << ", \n ten million tubs = ";
//	cout << 10 * million * tub << endl;
//
//	cout << "mint = " << mint << " and a million mints = ";
//	cout << million * mint << endl;
//
//
//	return 0;
//
//
//}



//int main()
//{
//
//	// : source code
//
//	//1
//	int Cm_Height;
//	double M_Height;
//
//	cout << "Ű�� �Է��Ͻÿ�(cm) : ___\b\b\b";
//	cin >> Cm_Height;
//
//	M_Height = Cm_Height / 100.0;
//
//	cout << "����� Ű�� " << M_Height << "m�Դϴ�." << endl;
//
//
//	return 0;
//
//
//}
//
//
////3
//
//int main()
//{
//
//	// : source code
//
//	int hour, min, sec;
//	double lati;
//
//	cout << "������ ��, ��, �� ������ �Է��Ͻÿ� : " << endl;
//	cout << "����, ������ �Է��Ͻÿ� : ";
//	cin >> hour;
//	cout << "����, �а��� �Է��Ͻÿ� : ";
//	cin >> min;
//	cout << "����, �ʰ��� �Է��Ͻÿ� : ";
//	cin >> sec;
//
//	lati = hour + (min / 60.0) + (sec / 3600.0);
//
//	cout << hour << "��,  " << min << "��,   " << sec << "�� = ";
//	cout << lati << "��" << endl;
//
//	return 0;
//
//
//}


//
////5
//int main()
//{
//
//	// : source code
//
//	long long World_Popu, Ameri_Popu;
//	
//	cout << "���� �α����� �Է��Ͻÿ�: ";
//	cin >> World_Popu;
//	cout << "�̱��� �α����� �Է��Ͻÿ�: ";
//	cin >> Ameri_Popu;
//
//	cout << "���� �α������� �̱��� �����ϴ� ������ ";
//	cout << (double)Ameri_Popu / World_Popu * 100;
//	cout << "%�̴�." << endl;
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
//	double Dis_Km, Fuel_L, Dis_mile, Fuel_Ga;
//	double Eu_Effi, Am_Effi;
//
//
//	cout << "(����(L) / �Ÿ�(Km))������ �ֹ��� �Һ��� �Է��Ͻÿ�: ";
//	cin >> Eu_Effi;
//
//	Fuel_L = Eu_Effi;
//	Dis_Km = 100;
//
//
//	Dis_mile = Dis_Km * 0.6214;
//	Fuel_Ga = Fuel_L / 3.875;
//
//	Am_Effi = Dis_mile / Fuel_Ga;
//
//	cout << "(�Ÿ�(Mile) / (����(Gallon))���� �ֹ��� �Һ�: ";
//	cout << Am_Effi << endl;
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
//	int yams[3];
//	yams[0] = 7; 
//	yams[1] = 8; 
//	yams[2] = 6;
//
//	int yamcosts[3] = { 200, 300, 50 };
//
//	cout << "���� �հ� = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//	cout << yams[1] << "���� ��� �ִ� ������ ";
//	cout << "���� " << yamcosts[1] << "�����Դϴ�.\n";
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1]
//		+ yams[2] * yamcosts[2];
//	cout << "�� ������ �� ������ " << total << "���Դϴ�.\n";
//	cout << "\nyams �迭�� ũ��� " << sizeof yams;
//	cout << "����Ʈ�Դϴ�. \n";
//	cout << "�����ϳ��� ũ���" << sizeof yams[0];
//	cout << "����Ʈ�Դϴ�. \n";
//
//
//
//	return 0;
//
//
//}

//
//
//int main()
//{
//
//	// : source code
//
//	const int Arsize = 20;
//	char name[Arsize];
//	char dessert[Arsize];
//	cout << "�̸��� �Է��Ͻýÿ�: ";
//	cin.getline(name, Arsize);
//	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�: ";
//	cin.clear();
//	cin.getline(dessert, Arsize);
//	cout << "���ִ� " << dessert;
//	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�." << name << " ��!" << endl;
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
//	char charr1[20];
//	char charr2[20] = "Jaguar";
//	string str1;
//	string str2 = "Panther";
//
//	cout << "����̰��� ���� �� ���� �Է��Ͻÿ�: ";
//	cin >> charr1;
//	cout << "����̰��� �� �ٸ� ���� �� ���� �Է��Ͻÿ�: ";
//	cin >> str1;
//	cout << "�Ʒ� �������� ��� ����̰��Դϴ�: \n";
//	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	cout << charr2 << "���� �� ��° ����: ";
//	cout << charr2[2] << endl;
//	cout << str2 << "���� �� ��° ����: ";
//	cout << str2[2] << endl;
//
//	return 0;
//
//
//}


//
//
//int main()
//{
//
//	// : source code
//
//
//	string s1 = "penguin";
//	string s2, s3;
//
//	cout << "string ��ü�� string ��ü�� ������ �� �ִ�: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "string ��ü�� c ��Ÿ�� ���ڿ��� ������ �� �ִ�.";
//	cout << "s2 = \"buzzrad\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "string ��ü���� ������ �� �ִ�: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "string ��ü���� �߰��� �� �ִ�.\n";
//	s1 += s2;
//	cout << "s1 += s2 --> s1 = " << s1 << endl;
//	s2 += "for a day";
//	cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;
//
//	return 0;
//
//
//}

//
//int med3(int, int, int);
//
//int main()
//{
//
//	// : source code
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << med3(a, b, c);
//
//	return 0;
//
//
//}
//int med3(int a, int b, int c)
//{
//	if (a >= b)
//	{
//		if (b >= c)
//			return b;
//		else if (a >= c)
//			return c;
//		else
//			return a;
//	}
//	else if (a >= c)
//		return a;
//	else if (b >= c)
//		return c;
//	else
//		return b;
//}
//
//int Gauss(int);
//int sumof(int, int);
//
//int main()
//{
//
//	// : source code
//	int a, b;
//	cin >> a >> b;
//	cout << sumof(a, b) << endl;
//
//
//	return 0;
//
//
//}
//
//int Gauss(int n)
//{
//	if (n % 2 == 0)
//		return (1 + n) * (n / 2);
//	else
//		return n * ((n + 1) / 2);
//
//
//
//}
////
////int sumof(int a, int b)
////{
////	if (a < 0 || b < 0)
////	{
////		cout << "����� �Է��Ͻÿ�!\n";
////		return 0;
////	}
////
////	if (a > b)
////	{
////		if ((a - b) % 2 == 1)
////			return (a + b) * (a - b + 1) / 2;
////		else
////			return (a + b) * (a - b) / 2 + (a + b) / 2;
////	}
////	else
////	{
////		if ((b - a) % 2 == 1)
////			return (a + b) * (b - a + 1) / 2;
////		else
////			return (a + b) * (b - a) / 2 + (a + b) / 2;
////	}
////}
//
//int sumof(int a, int b)
//{
//	if (a < 0 || b < 0)
//	{
//		cout << "����� �Է��Ͻÿ�!\n";
//		return 0;
//	}
//	if(a > b)
//		return (int)((a + b) * (a - b + 1) / 2.0);
//	else
//		return (int)((a + b) * (b - a + 1) / 2.0);
//	
//}

void nrpira(int n);

int main()
{

	// : source code

	int n;
	cin >> n;
	nrpira(n);


	return 0;


}


void nrpira(int n)
{
	int col = 1 + 2 * (n - 1);
	int sp = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < sp; j++)
			cout << " ";
		for (int j = 0; j < col; j++)
		{
			cout << (i + 1);
		}
		cout << endl;


		sp++;
		col -= 2;
	}
}
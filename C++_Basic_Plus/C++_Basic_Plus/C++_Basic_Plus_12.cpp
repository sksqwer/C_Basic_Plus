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
//	cout << "키를 입력하시오(cm) : ___\b\b\b";
//	cin >> Cm_Height;
//
//	M_Height = Cm_Height / 100.0;
//
//	cout << "당신의 키는 " << M_Height << "m입니다." << endl;
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
//	cout << "위도를 도, 분, 초 단위로 입력하시오 : " << endl;
//	cout << "먼저, 도각을 입력하시오 : ";
//	cin >> hour;
//	cout << "먼저, 분각을 입력하시오 : ";
//	cin >> min;
//	cout << "먼저, 초각을 입력하시오 : ";
//	cin >> sec;
//
//	lati = hour + (min / 60.0) + (sec / 3600.0);
//
//	cout << hour << "도,  " << min << "분,   " << sec << "초 = ";
//	cout << lati << "도" << endl;
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
//	cout << "세계 인구수를 입력하시오: ";
//	cin >> World_Popu;
//	cout << "미국의 인구수를 입력하시오: ";
//	cin >> Ameri_Popu;
//
//	cout << "세계 인구수에서 미국이 차지하는 비중은 ";
//	cout << (double)Ameri_Popu / World_Popu * 100;
//	cout << "%이다." << endl;
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
//	cout << "(연료(L) / 거리(Km))단위로 휘발유 소비량을 입력하시오: ";
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
//	cout << "(거리(Mile) / (연료(Gallon))단위 휘발유 소비량: ";
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
//	cout << "고구마 합계 = ";
//	cout << yams[0] + yams[1] + yams[2] << endl;
//	cout << yams[1] << "개가 들어 있는 포장은 ";
//	cout << "개당 " << yamcosts[1] << "원씩입니다.\n";
//	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1]
//		+ yams[2] * yamcosts[2];
//	cout << "세 포장의 총 가격은 " << total << "원입니다.\n";
//	cout << "\nyams 배열의 크기는 " << sizeof yams;
//	cout << "바이트입니다. \n";
//	cout << "원소하나의 크기는" << sizeof yams[0];
//	cout << "바이트입니다. \n";
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
//	cout << "이름을 입력하시시오: ";
//	cin.getline(name, Arsize);
//	cout << "좋아하는 디저트를 입력하십시오: ";
//	cin.clear();
//	cin.getline(dessert, Arsize);
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다." << name << " 님!" << endl;
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
//	cout << "고양이과의 동물 한 종을 입력하시오: ";
//	cin >> charr1;
//	cout << "고양이과의 또 다른 동물 한 종을 입력하시오: ";
//	cin >> str1;
//	cout << "아래 동물들은 모두 고양이과입니다: \n";
//	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	cout << charr2 << "에서 세 번째 글자: ";
//	cout << charr2[2] << endl;
//	cout << str2 << "에서 세 번째 글자: ";
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
//	cout << "string 객체를 string 객체에 대입할 수 있다: s2 = s1\n";
//	s2 = s1;
//	cout << "s1: " << s1 << ", s2: " << s2 << endl;
//	cout << "string 객체에 c 스타일 문자열을 대입할 수 있다.";
//	cout << "s2 = \"buzzrad\"\n";
//	s2 = "buzzard";
//	cout << "s2: " << s2 << endl;
//	cout << "string 개체들을 결합할 수 있다: s3 = s1 + s2\n";
//	s3 = s1 + s2;
//	cout << "s3: " << s3 << endl;
//	cout << "string 객체들을 추가할 수 있다.\n";
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
////		cout << "양수만 입력하시오!\n";
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
//		cout << "양수만 입력하시오!\n";
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
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <cmath>
#include <fstream>

using namespace std;

/*
문1.
	비행기의 가속도 a와 이륙속도 v가 주어졌을댸,
	다음 공식을 사용하여 비행기가 이륙하기 위한
	최소 활주 길이를 계산하는 프로그램
		길이 = v^2 / 2a
	사용자에게 m/s 단위로 v와 m/s^2 단위로 a를 입력하도록
	알려주고, 최소 활주 길이를 출력하라
		ex >	Speed and Accelation: 60 3.5
				Minimum renway length : 514.286m
*/
//
//double Airplane_Length(double v, double a);
//
//int main()
//{
//	double Speed, Accel;
//	
//	cout << "Speed and Accelation: ";
//	cin>> Speed >> Accel;
//
//	cout << "Minmum runway length: ";
//	cout << Airplane_Length(Speed, Accel);
//
//
//
//
//	return 0;
//}
//
//
//double Airplane_Length(double v, double a)
//{
//	return (v * v) / (2 * a);
//}

/*
문2.
	두 점(x1, y1) 과 (x2, y2)를 입력받아서
	이 두점 사이의 거리를 출력하는 프로그램 작성.
	거리를 계산하는 공식은 root((x2 - x1)^2 + (y2 - y1)^2)


*/
//
//int main()
//{
//	double x1, x2, y1, y2;
//
//	cout << "x1 y1  x2 y2  좌표를 차례대로 입력하시오: ";
//	cin >> x1 >> y1 >> x2 >> y2;
//
//	double res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//	cout << fixed;
//	cout.precision(4);
//	cout << res << endl;
//
//
//	return 0;
//}

//
//
//int main()
//{
//
//	// : source code
//
//
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "자동차 메이커와 차종을 입력하시오: ";
//	cin.getline(automobile, 50);
//	cout << "연식을 입력하시오: ";
//	cin >> year;
//	cout << "구입 가격을 입력하시오: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "메이커와 차종: " << automobile << endl;
//	cout << "연식: " << year << endl;
//	cout << "구입가격 $" << a_price << endl;
//	cout << "현재가격 $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "메이커와 차종: " << automobile << endl;
//	outFile << "연식: " << year << endl;
//	outFile << "구입가격 $" << a_price << endl;
//	outFile << "현재가격 $" << d_price << endl;
//
//	outFile.close();
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
//	const int SIZE = 60;
//
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "데이터 파일의 이름을 입력하시오: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << filename << " 파일을 열 수 없습니다." << endl;
//		cout << "프로그램을 종료합니다.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	double value;
//	double sum = 0.0;
//	int count  = 0;
//
//	inFile >> value;
//	while(inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//
//	}
//
//	if (inFile.eof())
//		cout << "파일 끝에 도달했습니다.\n";
//	else if (inFile.fail())
//		cout << "데이터 불일치로 입력이 종료되었습니다.\n";
//	else
//		cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";
//
//	if (count == 0)
//		cout << "데이터가 없습니다.\n";
//	else
//	{
//		cout << "읽은 항목의 개수: " << count << endl;
//		cout << "합계: " << sum << endl;
//		cout << "평균: " << sum / count << endl;
//	}
//
//	inFile.close();
//
//	return 0;
//
//
//}
//
//const int _SIZE = 30;
//
//struct bop
//{
//	char fullname[_SIZE];
//	char title[_SIZE];
//	char bopname[_SIZE];
//	int preference;
//
//};
//
//int main()
//{
//
//	// : source code
//
//	char c;
//
//	bop barr[5] = { {"Wimp Macho", "Wimp", "Wi", 0},
//					{"Raki Rhodes", "Raki", "Ra", 1},
//					{"Celina Laiter", "Celina", "Ce", 2},
//					{"Hoppy Hipman", "Hoppy", "Ho", 1},
//					{"Pat Hand", "Pat", "Pa", 0} };
//
//	cout << "Benevolent Order of Programmers\n";
//	cout << "a. 실명으로 열람 \t\tb. 직함으로 열람\n";
//	cout << "c. Bop 아이디로 열람 \t\td. 회원이 지정한 것으로 열람\n";
//	cout << "q. 종료\n";
//	
//	while (1)
//	{
//
//		cout << "원하는 것을 선택하십시오: ";
//		cin >> c;
//
//		switch (c)
//		{
//		case 'a':
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				cout << barr[i].fullname << endl;
//			}
//			break;
//		}
//		case 'b':
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				cout << barr[i].title << endl;
//			}
//			break;
//		}
//		case 'c':
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				cout << barr[i].bopname << endl;
//			}
//			break;
//		}
//		case 'd':
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				switch (barr[i].preference)
//				{
//				case 0:
//				{
//					cout << barr[i].fullname << endl;
//					break;
//				}
//				case 1:
//				{
//					cout << barr[i].title << endl;
//					break;
//				}
//				case 2:
//				{
//					cout << barr[i].bopname << endl;
//					break;
//				}
//				default:
//					break;
//				}
//			}
//			
//			break;
//		}
//		case 'q':
//		{
//			cout << "프로그램을 종료합니다. \n";
//			return 0;
//		}
//
//
//
//		default:
//			break;
//		}
//	}
//
//
//
//
//	return 0;
//
//
//}
//
//const int Max = 5;
//
//int fill_array(double ar[], int limit);
//void show_array(const double ar[], int n);
//void revalue(double r, double ar[], int n);
//
//int main()
//{
//
//	// : source code
//	double properties[Max];
//
//	int size = fill_array(properties, Max);
//	show_array(properties, size);
//	if (size > 0)
//	{
//		cout << "재평가율을 입력하시오: ";
//		double factor;
//
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "잘못 입력했습니다, 수치를 입력하세요: ";
//		}
//		revalue(factor, properties, size);
//		show_array(properties, size);
//
//
//	}
//
//	cout << "프로그램을 종료합니다. \n";
//	cin.get();
//	cin.get();
//
//
//
//
//	return 0;
//
//
//}
//
//
//
//int fill_array(double ar[], int limit)
//{
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++)
//	{
//		cout << (i + 1) << "번 부동산의 가격: $";
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		ar[i] = temp;
//	}
//
//	return i;
//}
//void show_array(const double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << "번 부동산: $";
//		cout << ar[i] << endl;
//	}
//}
//void revalue(double r, double ar[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		ar[i] *= r;
//	}
//}

//
//unsigned int c_in_str(const char* str, char ch);
//
//int main()
//{
//
//	// : source code
//
//	char mmm[15] = "minimum";
//	
//	const char *wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "에는 m이 " << ms << "개 들어 있습니다. \n";
//	cout << wail << "에는 m이 " << us << "개 들어 있습니다. \n";
//
//	return 0;
//
//
//}
//
//
//
//unsigned int c_in_str(const char* str, char ch)
//{
//	int count = 0;
//	while (*str)
//	{
//		if (*str == ch)
//			count++;
//		str++;
//	}
//
//	return count;
//}
//
//
//void countdown(int n);
//
//int main()
//{
//
//	// : source code
//	countdown(4);
//	
//
//
//
//	return 0;
//
//
//}
//
//
//void countdown(int n)
//{
//	Sleep(1000);
//	cout << "카운트 다운 ... " << n << endl;
//	if (n > 0)
//		countdown(n - 1);
//	cout << n << " : Kaboom!\n";
//}

/*
문3.
	삼각형의 3개의 점 (x1, y1), (x2, y2), (x3, y2)를 입력하여
	면적을 구하는 프로그램
	s = (side1 + side2 + side3) / 2;
	면적 = root(s(s-side1)(s-side2)(s-side3)


	*/
//
//double Max(double a, double b, double c);
//double Min(double a, double b, double c);
//double width(double x1, double y1, double x2, double y2, double x3, double y3);
//
//
//int main()
//{
//	double x1, x2, x3, y1, y2, y3;
//
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//
//	cout << width(x1, y1, x2, y2, x3, y3) << endl;
//
//	return 0;
//}
//
//double Max(double a, double b, double c)
//{
//	double max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//
//	return max;
//}
//double Min(double a, double b, double c)
//{
//	double min = a;
//	
//	if (b < min)
//		min = b;
//	if (c < min)
//		min = c;
//
//	return min;
//}
//double width(double x1, double y1, double x2, double y2, double x3, double y3)
//{
//	double max_x, min_x, max_y, min_y;
//	double _width;
//	max_x = Max(x1, x2, x3);
//	min_x = Min(x1, x2, x3);
//	max_y = Max(y1, y2, y3);
//	min_y = Min(y1, y2, y3);
//
//	_width = (max_x - min_x) * (max_y - min_y) / 2.0;
//
//	return _width;
//}
//
//const int Len = 66;
//const int Divs = 6;
//void subdivide(char ar[], int low, int high, int level);
//
//
//
//int main()
//{
//
//	// : source code
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len - 2; i++)
//		ruler[i] = ' ';
//	ruler[Len - 1] = '0';
//		int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max];
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (i = 1; i < Divs; i++)
//	{
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)
//			ruler[j] = ' ';
//	}
//
//
//
//	return 0;
//
//
//}
//
//void subdivide(char ar[], int low, int high, int level)
//{
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}
//
//
//double gildong(int);
//double moonsoo(int);
//void estimate(int lines, double(*pf)(int l));
//
//int main()
//{
//
//	// : source code
//	int code;
//
//	cout << "필요한 코드의 행 수를 입력하십시오: ";
//	cin >> code;
//	cout << "홍길동의 시간 예상: \n";
//	estimate(code, gildong);
//	cout << "박문수의 시간 예상: \n";
//	estimate(code, moonsoo);
//
//
//
//	return 0;
//
//
//}
//
//double gildong(int lns)
//{
//	return 0.05 * lns;
//}
//
//double moonsoo(int lns)
//{
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines,  double(*pf)(int l))
//{
//	cout << lines << "행을 작성하는 데 ";
//	cout << (*pf)(lines) << "시간이 걸립니다.\n";
//}

//
//double add(double x, double y);
//double sub(double x, double y);
//void calculate(double x, double y, double(**pf)(double, double));
//
//int main()
//{
//	double(*pf[2])(double, double) = {add, sub };
//	int n;
//	double x = 5, y = 3;
//
//	calculate(x, y, pf);
//	
//
//
//	return 0;
//}
//
//
//double add(double x, double y)
//{
//	return x + y;
//}
//double sub(double x, double y)
//{
//	return x - y;
//}
//void calculate(double x, double y, double(**pf)(double, double))
//{
//	cout << pf[0](x, y) << endl;
//	cout << pf[1](x, y) << endl;
//}


//
//
//void is_Prime(int n);
//
//
//int main()
//{
//
//	// : source code
//
//	int n;
//	cin >> n;
//
//	is_Prime(n);
//
//
//
//	return 0;
//
//
//}
//
//void is_Prime(int n)
//{
//	if (n < 2)
//		return;
//
//
//	bool *arr = new bool[n+1];
//	memset(arr, true, n + 1 * sizeof(bool));
//
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (arr[i])
//		{
//			for (int j = i + i; j <= n; j += i)
//			{
//				arr[j] = false;
//			}
//		}
//	}
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (arr[i])
//			cout << i << endl;
//	}
//
//	delete [] arr;
//
//}

/*
문
	4로 나누어 떨어지는 해
	100의 배수는 아니어야 하고 
	그 중에서 400의 배수는 포함시켜야한다.
	bool isLeapYear(int 연도)
	int isLeapYear(int 연도)



*/
//
//
//bool isLeapYear(int);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	cout << isLeapYear(n) << endl;
//
//	return 0;
//}
//
//
//
//bool isLeapYear(int n)
//{
//	bool res = false;
//	if (n % 4 == 0)
//		if (n % 100 != 0)
//			res = true;
//		else if(n % 400 == 0)
//			res = true;
//
//	return res;
//}




int main()
{

	// : source code
	const int size = 7;

	int arr[size] = { 6, 4 ,3 ,2 ,1 ,9 ,8 };
	cout << "  | 0 1 2 3 4 5 6 " << endl;
	cout << "____________________" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "  | ";
		for (int j = 0; j < i; j++)
			cout << "  ";
		cout << "*" << endl;
		cout << i;
		cout << " | ";
		for (int j = 0; j < size; j++)
			cout << arr[j] << " ";
		cout << endl;

	}



	return 0;


}
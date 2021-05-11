#include <iostream>
#include <string>

using namespace std;
//
//void a()
//{
//	cout << "Three blind mice" << endl;
//}
//
//void b()
//{
//	cout << "See how they run" << endl;
//}
//
//void pr_age()
//{
//	int age;
//
//	cout << "Enter your age : ";
//	cin >> age;
//
//	cout << "당신의 나이를 월수로 나타낼 경우 : " << age * 12 << endl;
//}
//
//double Tem_F(int C)
//{
//	return 1.8 * C + 32;
//}
//
//
//int main()
//{
//
//	int Tem_C;
//
//	string name = "Kim";
//	string addr = "Korea";
//
//	cout << name << " " << addr << endl;
//
//
//	double mile = 1.60934;
//	double dis;
//	cout << "거리(Mile) : ";
//	cin >> dis;
//	cout << (dis * mile) << "KM" << endl;
//
//
//	a();
//	a();
//	b();
//	b();
//
//	pr_age();
//
//
//	cout << "온도 입력 : ";
//	cin >> Tem_C;
//
//	cout << Tem_F(Tem_C) << endl;
//
//	return 0;
//}
//

// 4값이 최댓값을 구하는 함수 max4를 작성하세요
// 순서도 작성


int Max(int , int , int , int );

int main()
{
	int a, b, c, d;
	// : source code

	cout << "값 4개를 입력하시오 : ";
	cin >> a >> b >> c >> d;

	cout << "Max : " << Max(a, b, c, d) << endl;


	return 0;


}

int Max(int a, int b, int c, int d)
{
	int max = a;
	if (b > max)
		max = b;

	if (c > max)
		max = c;

	if (d > max)
		max = d;

	return max;
}
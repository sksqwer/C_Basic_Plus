#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>

using namespace std;

//
//
//int main()
//{
//
//	// : source code
//
//	double *p3 = new double[3];
//
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3[1]은 " << p3[1] << "입니다.\n";
//	p3 += 1;
//	cout << "이제는 p3[0]이 " << p3[0] << "이고, ";
//	cout << "p3[1]이" << p3[1] << "입니다.\n";
//	p3 = p3 - 1;
//	delete[] p3;
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
//
//
//
//	// : source code
//
//	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
//	vector<double> a2(4);
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//
//	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
//	array<double, 4> a4;
//	a4 = a3;
//
//	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
////wrong
//	a1[-2] = 20.2;
//	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
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
//	string name;
//	string dessert;
//
//	cout << "이름을 입력하십시오: ";
//	getline(cin, name);
//	cout << "디저트를 입력하십시오: ";
//	getline(cin, dessert);
//	cout << "맛있는 " << dessert;
//	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
//
//
//	return 0;
//
//
//}

//
//struct CandyBar
//{
//	string Name;
//	double Weight;
//	int Kal;
//};
//
//int main()
//{
//
//	// : source code
//
//	CandyBar *snack = new CandyBar[3]{ {"Mocha Munch", 2.3, 350},  {"Choco Bar", 1.7, 400}, {"Mint Bar", 1.5, 100} };
//
//
//
//	cout << "첫번째 캔디바 이름: " << setw(11) << snack[0].Name << " 중량: " << snack[0].Weight << " 칼로리: " << snack[0].Kal << endl;
//	cout << "두번째 캔디바 이름: " << setw(11) << snack[1].Name << " 중량: " << snack[1].Weight << " 칼로리: " << snack[1].Kal << endl;
//	cout << "세번째 캔디바 이름: " << setw(11) << snack[2].Name << " 중량: " << snack[2].Weight << " 칼로리: " << snack[2].Kal << endl;
//
//	delete[] snack;
//
//
//
//
//
//	return 0;
//
//
//}

//struct Pizza
//{
//	string Name;
//	double Diameter;
//	double Weight;
//};
//
//
//int main()
//{
//
//	// : source code
//
//	Pizza stPizza;
//
//	cout << "피자의 이름을 입력하시오: ";
//	cin >> stPizza.Name;
//	cout << "피자의 지름을 입력하시오: ";
//	cin >> stPizza.Diameter;
//	cout << "피자의 중량을 입력하시오: ";
//	cin >> stPizza.Weight;
//
//
//	cout << "피자이름: " << stPizza.Name << endl;
//	cout << "피자지름: " << stPizza.Diameter << endl;
//	cout << "피자중량: " << stPizza.Weight << endl;
//	
//
//	Pizza *PPizza = new Pizza;
//	cout << "피자의 지름을 입력하시오: ";
//	cin >> PPizza->Diameter;
//	cout << "피자의 이름을 입력하시오: ";
//	cin >> PPizza->Name;
//	cout << "피자의 중량을 입력하시오: ";
//	cin >> PPizza->Weight;
//
//
//	cout << "피자이름: " << PPizza->Name << endl;
//	cout << "피자지름: " << PPizza->Diameter << endl;
//	cout << "피자중량: " << PPizza->Weight << endl;
//
//	return 0;
//
//
//}

/*
문. 
	문자열 을 앞에서 부터 읽으나 뒤에서부터 읽으나
	동일한 경우을 palindrome 이라고 한다.
	문자열을 입력받아 회문인지 판단하고 결과를 출력하는 프로그램을 작성하라.

*/

//
//bool Palindrome(string str)
//{
//	int size = str.length();
//
//	for (int i = 0; i < size / 2.0; i++)
//	{
//		if (str[i] != str[size - 1 - i])
//			return false;
//	}
//	return true;
//
//}
//
//
//int main()
//{
//
//	// : source code
//	string str;	
//	cin >> str;
//	if (Palindrome(str))
//		cout << "Palindrome!" << endl;
//	else
//		cout << "Not Palindrome!" << endl;
//
//	return 0;
//
//
//}

//struct Car
//{
//	string name;
//	int year;
//
//};
//
//int main()
//{
//
//	// : source code
//
//	//7
//	int n;
//	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
//	cin >> n;
//
//	Car *c = new Car[n];
//
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "자동차 #" << i+1 << " :\n";
//		cout << "제작업체: ";
//		cin >> c[i].name;
//		cout << "제작년도: ";
//		cin >> c[i].year;
//	}
//
//	cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << c[i].year << "년형 " << c[i].name << endl;
//	}
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
//	char str[100];
//	int n = 0;
//	while (1)
//	{
//		cin >> str;
//
//		if (strcmp(str, "done") == 0)
//		{
//			break;
//		}
//		else
//			n++;
//
//
//	}
//
//	cout << "총 " << n << " 단어가 입력되었습니다." << endl;
//	return 0;
//
//
//}

/*
문.
	10진수를 입력받고
	변환하고자 하는 진수를 입력받은후 해당 진수로 변환하여
	출력하는 프로그램을 작성하라. (2  ~ 36진수)
	ex)		10진수 입력 : 59
			출력 진수 : 8
			10진수 59는 8진수 37 입니다.

*/

//
//int main()
//{
//
//	// : source code
//
//	int n, m;
//	string str;
//	cout << "10진수 입력: ";
//	cin >> n;
//	cout << "출력 진수 : ";
//	cin >> m;
//	while(m < 2 || m > 36)
//	{
//		cout << "2 ~ 36 사이의 값을 입력하시오: ";
//		cin >> m;
//	}
//	while (n != 0)
//	{
//		if (n / m != 0)
//			str += ('0' + (n / m));
//		else
//		{
//			str += ('0' + (n % m));
//			break;
//
//		}
//		n %= m;
//
//	}
//
//	cout << str << endl;
//
//
//
//
//
//	return 0;
//
//
//}

/*
문
	위의 문제에서 10진수가 아닌 임의의 진수를 입력받아서 변환하는
	프로그램
	ex)		입력진수: 2
			값: 11
			출력진수: 10
			2진수 11은 10진수 3입니다.
*/


int main()
{

	// : source code

	int m,k, num = 0;
	string str, n;
	cout << "입력 진수: ";
	cin >> k;
	cout << "k진수 입력: ";
	cin >> n;
	cout << "출력 진수 : ";
	cin >> m;
	for (int i = 0; i < n.length(); i++)
	{
		num *= k;
		num += n[i] - '0';
	}





	while (m < 2 || m > 36)
	{
		cout << "2 ~ 36 사이의 값을 입력하시오: ";
		cin >> m;
	}
	while (num != 0)
	{
		if (num / m != 0)
			str += ('0' + (num / m));
		else
		{
			str += ('0' + (num % m));
			break;

		}
		num %= m;

	}

	cout << str << endl;





	return 0;


}

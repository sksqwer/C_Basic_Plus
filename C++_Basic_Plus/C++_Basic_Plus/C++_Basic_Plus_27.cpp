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
#include <stack>
#include <queue>

using namespace std;

/*
문1.
	임의의 한 단어를 생성하고 사용자가 한번에 한 문자만을 추측하도록해서
	단어를 맞추는 핵맨 게임을 작성하라.
	
	단어의 각 문자는 '*'으로 표시된다.
	사용자가 올바른 추측을 하였을 때 실제 문자가 화면에 표시된다.
	사용지기 단어 맞추기를 끝냈을 때는 실수한 횟수를 
	표기하고, 다른 단어로 계속할 것인지 묻도록 한다.

	ex>	생성된 단어 -> apple
		단어중 한글자를 입력하시오		***** -> a
									a**** ->
		단어중 한글자를 입력하시오		a**** -> e
									a***e
			총 xx번 실패, xx번 만에 정답!

*/
//
//bool comple(bool *, int);
//void print(bool *, const string);
//bool pcheck(bool *, const string, char);
//string make_newstring();
//
//int main()
//{
//	int total = 0, failure = 0, len;
//	string Problem = "vocabulary";
//	len = Problem.length();
//	bool *check = new bool[len];
//	memset(check, false, sizeof(bool) * len);
//	char input;
//
//	while (1)
//	{
//		total = 0, failure = 0;
//		while (!comple(check, len))
//		{
//			cout << "단어중 한 글자를 입력하시오. ";
//			print(check, Problem);
//			cout << " > ";
//			cin >> input;
//			if (!pcheck(check, Problem, input))
//				failure++;
//			total++;
//
//			cout << "                             ";
//			print(check, Problem);
//			cout << endl;
//
//		}
//
//		cout << "총 " << failure << "번 실패, " << total << "번 만에 정답!\n";
//
//		cout << "계속하시겠습니까?(q: 종료)\n";
//		cin >> input;
//		if (input == 'q')
//			break;
//
//		Problem = make_newstring();
//		delete[] check;
//		len = Problem.length();
//		check = new bool[len];
//		memset(check, false, sizeof(bool) * len);
//
//
//
//
//	}
//
//	
//
//
//	delete[] check;
//
//	return 0;
//}
//
//
//bool comple(bool *check, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (check[i] == false)
//			return false;
//	}
//	return true;
//
//}
//
//void print(bool *check, const string Problem)
//{
//	int len = Problem.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (check[i])
//			cout << Problem[i];
//		else
//			cout << "*";
//	}
//
//}
//
//
//bool pcheck(bool *check, const string Problem, char input)
//{
//	int len = Problem.length();
//	bool result = false;
//	for (int i = 0; i < len; i++)
//	{
//		if (Problem[i] == input)
//		{
//			result = true;
//			check[i] = true;
//		}
//	}
//
//	return result;
//}
//
//
//string make_newstring()
//{
//	srand((unsigned int)time(NULL));
//	int len = rand() % 10 + 3;
//	string str = "";
//
//	for (int i = 0; i < len; i++)
//	{
//		str += rand() % 26 + 'a';
//	}
//
//	return str;
//
//
//
//}

/*
문2
	N x N 크기의 행렬의 각 칸에 1 부터 N^2  까지의 숫자가 지그재그 방향으로 채워져 있다. 
	c1	c2	c3	c4	c5
r1	1	2	6	7	15
r2	3	5	8	14	16
r3	4	9	13	17	22
r4	10	12	18	21	23
r5	11	19	20	24	25
다음은 N = 5 인 경우의 예시이다. 

이때 r 행 c 열의 칸에 어떤 숫자가 적혀있는지 구하려고 한다. 
예를 들어 위 그림에서 r = 3 , c = 2 인경우 3행2열의 위치에는 9 가 들어 있다. 
지그재그 행렬의 크기 N , 행위위치 r , 열의 위치 c 가 매개변수로 주어질 때 , 
N x N 크기의 지그재그 형렬의 r행 , c열에 들어있는 숫자를 return 하도록 
Solution 함수를 완성하라. 
제한사항 :
1.	N은1이상 10,000,000 이하의 자연수
2.	r 과 c 는 각각 1 이상 N 이하의 자연수 
3.	정답은 2^31 -1 보다 커질수 있음에 주의 

N	r	c	Result
5	3	2	9
6	5	4	29







		c1	c2	c3	c4	c5
	r1	1	2	6	7	15
	r2	3	5	8	14	16
	r3	4	9	13	17	22
	r4	10	12	18	21	23
	r5	11	19	20	24	25
	

*/
//
//struct coord
//{
//	int row;
//	int col;
//	int n = 0;
//	long long info = 0;
//};
//
//coord move_coor(coord);
//long long get_vertex_info(coord);
//long long get_info(coord, coord , long long);
//
//int main()
//{
//	int n; 
//	coord res, vertex;
//
//	cin >> n;
//	res.n = n;
//	cin >> res.row >> res.col;
//
//	vertex = move_coor(res);
//
//	vertex.info = get_vertex_info(vertex);
//
//	res.info = get_info(vertex, res, vertex.info);
//
////	cout << vertex.row << " " <<vertex.col << endl;
////	cout << vertex.info << endl;
//
//	cout << res.info << endl;
//
//	int aaa;
//	for (int i = 1; i <= n; i++)
//	{
//		res.row = i;
//		for (int j = 1; j <= n; j++)
//		{
//			res.col = j;
//			vertex = move_coor(res);
//
//			vertex.info = get_vertex_info(vertex);
//
//			res.info = get_info(vertex, res, vertex.info);
//
//			cout.width(3);
//			cout << res.info;
//			cout << " ";
//
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}
//
//
//coord move_coor(coord c)
//{
//	coord temp = c;
//	while (1)
//	{
//		if (temp.row == 1 || temp.col == temp.n)
//			break;
//
//		temp.col++;
//		temp.row--;
//	}
//
//	/*if (temp.row - 1 < temp.n - temp.col)
//	{
//		temp.col += (temp.row - 1);
//		temp.row = 1;
//	}
//	else
//	{
//		temp.row -= (temp.n - temp.col);
//		temp.col = temp.n;
//	}*/
//
//	return temp;
//}
//
//
//long long get_vertex_info(coord c)
//{
//	long long res = 1;
//	int row = 1, col = 1;
//	int n = c.n, i = 4;
//	bool _isnodd = true;
//
//	if (n % 2 == 0)
//		_isnodd = false;
//	int temp = c.n - c.row + 1;
//	if (c.row == 1)
//	{
//		if (c.col % 2)
//			res = (c.col + 1) * (double)((double)c.col / 2.0);
//		else
//			res = c.col * (double)((double)(c.col - 1) / 2.0) + 1;
//	}
//	else
//	{
//		if (c.row % 2)
//			res = (n * n) - (((double)(temp) * (double)(temp - 1)) / (double)2);
//		else
//			res = (n * n) - (((double)(temp + 1) * (double)temp) / (double)2) + 1;
//	}
//
//	/*while (!(col == c.col))
//	{
//		if (col % 2 == 1)
//			res++;
//		else
//		{
//			res += i;
//			i += 4;
//		}
//		col++;
//	}
//	if (_isnodd)
//		i = (2 * n) - 4;
//	else
//		i = (2 * n) - 2;
//
//	while (!(row == c.row))
//	{
//		if (_isnodd)
//		{
//			if (row % 2 == 1)
//				res++;
//			else
//			{
//				res += i;
//				i -= 4;
//			}
//			row++;
//		}
//		else
//		{
//			if (row % 2 == 0)
//				res++;
//			else
//			{
//				res += i;
//				i -= 4;
//			}
//			row++;
//		}
//	}*/
//
//	return res;
//
//}
//
//
//long long get_info(coord c, coord re, long long r)
//{
////	long long res = r;
//	//bool _isnodd = true;
//
//	//if (c.col % 2 == 0)
//	//	_isnodd = false;
//
//	/*while (1)
//	{
//		if (c.row == re.row || c.col == re.col)
//			break;
//
//		c.col--;
//		c.row++;
//
//		if (_isnodd)
//			res--;
//		else
//			res++;
//
//	}*/
//	if (c.row == 1)
//	{
//		if (c.col % 2)
//			r -= (c.col - re.col);
//		else
//			r += (c.col - re.col);
//	}
//	else
//	{
//		if (c.n % 2)
//		{
//			if (c.row % 2)
//				r -= (c.col - re.col);
//			else
//				r += (c.col - re.col);
//		}
//		else
//		{
//			if (c.row % 2)
//				r -= (c.col - re.col);
//			else
//				r += (c.col - re.col);
//		}
//	}
//
//
//	return r;
//}

/*
문2.
	2.1
	다음 함수를 사용하여 int 값을 역으로 화면에 출력하는 재귀함수를 작성하라.
		void reverseDisplay(int value)
	ex) reverseDisplay(12345)
			54321 이 화면에 출력.
	사용자로부터 하나의 정수를 입력 받아 역으로 출력하는 프로그램 작성.

	2.2 
	문자열 값을 역으로 화면에 출력하는 재귀함수를 작성.
		void reverseDisplay(const string& s)
	ex> reverseDisplay("abcd")
			dcba 가 화면에 출력

*//*
void reverseDisplay(int value)
{
	if (value == 0)
		return;
	cout << value%10;
	value /= 10;

	reverseDisplay(value);

	return;
}
void reverseDisplay(const string & value)
{
	string *temp = new string;
	int len = value.length();
	if (len == 0)
		return;
	for (int i = 0; i < len - 1; i++)
	{
		*temp += value[i];
	}

	cout << value[len - 1];
	len--;

	reverseDisplay(*temp);
	
	delete temp;

	return;
}

int main()
{
	int integer;
	string str;
	cout << "숫자입력: ";
	cin >> integer;
	cout << "문자열 입력: ";
	cin >> str;

	reverseDisplay(integer);
	cout << endl;

	reverseDisplay(str);
	cout << endl;




	return 0;
}*/

/*
문3.
	문자열의 모든 순열을 출력하는 재귀 함수를 작성
	ex> abc

		abc
		acb
		bac
		bca
		cab
		cba
*/
//
//int factorial(int n);
//void displayPermutation(const string& s);
//void recursion(string * s, string ,int n);
//
//int main()
//{
//	string str;
//	cin >> str;
//
//	displayPermutation(str);
//
//	return 0;
//}
//
//
//void displayPermutation(const string& s)
//{
//	string temp, result = "";
//	int len = s.length();
//	string *presult = new string[factorial(len)];
//
//	recursion(presult, s, 0);
//
//	for (int i = 0; i < factorial(len); i++)
//		cout << presult[i] << endl;
//
//	delete[] presult;
//
//}
//
//
//int factorial(int n)
//{
//	if (n == 0)
//		return 1;
//	return factorial(n - 1) * n;
//}
//
//void recursion(string *s, string t, int n)
//{
//	int len = t.length();
//	if (len == 0)
//		return;
//	string temp = t;
//	for (int i = 0; i < len; i++)
//	{
//		int m = n;
//		for (int j = 0; j < factorial(len - 1); j++)
//		{
//
//			s[m] += t[i];
//			m++;
//		}
//		temp = t;
//		temp.erase(i, 1);
//		recursion(s, temp, n);
//		n += factorial(len - 1);
//	}
//}


class StringBad
{
	privat
};
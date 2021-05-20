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
��1
	��(x,y)�� �Է¹޾� �� ���� (X, Y)�� �߽����� �ϰ� 
	�������� R�� �����ο� �����ϴ�����
	�˻��ϴ� ���α׷� �ۼ�
		ex) �߽�(0,0)�������� 10�� ���̶�� �� ��
		��(4,5)�� �� ���ο� �ְ�, ��(9,9)�� �� �ܺο� ��ġ�ϰ� �ִ�.
			�߽� : 0, 0
			������ : 10
			����ġ :  4 5
			�� (4,5)�� �� ���ο� �ִ�.
*/
//
//bool _InCircle(int x, int y, int X, int Y, int R);
//
//int main()
//{
//
//	// : source code
//
//	double x, y, X, Y, R;
//
//	cout << "�߽�: ";
//	cin >> X >> Y;
//	cout << "������: ";
//	cin >> R;
//	cout << "�� ��ġ: ";
//	cin >> x >> y;
//
//	if (_InCircle(x, y, X, Y, R))
//		cout << "�� (" << x << ", " << y << ") �� �� ���ο� �ִ�." << endl;
//	else
//		cout << "�� (" << x << ", " << y << ") �� �� �ܺο� �ִ�." << endl;
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
//
//bool _InCircle(int x, int y, int X, int Y, int R)
//{
//	double len = sqrt((x - X) * (x - X) + (y - Y) * (y * Y));
//
//	if (len > R)
//		return false;
//	else
//		return true;
//	
//}



/*
��2.
	�� 1�� ����(x1, y1) �� (x2, y2),
	�� 2�� ���� (x3, y3) �� (x4, y4)
	�� �־����ٰ� ����.

	�� ���� �������� ���ϴ� ���α׷��� �ۼ�

	ũ���� ����
	(y1 - y2)x (x1 - x2)y = (y1 - y2)x1 - (x1 - x2)y1
	(y3 - y4)x (x3 - x4)y = (y3 - y4)x3 - (x3 - x4)y3
		�� 4���� �Է¹޾� �������� ����϶�.
		ex> �� 4�� �Է� : x1 y1 x2 y2 x3 y3 x4 y4
		2 2 5 -1.0 4.0 2.0 -1.0 -2.0
			�������� (2.88889, 1.11111) �̴�.

*/
//
//int main()
//{
//
//	// : source code
//
//	double x1, x2, x3, x4, y1, y2, y3, y4, X, Y;
//	double a, b, c, d, e, f;
//
//
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
//	a = y1 - y2;
//	b = -(x1 - x2);
//	c = y3 - y4;
//	d = -(x3 - x4);
//	e = a * x1 + b * y1;
//	f = c * x3 + d * y3;
//
//
//	if (a * d == b * c)
//	{
//		if (e == f)
//			cout << "�� ������ ��ġ�ϴ�." << endl;
//		else
//			cout << "�� ������ �����ϴ�." << endl;
//	}
//	else
//	{
//
//		Y = (e - ((a * f) / c)) / (b - (a * d) / c);
//		X = (e - b * Y) / a;
//
//		cout << "�������� ( " << X << ", " << Y << ") �̴�.";
//
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
//
//int main()
//{
//
//	// : source code
//
//	int rats = 101;
//	int &rodents1 = rats;
//	int rodents2 = rats;
//
//	cout << rodents1 << endl;
//	cout << rodents2 << endl;
//	cout << &rats << endl;
//	cout << &rodents1 << endl;
//	cout << &rodents2 << endl;
//
//
//	return 0;
//
//
//}
//
//void swapr(int &, int &);
//void swapp(int *, int *);
//void swapv(int, int);
//
//
//int main()
//{
//
//	// : source code
//	int wallet1 = 3000;
//	int wallet2 = 5000;
//
//
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ���� 2 = " << wallet2 << "��" << endl;
//
//
//	cout << "������ �̿��Ͽ� ������� ��ȯ: \n"; 
//	swapr(wallet1, wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ���� 2 = " << wallet2 << "��" << endl;
//
//
//	cout << "�����͸� �̿��Ͽ� ������� ��ȯ: \n";
//	swapp(&wallet1, &wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ���� 2 = " << wallet2 << "��" << endl;
//
//	cout << "������ �̿��Ͽ� ������� ��ȯ: \n";
//	swapv(wallet1, wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ���� 2 = " << wallet2 << "��" << endl;
//
//	return 0;
//
//
//}
//
//void swapr(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//void swapp(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//void swapv(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//struct free_throws
//{
//	string name;
//	int made;
//	int attempts;
//	float percent;
//};
//
//void display(const free_throws &ft);
//void set_pc(free_throws & ft);
//free_throws & accumulate(free_throws & target, const free_throws &source);
//
//
//int main()
//{
//
//	// : source code
//
//	free_throws one = { "Ifelsa Branch", 13, 14 };
//	free_throws two = { "Andor Knott", 10, 16 };
//	free_throws three = { "Minnie MAx", 7 , 9 };
//	free_throws four = { "Whilly Looper", 5, 9 };
//	free_throws five = { "Long Long", 6, 14 };
//	free_throws team = { "Throwsgoods", 0, 0 };
//
//	free_throws dup;
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//
//	display(accumulate(team, two));
//	accumulate(accumulate(team, three), four);
//	display(team);
//
//	dup = accumulate(team, five);
//	cout << "team ���: " << endl;
//	display(team);
//	cout << "���� ���� dup ���: " << endl;
//	display(dup);
//	set_pc(four);
//
//	accumulate(dup, five) = four;
//	cout << "���� ������ �ִ� ���� ���� dup ���" << endl;
//	display(dup);
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
//void display(const free_throws &ft)
//{
//	cout << "Name: " << ft.name << endl;
//	cout << "Made: " << ft.made << "\t";
//	cout << "Attemps: " << ft.attempts << "\t";
//	cout << "Percent: " << ft.percent << "\n";
//
//}
//void set_pc(free_throws & ft)
//{
//	if (ft.attempts != 0)
//		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
//	else
//		ft.percent = 0;
//}
//free_throws & accumulate(free_throws & target, const free_throws &source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}

//
//string version1(const string & s1, const string & s2);
//const string & version2(string & s1, const string & s2);
//const string & version3(string & s1, const string & s2);
//
//int main()
//{
//
//	// : source code
//
//	string input;
//	string copy;
//	string result;
//
//	cout << "���ڿ��� �Է��Ͻÿ�: ";
//	getline(cin, input);
//	copy = input;
//	cout << "�Է��� ���ڿ�: " << input << endl;
//	result = version1(input, "***");
//	cout << "�ٲ� ���ڿ�: " << result << endl;
//	cout << "���� ���ڿ�: " << input << endl;
//
//	result = version2(input, "###");
//	cout << "�ٲ� ���ڿ�: " << result << endl;
//	cout << "���� ���ڿ�: " << input << endl;;
//	result += "**";
//	cout << result << endl;
//
//	cout << "���� ���ڿ� �缳��" << endl;
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "�ٲ� ���ڿ�: " << result << endl;
//	cout << "���� ���ڿ�: " << input << endl;
//
//
//
//	return 0;
//
//
//}
//
//
//string version1(const string & s1, const string & s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//const string & version2(string & s1, const string & s2)
//{
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//const string & version3(string & s1, const string & s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const int Arsize = 80;
//char * left(const char * str, int n = 1);
//
//
//int main()
//{
//
//	// : source code
//
//	char sample[Arsize];
//	cout << "���ڿ��� �Է��Ͻʽÿ�: " << endl;
//	cin.get(sample, Arsize);
//	char *ps = left(sample, 4);
//	cout << ps << endl;
//	delete[] ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[] ps;
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
//char * left(const char * str, int n)
//{
//	if (n < 0)
//		n = 0;
//
//	char *p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)
//
//		p[i] = str[i];
//	while (i <= n)
//		p[i++] = '\0';
//
//	return p;
////}
//
//const int func();
//const int &ffunc();
//
//int main()
//{
//
//	int a = 1;
//	int res;
//
//	res = func();
//	cout << res << endl;
//	res++;
//	cout << res << endl;
//
//	const int &ress = ffunc();
//	cout << ress << endl;
//	res++;
//	cout << res << endl;
//
//	return 0;
//}
//
//
//const int  func()
//{
//	int a = 1;
//	return a;
//}
//
//const int &ffunc()
//{
//
//	return 3;
//}
//
//


//
//
//int main()
//{
//
//	// : source code
//	const int size = 7;
//	int arr[size] = { 1, 2, 3, 5, 6, 8, 9 };
//	int n, pre, post, cur;
//	cin >> n;
//
//
//	cout << "  |  0  1  2  3  4  5  6\n";
//	cout << "--+------------------------\n";
//	pre = 0;
//	post = size - 1;
//	cur = size / 2;
//	while (1)
//	{
//		cout << "  |";
//		for (int i = 0; i < size; i++)
//		{
//			if (i == cur)
//				cout << "  +"; 
//			else if (i == post)
//				cout << " ->";
//			else if (i == pre)
//				cout << " <-";
//			else
//				cout << "   ";
//			
//		}
//		cout << endl;
//		cout << " " << cur << "|  1  2  3  5  6  8  9\n";
//
//		if (arr[cur] == n)
//		{
//			cout << endl << n << "�� x[" << cur << "]�� �ֽ��ϴ�.";
//			break;
//		}
//		else if(arr[cur] > n)
//		{
//			post = cur - 1;
//			cur = (pre + post) / 2;
//		}
//		else
//		{
//			pre = cur + 1;
//			cur = (pre + post) / 2;
//		}
//
//		cout << "  |" << endl;
//
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
//int int_cmp(const int *a, const int *b);
//
//
//int main()
//{
//
//	// : source code
//	int i, nx, ky;
//	int *x;
//	int *p;
//	cout <<"bsearch �Լ��� ����Ͽ� �˻�" << endl;
//	cout << "��� ���� : ";
//	cin >> nx;
//	x = new int[nx];
//
//	cout << "������������ �Է��ϼ���.\n";
//	cout << "x[0]: ";
//	cin >> x[0];
//
//	for (i = 1; i < nx; i++)
//	{
//		do
//		{
//			cout << i << " : ";
//			cin >> x[i];
//		} while (x[i] < x[i - 1]);
//
//	}
//
//	cout << "�˻��� : ";
//	cin >> ky;
//
//	p = (int*)bsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *)) int_cmp);
//
//	if (p == NULL)
//		cout << "�˻��� �����߽��ϴ�." << endl;
//	else
//		cout << ky << "�� " << (int)(p - x) << "�� �ֽ��ϴ�." << endl;
//
//	free(x);
//
//
//
//	return 0;
//
//
//}
//
//
//int int_cmp(const int *a, const int *b)
//{
//	if (*a < *b)
//		return -1;
//	else if (*a > *b)
//		return 1;
//	else
//		return 0;
//}
//
//int bin_search2(const int a[], int n, int key);
//
//int main()
//{
//	int size, key;
//	int *arr;
//	int res = -1;
//
//	cout << "ũ�� : ";
//	cin >> size;
//	arr = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//
//	cout << "ã���� : ";
//	cin >> key;
//
//	res = bin_search2(arr, size, key);
//
//	cout << res << endl;
//
//
//
//	return 0;
//}
//
//
//int bin_search2(const int a[], int n, int key)
//{
//	int pre = 0, post = n - 1, cur = (pre + post) / 2;
//
//	while (1)
//	{
//		if (a[cur] == key)
//			break;
//		else if (a[cur] > key)
//		{
//			post = cur - 1;
//			cur = (pre + post) / 2;
//		}
//		else
//		{
//			pre = cur + 1;
//			cur = (pre + post) / 2;
//		}
//
//	}
//	int i = 1;
//	while (cur - i >= 0)
//	{
//		if (a[cur] != a[cur - i])
//			break;
//		else
//			i++;
//	}
//	i--;
//
//	return cur - i;
//
//}



int int_cmp(const int *a, const int *b);
void *bsearchx(const void *key, const void *base, size_t nmemb,
	size_t size, int(*compar)(const void *, const void *));

int main()
{

	// : source code
	int i, nx, ky;
	int *x;
	int *p;
	cout <<"bsearch �Լ��� ����Ͽ� �˻�" << endl;
	cout << "��� ���� : ";
	cin >> nx;
	x = new int[nx];

	cout << "������������ �Է��ϼ���.\n";
	cout << "x[0]: ";
	cin >> x[0];

	for (i = 1; i < nx; i++)
	{
		do
		{
			cout << i << " : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);

	}

	cout << "�˻��� : ";
	cin >> ky;

	p = (int*)bsearchx(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *)) int_cmp);

	if (p == NULL)
		cout << "�˻��� �����߽��ϴ�." << endl;
	else
		cout << ky << "�� " << (int)(p - x) << "�� �ֽ��ϴ�." << endl;

	free(x);



	return 0;


}


int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}


void *bsearchx(const void *key, const void *base, size_t nmemb,
	size_t size, int(*compar)(const void *, const void *))
{
	int pre = 0, post = nmemb - 1, cur = (pre + post) / 2;

	while (1)
	{
		if (compar((int*)base + cur, key) == 0)
			break;
		else if (compar((int*)base + cur, key) == 1)
		{
			post = cur - 1;
			cur = (pre + post) / 2;
		}
		else
		{
			pre = cur + 1;
			cur = (pre + post) / 2;
		}

	}
	int i = 1;
	while (cur - i >= 0)
	{
		if (*((int*)base + cur) != *((int*)base + (cur - i)))
			break;
		else
			i++;
	}
	i--;

	return (int*)base + (cur - i);


}
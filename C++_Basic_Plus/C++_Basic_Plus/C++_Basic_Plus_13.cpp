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
//	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
//	p3 += 1;
//	cout << "������ p3[0]�� " << p3[0] << "�̰�, ";
//	cout << "p3[1]��" << p3[1] << "�Դϴ�.\n";
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
//	cout << "�̸��� �Է��Ͻʽÿ�: ";
//	getline(cin, name);
//	cout << "����Ʈ�� �Է��Ͻʽÿ�: ";
//	getline(cin, dessert);
//	cout << "���ִ� " << dessert;
//	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
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
//	cout << "ù��° ĵ��� �̸�: " << setw(11) << snack[0].Name << " �߷�: " << snack[0].Weight << " Į�θ�: " << snack[0].Kal << endl;
//	cout << "�ι�° ĵ��� �̸�: " << setw(11) << snack[1].Name << " �߷�: " << snack[1].Weight << " Į�θ�: " << snack[1].Kal << endl;
//	cout << "����° ĵ��� �̸�: " << setw(11) << snack[2].Name << " �߷�: " << snack[2].Weight << " Į�θ�: " << snack[2].Kal << endl;
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
//	cout << "������ �̸��� �Է��Ͻÿ�: ";
//	cin >> stPizza.Name;
//	cout << "������ ������ �Է��Ͻÿ�: ";
//	cin >> stPizza.Diameter;
//	cout << "������ �߷��� �Է��Ͻÿ�: ";
//	cin >> stPizza.Weight;
//
//
//	cout << "�����̸�: " << stPizza.Name << endl;
//	cout << "��������: " << stPizza.Diameter << endl;
//	cout << "�����߷�: " << stPizza.Weight << endl;
//	
//
//	Pizza *PPizza = new Pizza;
//	cout << "������ ������ �Է��Ͻÿ�: ";
//	cin >> PPizza->Diameter;
//	cout << "������ �̸��� �Է��Ͻÿ�: ";
//	cin >> PPizza->Name;
//	cout << "������ �߷��� �Է��Ͻÿ�: ";
//	cin >> PPizza->Weight;
//
//
//	cout << "�����̸�: " << PPizza->Name << endl;
//	cout << "��������: " << PPizza->Diameter << endl;
//	cout << "�����߷�: " << PPizza->Weight << endl;
//
//	return 0;
//
//
//}

/*
��. 
	���ڿ� �� �տ��� ���� ������ �ڿ������� ������
	������ ����� palindrome �̶�� �Ѵ�.
	���ڿ��� �Է¹޾� ȸ������ �Ǵ��ϰ� ����� ����ϴ� ���α׷��� �ۼ��϶�.

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
//	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
//	cin >> n;
//
//	Car *c = new Car[n];
//
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "�ڵ��� #" << i+1 << " :\n";
//		cout << "���۾�ü: ";
//		cin >> c[i].name;
//		cout << "���۳⵵: ";
//		cin >> c[i].year;
//	}
//
//	cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << c[i].year << "���� " << c[i].name << endl;
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
//	cout << "�� " << n << " �ܾ �ԷµǾ����ϴ�." << endl;
//	return 0;
//
//
//}

/*
��.
	10������ �Է¹ް�
	��ȯ�ϰ��� �ϴ� ������ �Է¹����� �ش� ������ ��ȯ�Ͽ�
	����ϴ� ���α׷��� �ۼ��϶�. (2  ~ 36����)
	ex)		10���� �Է� : 59
			��� ���� : 8
			10���� 59�� 8���� 37 �Դϴ�.

*/

//
//int main()
//{
//
//	// : source code
//
//	int n, m;
//	string str;
//	cout << "10���� �Է�: ";
//	cin >> n;
//	cout << "��� ���� : ";
//	cin >> m;
//	while(m < 2 || m > 36)
//	{
//		cout << "2 ~ 36 ������ ���� �Է��Ͻÿ�: ";
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
��
	���� �������� 10������ �ƴ� ������ ������ �Է¹޾Ƽ� ��ȯ�ϴ�
	���α׷�
	ex)		�Է�����: 2
			��: 11
			�������: 10
			2���� 11�� 10���� 3�Դϴ�.
*/


int main()
{

	// : source code

	int m,k, num = 0;
	string str, n;
	cout << "�Է� ����: ";
	cin >> k;
	cout << "k���� �Է�: ";
	cin >> n;
	cout << "��� ���� : ";
	cin >> m;
	for (int i = 0; i < n.length(); i++)
	{
		num *= k;
		num += n[i] - '0';
	}





	while (m < 2 || m > 36)
	{
		cout << "2 ~ 36 ������ ���� �Է��Ͻÿ�: ";
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

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
#include <vector>
#include <array>
#include <list>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <cctype>


#include "GeometricObject.h"
#include "Stopwatch.h"
#include "Stacktp.h"
#include "Worker0.h"
#include "Tv.h"
#include "Queuetp.h"

using namespace std;
//
//int main()
//{
//	int sum = 0;
//	int input;
//
//	while (cin >> input)
//		sum += input;
//
//	cout << "���������� �Է��� ��: " << input << endl;
//	cout << sum << endl;
//
//	return 0;
//}
//
//int main()
//{
//	string filename;
//
//	cout << "�� ������ ���� �̸��� �Է��Ͻʽÿ�: ";
//	cin >> filename;
//
//	ofstream fout(filename.c_str());
//
//	fout << "��� ��ȣ ���⿡ �����Ͻʽÿ�.\n";
//	cout << "��� ��ȣ�� �Է��Ͻʽÿ�: ";
//	float secret;
//	cin >> secret;
//	fout << "������ ��� ��ȣ�� " << secret << "�Դϴ�.\n";
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << " ������ ������ ������ �����ϴ�: \n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << "���α׷��� �����մϴ�.\n";
//	fin.close();
//
//
//
//
//	return 0;
//}
//

//int main()
//{
//	const char * file = "guests.txt";
//	char ch;
//	
//	ifstream fin;
//	fin.open(file);
//
//	if (fin.is_open())
//	{
//		cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out + ios_base::app);
//	if (!fout.is_open())
//	{
//		cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "���ο� �մ� �̸����� �Է��Ͻʽÿ�(�������� �� �� �Է�):\n";
//	string name;
//	while (getline(cin, name) && name.size() > 0)
//		fout << name << endl;
//
//	fout.close();
//
//	fin.clear();
//	fin.open(file);
//	if (fin.is_open())
//	{
//		cout << file << " ������ ������ ������ ������ �����ϴ�.:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	cout << "���α׷��� �����մϴ�.\n";
//
//
//		return 0;
//}
//
//
//
//
//const int LIM = 20;
//
//struct planet
//{
//	char name[LIM];
//	double population;
//	double g;
//};
//
//const char * file = "planets.dat";
//inline void eatline() { while (cin.get() != '\n') continue; }
//
//int main()
//{
//
//	planet pl;
//	cout << fixed;
//
//	fstream finout;
//	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
//
//	int ct = 0;
//
//	if (finout.is_open())
//	{
//		finout.seekg(0);
//		cout << file << " ������ ���� ������ ������ �����ϴ�.:\n";
//		while (finout.read((char *)&pl, sizeof pl))
//		{
//			cout << ct++ << ": " << setw(20) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		if (finout.eof())
//			finout.clear();
//		else
//		{
//			cerr << file << "������ �дٰ� ���� �߻�.\n";
//			exit(EXIT_FAILURE);
//		}
//	}
//	else
//	{
//		cerr << file << "������ �� �� �����ϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "������ ���ڵ� ��ȣ�� �Է��Ϛ�ÿ�: ";
//	long rec;
//	cin >> rec;
//	eatline();
//	if (rec < 0 || rec >= ct)
//	{
//		cerr << "�߸��� ���ڵ� ��ȣ�Դϴ�. ����.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	streampos place = rec * sizeof pl;
//	finout.seekg(place);
//
//	if(finout.fail())
//	{
//		cerr << "���ڵ� ã�ٰ� ���� �߻�. ����.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	finout.read((char *)& pl, sizeof pl);
//	cout << "���� ���ڵ��� ����:\n";
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//		<< setprecision(0) << setw(12) << pl.population
//		<< setprecision(2) << setw(6) << pl.g << endl;
//
//	if (finout.eof())
//		finout.clear();
//
//	cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� ���� �Է�): \n";
//	cin.get(pl.name, LIM);
//	cout << "�༺�� �α��� �Է��Ͻʽÿ�: ";
//	cin >> pl.population;
//	cout << "�༺�� �߷°��ӵ��� �Է��Ͻʽÿ�: ";
//	cin >> pl.g;
//	finout.seekp(place);
//	finout.write((char*)&pl, sizeof pl) << flush;
//
//	if (finout.fail())
//	{
//		cerr << "���ٰ� ���� �߻�. ����.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	ct = 0;
//	finout.seekg(0);
//	cout << file << " ������ ������ ������ ������ �����ϴ�:\n";
//
//	while (finout.read((char *)&pl, sizeof pl))
//	{
//		cout << setw(20) << pl.name << ": "
//			<< setprecision(0) << setw(12) << pl.population
//			<< setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//
//	cout << "���α׷��� �����մϴ�.\n";
//
//	return 0;
//}


int main()
{

	string str1;
	string str2;
	cin >> str1 >> str2;
	bool res = false;
	int nres = 0;
	int size1 = str1.size(), size2 = str2.size();
	for (int i = 0; i < size1; i++)
	{
		if (str1[i] == str2[0])
		{
			nres = i + 1;
			res = true;
			for (int j = 0; j < size2; j++)
			{
				if (i + j > size1 || str1[i + j] != str2[j])
				{
					res = false;
					break;
				}
			}
		}
	}

	if (res)
	{
		cout << nres << "���� �ִ�!\n";

	}
	else
		cout << "����!\n";

}























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































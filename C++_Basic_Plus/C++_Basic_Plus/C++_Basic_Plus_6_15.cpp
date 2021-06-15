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
//	cout << "마지막으로 입력한 값: " << input << endl;
//	cout << sum << endl;
//
//	return 0;
//}
//
//int main()
//{
//	string filename;
//
//	cout << "새 파일을 위한 이름을 입력하십시오: ";
//	cin >> filename;
//
//	ofstream fout(filename.c_str());
//
//	fout << "비밀 번호 노출에 주의하십시오.\n";
//	cout << "비밀 번호를 입력하십시오: ";
//	float secret;
//	cin >> secret;
//	fout << "귀하의 비밀 번호는 " << secret << "입니다.\n";
//	fout.close();
//
//	ifstream fin(filename.c_str());
//	cout << filename << " 파일의 내용은 다음과 같습니다: \n";
//	char ch;
//	while (fin.get(ch))
//		cout << ch;
//	cout << "프로그램을 종료합니다.\n";
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
//		cout << file << " 파일의 현재 내용은 다음과 같습니다:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	ofstream fout(file, ios_base::out + ios_base::app);
//	if (!fout.is_open())
//	{
//		cerr << "출력을 위해 " << file << " 파일을 열 수 없습니다.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "새로운 손님 이름들을 입력하십시오(끝내려면 빈 줄 입력):\n";
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
//		cout << file << " 파일의 개정된 내용은 다음과 같습니다.:\n";
//		while (fin.get(ch))
//			cout << ch;
//		fin.close();
//	}
//
//	cout << "프로그램을 종료합니다.\n";
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
//		cout << file << " 파일의 현재 내용은 다음과 같습니다.:\n";
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
//			cerr << file << "파일을 읽다가 에러 발생.\n";
//			exit(EXIT_FAILURE);
//		}
//	}
//	else
//	{
//		cerr << file << "파일을 열 수 없습니다.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "수정할 레코드 번호를 입력하싮시오: ";
//	long rec;
//	cin >> rec;
//	eatline();
//	if (rec < 0 || rec >= ct)
//	{
//		cerr << "잘못된 레코드 번호입니다. 종료.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	streampos place = rec * sizeof pl;
//	finout.seekg(place);
//
//	if(finout.fail())
//	{
//		cerr << "레코드 찾다가 에러 발생. 종료.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	finout.read((char *)& pl, sizeof pl);
//	cout << "현재 레코드의 내용:\n";
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//		<< setprecision(0) << setw(12) << pl.population
//		<< setprecision(2) << setw(6) << pl.g << endl;
//
//	if (finout.eof())
//		finout.clear();
//
//	cout << "행성의 이름을 입력하십시오(끝내려면 빈줄 입력): \n";
//	cin.get(pl.name, LIM);
//	cout << "행성의 인구를 입력하십시오: ";
//	cin >> pl.population;
//	cout << "행성의 중력가속도를 입력하십시오: ";
//	cin >> pl.g;
//	finout.seekp(place);
//	finout.write((char*)&pl, sizeof pl) << flush;
//
//	if (finout.fail())
//	{
//		cerr << "쓰다가 에러 발생. 종료.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	ct = 0;
//	finout.seekg(0);
//	cout << file << " 파일의 개정된 내용은 다음과 같습니다:\n";
//
//	while (finout.read((char *)&pl, sizeof pl))
//	{
//		cout << setw(20) << pl.name << ": "
//			<< setprecision(0) << setw(12) << pl.population
//			<< setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//
//	cout << "프로그램을 종료합니다.\n";
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
		cout << nres << "번에 있다!\n";

	}
	else
		cout << "없다!\n";

}























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































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

/*
��1
	�뷮�� ū ������ ���� �뷮���� �����ؼ�
	���� ������ ���Ϸ� ������ ��ƿ��Ƽ ���α׷��� �ۼ�.

	����ڷκ��� �ҽ� ������ �Է¹��� ��
	���� ���ҵ� ���� ������ ����Ʈ ���� �Է¹޾�
	�ش� ũ���� ���Ϸ� �����Ѵ�.

	ex> Enter file name : test.zip
		Enter file size : 1024
		-> file Test0.div
		-> file Test1.div
		-> file Test2.div
		...
		Spilt Done!
*/
//
//int main()
//{
//	string filename;
//	int size, num_file, filesize;
//	ifstream fin;
//	ofstream fout;
//	cout << "Enter file name : ";
//	cin >> filename;
//	cout << "Enter file size : ";
//	cin >> size;
//
//	fin.open(filename, ios_base::in | ios_base::binary);
//
//	if (fin.is_open())
//	{
//		fin.seekg(0, ios::end);
//		filesize = fin.tellg();
//		num_file = fin.tellg() / size + 1;
//		fin.seekg(0);
//	}
//	else 
//	{
//		cerr << filename << " �� �� �� �����ϴ�." << endl;
//		exit(EXIT_FAILURE);
//	}
//	const string div1 = "test";
//	const string div2 = ".div";
//	string divfile;
//	for (int i = 0; i < num_file; i++)
//	{
//		divfile = div1 + (char)('1' + i) + div2;
//		fout.open(divfile, ios_base::out | ios_base::binary);
//		cout << "-> " << divfile << endl;
//		if (i == num_file - 1)
//		{
//			//size = filesize - fin.tellg();
//			//char *r = new char[size];
//			//fin.read((char *)r, sizeof(char) * size);
//			//fout.write((char*)r, sizeof(char) * size) << flush;
//			//if (fout.fail())
//			//{
//			//	cerr << "���ٰ� ���� �߻�\n";
//			//	exit(EXIT_FAILURE);
//			//}
//			//delete[] r;
//
//			char r;
//			fin.read((char*)&r, sizeof r);
//			while (!fin.eof())
//			{
//				fout.write((char*)&r, sizeof r) << flush; 
//				if (fout.fail())
//				{
//					cerr << "���ٰ� ���� �߻�\n";
//					exit(EXIT_FAILURE);
//				}
//				fin.read((char*)&r, sizeof r);
//			}
//		}
//		else
//		{
//			char *r = new char[size];
//			fin.read((char *)r, sizeof(char) * size);
//			fout.write((char*)r, sizeof(char) * size) << flush;
//			if (fout.fail())
//			{
//				cerr << "���ٰ� ���� �߻�\n";
//				exit(EXIT_FAILURE);
//			}
//
//			delete[] r;
//		}
//
//
//		fout.close();
//	}
//
//	if (fin.eof())
//		fin.clear();
//	else
//	{
//		cerr << filename << " ������ �дٰ� ���� �߻�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	fin.close();
//
//	cout << "Split Done!\n";
//	cout << "���α׷��� �����մϴ�.\n";
//
//	return 0;
//}



/*
��2.
	����ڷκ��� ���ҵ� �ҽ������� ����, �ҽ� ������ �̸�, ���� ������ �̸���
	�Է¹޾� ���ο� �ϳ��� ���Ϸ� �����ϴ� ���α׷��� �ۼ�
	ex>	Enter file number : 2
		Enter source filename 1 : test1.div
		Enter source filename 2 : test2.div
		Enter Target filename : Temp.zip
		...
		Combine Done!




*/
//
//int main()
//{
//		string filename;
//	int size, num_file, filesize;
//	ifstream fin;
//	ofstream fout;
//	cout << "Enter file name : ";
//	cin >> filename;
//	cout << "Enter file size : ";
//	cin >> size;
//
////	fin.open(filename, ios_base::in | ios_base::binary);
//	fin.open(filename, ios_base::in);
//
//	if (fin.is_open())
//	{
//		fin.seekg(0, ios::end);
//		filesize = fin.tellg();
//		num_file = fin.tellg() / size + 1;
//		fin.seekg(0);
//	}
//	else 
//	{
//		cerr << filename << " �� �� �� �����ϴ�." << endl;
//		exit(EXIT_FAILURE);
//	}
//	const string div1 = filename;
//	const string div2 = ".div";
//	string divfile;
//	for (int i = 0; i < num_file; i++)
//	{
//		divfile = div1 + (char)('1' + i) + div2;
////		fout.open(divfile, ios_base::out | ios_base::binary);
//		fout.open(divfile, ios_base::out);
//		cout << "-> " << divfile << endl;
//		if (i == num_file - 1)
//		{
//			//size = filesize - fin.tellg();
//			//char *r = new char[size];
//			//fin.read((char *)r, sizeof(char) * size);
//			//fout.write((char*)r, sizeof(char) * size) << flush;
//			//if (fout.fail())
//			//{
//			//	cerr << "���ٰ� ���� �߻�\n";
//			//	exit(EXIT_FAILURE);
//			//}
//			//delete[] r;
//
//			char r;
//			fin.read((char*)&r, sizeof r);
//			while (!fin.eof())
//			{
//				fout.write((char*)&r, sizeof r) << flush; 
//				if (fout.fail())
//				{
//					cerr << "���ٰ� ���� �߻�\n";
//					exit(EXIT_FAILURE);
//				}
//				fin.read((char*)&r, sizeof r);
//			}
//		}
//		else
//		{
//			char *r = new char[size];
//			fin.read((char *)r, sizeof(char) * size);
//			fout.write((char*)r, sizeof(char) * size) << flush;
//			if (fout.fail())
//			{
//				cerr << "���ٰ� ���� �߻�\n";
//				exit(EXIT_FAILURE);
//			}
//
//			delete[] r;
//		}
//
//
//		fout.close();
//	}
//
//	if (fin.eof())
//		fin.clear();
//	else
//	{
//		cerr << filename << " ������ �дٰ� ���� �߻�.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	fin.close();
//
//	cout << "Split Done!\n";
//
//
//
//
//	cout << "Enter file number : ";
//	cin >> num_file;
//	cout << "Enter file name : ";
//	cin >> filename;
//
////	fout.open(filename, ios_base::out | ios_base::binary);
//	fout.open(filename, ios_base::out);
//	for (int i = 0; i < num_file; i++)
//	{
//		cout << "Enter source file name " << i + 1 << " : ";
//		cin >> filename;
//
////		fin.open(filename, ios_base::in | ios_base::binary);
//		fin.open(filename, ios_base::in);
//		if (fin.is_open())
//		{
//			fin.seekg(0, ios::end);
//			filesize = fin.tellg();
//			fin.seekg(0);
//		}
//		else
//		{
//			cerr << filename << " �� �� �� �����ϴ�." << endl;
//			exit(EXIT_FAILURE);
//		}
//
//		char *r = new char[filesize];
//		fin.read((char*)r, sizeof(char) * filesize);
//		fout.write((char*)r, sizeof(char) * filesize) << flush;
//		if (fout.fail())
//		{
//			cerr << "���ٰ� ���� �߻�\n";
//			exit(EXIT_FAILURE);
//		}
//		fin.close();
//		delete[] r;
//	}
//	fout.close();
//
//
//	cout << "Combine Done!\n";
//	cout << "���α׷��� �����մϴ�.\n";
//
//	return 0;
//}


int main()
{
	ofstream fout1;
	ofstream fout2;
	ifstream fin;
	ifstream fin2;
	fout1.open("bi.txt",ios_base::out | ios_base::binary);
	fout2.open("te.txt", ios_base::out);
	
	char j = 0;
	for (int i = 0; i < 128; i++)
	{
		fout1.write((char*)&j, sizeof j);
		j++;
	}

	fout1.close();
	fin.open("bi.txt");

	char r;
	for (int i = 0; i < 128; i++)
	{
		fin >> r;
		cout << r << endl;
		fout2 << r;
	}
	fout2.close();
	fin.close();

	fin.open("bi.txt");
	fin2.open("te.txt");

	char a, b;
	for (int i = 0; i < 128; i++)
	{
		fin.read((char*)&a, sizeof(char));
		fin2.read((char*)&b, sizeof(char));
		printf("%d %d\n", a, b);
	}

	fin.close();
	fin2.close();

	return 0;
}
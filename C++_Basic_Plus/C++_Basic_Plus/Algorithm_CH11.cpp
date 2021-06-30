#include <iostream>
#include <string>
#include <ctime>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "HashTable.h"

using namespace std;

void menu()
{
	int n, size;
	cout << "해쉬테이블의 사이즈를 입력하세요: ";
	cin >> size;
	static Hash t(size);

	while (1)
	{
		cout << "(1) 추가 (2) 삭제 (3) 검색 (4) 모두 삭제 (5) 덤프 (0) 종료 :";
		cin >> n;
		_data temp;

		switch (n)
		{
		case 1:
		{
			cout << "추가할 데이터를 입력하세요.\n";
			cout << "번호: ";
			cin >> temp.no;
			cout << "이름: ";
			cin >> temp.name;
			t.Add(&temp);
		}
		break;
		case 2:
		{
			cout << "삭제할 데이터를 입력하세요.\n";
			cout << "번호: ";
			cin >> temp.no;
			t.Remove(temp.no);

		}
		break;
		case 3:
		{
			cout << "검색할 데이터를 입력하세요.\n";
			cout << "번호: ";
			cin >> temp.no;
			t.Search(temp.no);
		}
		break;
		case 4:
		{
			cout << "reset 성공\n";
			t.Clear();

		}
		break;
		case 5:
		{
			t.Dump();
		}
		break;
		case 0:
		{
			t.Clear();
			t.Terminate();
			return;
		}
		break;
		}
	}
}

int main()
{
	menu();

	return 0;
}
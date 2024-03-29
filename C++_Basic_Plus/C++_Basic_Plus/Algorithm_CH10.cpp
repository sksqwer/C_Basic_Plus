#include <iostream>
#include <string>
#include <ctime>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "Tree.cpp"

using namespace std;

template<typename T>
void menu(Tree<T> t);

int main()
{
	Tree<int> t;
	menu(t);



	return 0;
}

template<typename T>
void menu(Tree<T> t)
{
	int n;
	int v;
	T d;



	while (1)
	{
		cout << "(1) 삽입 (2) 삭제 (3) 검색 (4) 출력 (0) 종료: ";
		cin >> n;

		switch (n)
		{
		case 1:
		{
			cout << "삽입하는 데이터를 입력하세요.\n";
			cout << "번호: ";
			cin >> v;
			cout << "이름: ";
			cin >> d;
			t.insert(node<T>(v, d));
		}
			break;
		case 2:
		{
			cout << "삭제하는 데이터를 입력하세요.\n";
			cout << "번호: ";
			cin >> v;
			t.Delete(node<T>(v, 0));
		}
			break;
		case 3:
		{
			cout << "검색하는 데이터를 입력하세요.\n";
		cout << "번호: ";
		cin >> v;
		cout << "이름: ";
		cin >> d;
		t.Search(t.Root, d);

		}
			break;
		case 4:
		{
			cout << "[모든 노드 출력]\n";
			t.print(t.Root);
		}
			break;
		case 5:
			return;
			break;
		}

	}
	int size = 0;
	cout << t.check_depth(t.Root, size) << " " << size;

}
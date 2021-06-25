#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <limits>
#include <vector>


#include "Stopwatch.h"
#include "List.h"

using namespace std;

/*
문제
	입력 순서와 상관 없이 번호순서대로
	정렬된 리스트를 구현하느 프로그램을 작성하라.
	1. 리스트 초기화
	2. 노드 추가
		2.1 제일 앞에 추가
		2.2 제일 뒤에 추가
		2.3 노드 사이에 추가
	3. 노드 삭제
		3.1 제일 앞 노드 삭제
		3.2 맨 뒤 노드 삭제
		3.3 노드 사이 삭제
	4. 검색
		번호를 입력 받아서 해당 번로의 이름 출력
	5. 출력 
		리스트 전체 데이터 출력

	ex) 
		메뉴 선택
			1. 학생 추가
			2. 학생 삭제 
			3. 전체 출력
	
		1 -> 번호 : 3
			이름 : XX
		1 -> 번호 : 2
			이름 : YY
	*/

void menu(List& l)
{
	cout << "메뉴 선택\n";
	cout << "\t 1. 학생 추가\n";
	cout << "\t 2. 학생 삭제\n";
	cout << "\t 3. 전체 출력\n";
	cout << "\t 4. 종료\n";
	int n;
	cin >> n;
	int num;
	string name;

	switch (n)
	{
	case 1:
		cout << "번호: ";
		cin >> num;
		cout << "이름: ";
		cin >> name;
		l.push_num(num, name);
		break;
	case 2:
		cout << "삭제할 번호: ";
		cin >> num;
		l.remove_num(num);
		break;
	case 3:
		l.print();
		break;
	case 4:
		exit(0);
		break;
	}
}

int main()
{
	List classmate;

	while (1)
	{
		menu(classmate);
	}

	return 0;

}
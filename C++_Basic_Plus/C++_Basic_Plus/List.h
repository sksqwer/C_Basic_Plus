#pragma once
#ifndef LIST_H_
#define LIST_H_
#include <string>
using namespace std;

struct Classmate
{
	int num;
	string name;
	Classmate *next = NULL;
	Classmate *pre = NULL;
	Classmate(int num, string name) : num(num), name(name) {}
};

class List
{
private:
	Classmate* head = NULL;
	int size = 0;
public:
	List(){}
	~List();
	Classmate* front() { return head; }
	void reset();
	void push_front(int, string);
	void push_back(int, string);
	void push_num(int, string);
	void remove_front();
	void remove_back();
	void remove_num(int);
	Classmate* search(int);
	void print();
};



#endif // LIST_H_
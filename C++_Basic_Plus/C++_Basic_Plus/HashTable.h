#pragma once
#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include <stddef.h>

struct _data
{
	int no;
	char name[20];
	_data* next = NULL;
};

struct node
{
	_data *d = NULL;
};

class Hash
{
private:
	int size;
	node *table = NULL;
public:
	Hash(int size);
	void initialize(int size);
	void Search(const int &n);
	void Add(const _data *x);
	void Remove(const int &n);
	void Dump();
	void Clear();
	void Terminate();

};


#endif // !HASHTABLE_H_

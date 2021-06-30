#include "HashTable.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdio.h>
#include <string.h>



Hash::Hash(int size)
{
	if (size == 0)
		size = 1;
	this->size = size;
	table = new node[size];
	for (int i = 0; i < size; i++)
		table[i].d = NULL;
}
void Hash::initialize(int size)
{
	if (table != NULL)
	{
		Clear();
		Terminate();
		table = new node[size];
	}
	else
		table = new node[size];
}

void Hash::Search(const int &n)
{
	int key = n % size;

	_data *temp = table[key].d;
	while (temp != NULL)
	{
		if (temp->no == n)
			break;
		temp = temp->next;

	}
	if (temp == NULL)
	{
		std::cout << "검색결과를 찾을수 없습니다.\n";
	}
	else
		std::cout << "검색에 성공했습니다 : " << temp->no << " " << temp->name << std::endl;
}

void Hash::Add(const _data * x)
{
	int key = x->no % size;
	_data *temp = new _data;
	strcpy_s(temp->name, x->name);
	temp->no = x->no;


	if (table[key].d != NULL)
		temp->next = table[key].d;
	table[key].d = temp;
	
}

void Hash::Remove(const int &n)
{
	int key = n % size;

	_data *cur = table[key].d;
	_data *pre = table[key].d;
	while (cur != NULL)
	{
		if (cur->no == n)
			break;
		pre = cur;
		cur = cur->next;
	}

	if (cur == table[key].d)
	{
		delete cur;
		table[key].d = NULL;
	}
	else
	{
		pre->next = cur->next;
		delete cur;
	}

}

void Hash::Dump()
{
	_data *cur;
	for (int i = 0; i < size; i++)
	{
		cur = table[i].d;
		std::cout << std::setfill('0') << std::setw(2) << i;
		std::cout << " : ";
		while (cur != NULL)
		{
			std::cout << "-> " << cur->no << "(" << cur->name << ") ";
			cur = cur->next;
		}
		std::cout << std::endl;
		
	}
}

void Hash::Clear()
{
	_data *cur, *next;
	for (int i = 0; i < size; i++)
	{
		cur = table[i].d;
		while (cur != NULL || cur != nullptr)
		{
			next = cur->next;
			delete cur;
			cur = next;
		}
		table[i].d = NULL;
	}
}

void Hash::Terminate()
{
	if (table == NULL)
		return;
	else
	{
		delete[] table;
	}
}

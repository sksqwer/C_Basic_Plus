
#include <iostream>
#include "List.h"

List::~List()
{

	Classmate* temp = head;
	Classmate* temp2;
	while (temp != NULL)
	{
		temp2 = temp->next;
		delete temp;
		temp = temp2;
	}
}

void List::reset()
{

	Classmate* temp = head;
	Classmate* temp2;
	while (temp != NULL)
	{
		temp2 = temp->next;
		delete temp;
		temp = temp2;
	}
	size = 0;
}

void List::push_front(int n , string name)
{
	if (head != NULL)
	{
		Classmate* temp = head;
		Classmate *c = new Classmate(n, name);
		head = c;
		c->next = temp;
		temp->pre = c;
	}
	else
	{
		Classmate *c = new Classmate(n, name);
		head = c;
	}
	size++;

}

void List::push_back(int n, string name)
{
	if (head != NULL)
	{
		Classmate* cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		Classmate *c = new Classmate(n, name);
		cur->next = c;
		c->pre = cur;
	}
	else
	{
		Classmate *c = new Classmate(n, name);
		head = c;
	}
	size++;
}

void List::push_num(int n , string name)
{
	if (head != NULL)
	{
		Classmate* cur = head;
		Classmate* pre = head;
		while (cur != NULL && cur->num < n)
		{
			pre = cur;
			cur = cur->next;
		}
		Classmate *c = new Classmate(n, name);

		if (cur == head)
		{
			head = c;
			c->next = cur;
			cur->pre = c;
		}
		else
		{
			if (cur->next == NULL)
			{
				cur->next = c;
				c->pre = cur;
			}
			else
			{
				pre->next = c;
				c->next = cur;
				c->pre = pre;
				cur->pre = c;
			}
		}
	}
	else
	{
		Classmate *c = new Classmate(n, name);
		head = c;
	}
	size++;
}

void List::remove_front()
{
	if (head != NULL)
	{
		Classmate* temp = head;
		Classmate* temp2 = temp->next;
		delete temp;
		head = temp2;
		if (temp2 != NULL)
			temp2->pre = NULL;
		head = temp2;
		size--;
	}

}

void List::remove_back()
{
	if (head != NULL)
	{
		Classmate* cur = head;
		Classmate* pre = head;
		while (cur->next != NULL)
		{
			pre = cur;
			cur = cur->next;
		}
		if (pre == head)
		{
			head = NULL;
		}			
		else
		{
			pre->next = NULL;
		}
			
		delete cur;
		size--;

	}
}

void List::remove_num(int n)
{
	if (head != NULL)
	{
		Classmate* cur = head;
		Classmate* pre = head;
		while (cur != NULL && cur->num != n)
		{
			pre = cur;
			cur = cur->next;
		}
		if (cur == NULL)
			return;
		if (cur == head)
		{
			head = cur->next;
			cur->next->pre = NULL;
		}
		Classmate* temp = cur->next;
		if (temp == NULL)
		{
			pre->next = NULL;
		}
		else
		{
			pre->next = temp;
			temp->pre = pre;
		}
		delete cur;
		size--;
	}
}

Classmate* List::search(int n)
{
	if (head != NULL)
	{
		Classmate* cur = head;


		while (cur != NULL && cur->num != n)
		{
			cur = cur->next;
		}
		cout << n << "번째 이름은 " << cur->name << "입니다.\n";
		return cur;
	}
	else
	{
		std::cout << n << "을 찾을수 없습니다.\n";
		return NULL;
	}

}

void List::print()
{
	Classmate* cur = head;
	while (cur != NULL)
	{
		std::cout << "번호: " << cur->num << endl;
		std::cout << "이름: " << cur->name << endl << endl;
		cur = cur->next;
	}
}

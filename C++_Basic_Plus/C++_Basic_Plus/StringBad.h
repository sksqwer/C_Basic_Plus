#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#ifndef STRINGBAD_H
#define STRINGBAD_H

class StringBad
{
private:
	char * str;
	int len;
	static int num_strings;

public:
	StringBad(const char *);
	StringBad();
	StringBad(const StringBad &);
	~StringBad();

	friend std::ostream & operator<<(std::ostream & os,
		const StringBad & st);

	StringBad & operator=(const StringBad &);

};
#endif // !STRINGBAD_H
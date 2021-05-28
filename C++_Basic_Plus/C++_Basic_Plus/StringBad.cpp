
#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <string>

#include "StringBad.h"

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ��ü ����\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std:strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ����Ʈ ��ü ����\n";
}

StringBad::StringBad(const StringBad & s)
{
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" ��ü ����\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" ��ü �ı�  ";
	--num_strings;
	cout << "���� ��ü��: " << num_strings << "\n";
	delete[] str;
}

StringBad & StringBad::operator=(const StringBad & s)
{
	if (this == &s)
		return *this;
	delete[] str;

	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);

	return *this;
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
}


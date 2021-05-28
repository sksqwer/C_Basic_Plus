
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
	cout << num_strings << ": \"" << str << "\" 객체 생성\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std:strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 디폴트 객체 생성\n";
}

StringBad::StringBad(const StringBad & s)
{
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" 객체 생성\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" 객체 파괴  ";
	--num_strings;
	cout << "남은 객체수: " << num_strings << "\n";
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
	// TODO: 여기에 반환 구문을 삽입합니다.
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
	// TODO: 여기에 반환 구문을 삽입합니다.
}


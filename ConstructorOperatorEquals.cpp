/*
��������� ����� String, ������� � ���� �������� ������������. ������ ��������� ��� ������ � �������. ��������� ������ �������� ��� �� (� size �������� ������ ������ ��� ������������ 0 �������, str ��������� �� C-style ������, �. �. � ����������� ������� ��������). 

���������� � ����������: �� ������ �������� ����� ��������������� ������ ��� �������, �� �� ���������� ������ ������ �� ���������� ������� � ��� ��� �����������. ��� ���������� �� ����� ������� ��� �������� ���-����. ������������� main �� �����. �� ����������� ������� �� cstdlib (malloc, calloc, realloc � free).
*/

#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();


    /* ���������� �������� ������������ */
	String &operator=(const String &other)
    {
        if (this == &other)
            return *this;
        delete [] str;
        size = other.size;
        str = new char[size + 1];
        strcpy(str, other.str);
        return *this;
    }


	void append(const String &other);

	size_t size;
	char *str;
};
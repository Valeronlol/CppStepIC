/*
������������� � ���������� �������� ������������ � ���������� ����� �� ���� ������ �� ���������� ���������. ������ ����� ��������� ��������� String ���������� ��������� ��������. 

��� ������ �� �������� ����� ��������� ��������� �������� ������� (���������, ����� ������ ����������� �� ��� � ���� ��� �� ������� ��� �� ����������). �������� ������ ������ ����� ��������� ����� append, ������� ��������� � �������� ��������� ��������� ��������� String � ��������� ����� ������, ������� �� ������, � ����� ������, � ������� �� ��� ������. ���� ������ ����������� ����� append.

��� ���������� ������� ������ ��������� ��� ������ � ������� � ������� ������ ������ ���� �� ������. � ����� ���� �� ��������, ��� size ������ ������ ��� ����� ������������ 0 �������. 

���������� � ����������: ��� ���������� �� ������ �������� ����� ��������������� ������� � ������. � ������� �� ������� ���������� ��� ��������� ��� ������������� � ������������, ������������� �� ������ �� �����, ��� ��� �����������. ������� ��� �������� ���-���� �� �����. ������������� main �� �����. ��� ������ � ������� �� ����������� ������� �� cstdlib (malloc, realloc, calloc � free).
*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <algorithm>
#include <iostream>
#include <cassert> 
using namespace std;

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

 
    
    /* ���������� ���� �����. */
    void append(String &other) {
        
        char * temp = new char[this->size + other.size + 1];
        strcat(temp, this->str);
        strcat(temp, other.str);
        strcat(temp,"\0");
        
        delete [] this->str;
        char * str = new char[this->size + other.size + 1];
        
        for (size_t i = 0; i != this->size + other.size+1; i++) {
            str[i] = temp[i];
        }
        this->str = str;
        this->size = strlen(this->str);
        
        delete [] temp;
  
    }

	size_t size;
	char *str;
};
/*
�������� � ����� String ���������� ������������ �����������. ��������� ������ �������� ��� �� (� size �������� ������ ������ ��� ������������ 0 �������, str ��������� �� C-style ������, �. �. � ����������� ������� ��������). 

���������� � ����������: �� ������ �������� ����� ��������������� ������ ��� �������, �� �� ���������� ������ ������ �� ���������� ������� � ��� ��� �����������. ��� ���������� �� ����� ������� ��� �������� ���-����. ������������� main �� �����. �� ����������� ������� �� cstdlib (malloc, calloc, realloc � free).
*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* ���������� ����������� ����������� */
    //String(const String &other)�
    //     : size(other.size), str(strcpy(new char[other.size + 1], other.str)) //{}
    //{
        //size = other.size;
        //str = new char[ other.size + 1 ];
        //strcpy(str, other.str);
        
    //}
    
    String(const String &other): size(other.size)
    {
        str = new char[size+1]; 
 
        for(size_t i = 0; i < size+1; ++i)
        {
            str[i] = other.str[i];
        }
                
    }
 

	void append(const String &other);

	size_t size;
	char *str;
};
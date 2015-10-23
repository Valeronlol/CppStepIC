#include <iostream>
/*
* � �������� ���������� �� ��������� ������������� �������� �������
* ��� ������������ ����������� ������� ������ SameType.
* ���� ������ �� �������� ������� �������,
* � ������ ���� ����������� ����������� ���� ���� bool, � ������ value.
* ������ ��������� ��� ������� ���������,
* � ���� ��� ������� ��������� ������� �������� ����� � ��� �� �����,
* �� ����������� ���� value ������ ������� �������� true, � ��������� ������ �������� false.
*
* �������:
struct Dummy { };
typedef int type;
std::cout << SameType<int, int>::value << std::endl; // ������� 1, �. �. true
std::cout << SameType<int, type>::value << std::endl; // 1, type == int
std::cout << SameType<int, int&>::value << std::endl; // 0, int � ������ �� int - ��������� ����
std::cout << SameType<Dummy, Dummy>::value << std::endl; // 1
std::cout << SameType<int, const int>::value << std::endl; // 0, const - ����� ����
Hint: ������� �������, ������� �������� ������� ������ ����� ����.
*/


// ���������� ������ SameType � ����� ��������
// �����������. � ������� ������ ���� ����������
// ���� ����������� ��������� ���� bool � ������
// value

template <typename T, typename V>
struct SameType
{ static const bool value = false; };

template <typename W>
struct SameType<W, W>
{ static const bool value = true; };
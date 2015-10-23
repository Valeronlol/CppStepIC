/*
���������� ������� ����������� ��������� copy_n �� ������� ��������� ���� U* � ������� ������ ���� T*, ��� T � U ������������ ����, ��� ������� ���������� �������������� �� U � T. �� ���� ������� ��������� ��� ��������� � ���������� ���������, ������� ���������� �����������.

 ������ ������ ������� copy_n:

int ints[] = {1, 2, 3, 4};
double doubles[4] = {};
copy_n(doubles, ints, 4); // ������ � ������� doubles ���������� �������� 1.0, 2.0, 3.0 � 4.0
Sample Input:
There are no tests for this task
Sample Output:
OK
*/

#include <cstddef>

// ��������� ������� copy_n ���� � ���������
// �������:
//   1. ������� ������
//   2. ������ ��������
//   3. ���������� ���������, ������� �����
//      �����������
//
// ��� ����� ����������� ������ ������� copy_n,
// ����� �� ����� ���� ������� ���, ��� ��������
// � �������.

template <typename T, typename U>
void copy_n(T * dest, U * source, size_t size){
    for (size_t i=0; i != size; ++i){
        dest[i] = (T) source[i];
    }
}

int main(){

    int ints[] = {1, 2, 3, 4};
    double doubles[4] = {};
    copy_n(doubles, ints, 4);
    return 0;
}
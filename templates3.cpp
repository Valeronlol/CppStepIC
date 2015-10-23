/*
��������� ������ ����� �����������. ���������� ��������� ��������� ValueHolder � ����� ������� ���������� T, �������������� �� ���������� ICloneable. ��������� ICloneable �������� ����� ���� ����������� ����� ICloneable* clone() const, ������� ������ ������� ��������� �� ����� �������, �� ������� �� ��� ������ (������ ������ ���� ������ � ����). ������ ValueHolder, ��� ������� ��� ��������, ������ ����� ���� �������� (�������� ��� data_) ���� T (��� ���� T ��������� ����������� �����������). �� ������� ���� data_ �������� (������� � ������ ������ �� ���� �����, ��� ValueHolder ������ ���� ����������).
Sample Input:
There are no tests for this task
Sample Output:
OK
*/

#include <iostream>
using namespace std;
/*
* ��������� ������ ����� �����������.
* ���������� ��������� ��������� ValueHolder � ����� ������� ���������� T,
* �������������� �� ���������� ICloneable.
* ��������� ICloneable �������� ����� ���� ����������� ����� ICloneable* clone() const,
* ������� ������ ������� ��������� �� ����� �������, �� ������� �� ��� ������ (������ ������ ���� ������ � ����).
* ������ ValueHolder, ��� ������� ��� ��������,
* ������ ����� ���� �������� (�������� ��� data_) ���� T (��� ���� T ��������� ����������� �����������).
* �� ������� ���� data_ �������� (������� � ������ ������ �� ���� �����, ��� ValueHolder ������ ���� ����������).
* */

struct ICloneable
{
    virtual ICloneable* clone() const = 0;
    virtual ~ICloneable() { }
};

// ������ ValueHolder � ������� ���������� T,
// ������ ��������� ���� �������� ���� data_
// ���� T.
//
// � ������� ValueHolder ������ ���� ���������
// ����������� �� ������ ��������� ���� T,
// ������� �������������� ���� data_.
//
// ������ ValueHolder ������ �������������
// ��������� ICloneable, � ���������� ���������
// �� ����� �������, ��������� � ����, �� ������
// clone.

template <typename T>
struct ValueHolder : ICloneable {

    ValueHolder(T value) : data_(value) {};

    ValueHolder * clone() const {
        return new ValueHolder(*this);
    }

    ~ValueHolder() {}

    T data_;
};

int main() {
    ValueHolder<int> *v0 = new ValueHolder<int>(1);
    ValueHolder<int> *v1 = v0->clone();
    cout << v0->data_ << " " << v1->data_<< " " << endl;
    return 0;
}
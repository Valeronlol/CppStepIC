/*
* ���������� ��������� ������� minimum, ������� ������� ����������� �������,
* ������� �������� � ���������� ���������� ������ Array,
* ��� ���� ������� �������� ������� Array ����� ���� ������������.
* ����� ���������� ������� ������������� ����,
* �� ���� ������� ��� �� ����� ������������ ����������,
* � �������� ����������� ����� ��������� ������� ��� ������ ������ � ������������� ���������� "()".
* ������� ������ ������� minimum:
bool less(int a, int b) { return a < b; }
struct Greater { bool operator()(int a, int b) { return b < a; } };
Array<int> ints(3);
ints[0] = 10;
ints[1] = 2;
ints[2] = 15;
int min = minimum(ints, less); // � min ������ ������� ����� 2
* */

#include <cstddef>

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array(const Array& other);
    ~Array();
    Array& operator=(Array other);
    void swap(Array &other);
    size_t size() const;
    T& operator[](size_t idx);
    const T& operator[](size_t idx) const;

private:
    size_t size_;
    T *data_;
};

template<class T, class Comparator>
T minimum(Array<T> & ar, Comparator comp){
    T result = ar[0];
    for (size_t i=1; i != ar.size(); ++i){
        if (comp(ar[i], result)){
            result = ar[i];
        }
    }
    return result;
};
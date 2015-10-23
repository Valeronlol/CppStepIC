/*
��������� ����� Array ����� ������� ������� ������ ����,
��� �������� �������� ����������� �����������,
� ��� ����� � ������ Array, ��������, Array< Array<int> >.
������� ����������� ����� ���� ������������.
�������� ��������� ������� (��� ���������) flatten,
������� ��������� �� ���� ����� "�����������" Array ����������� ������� ������� �����������
� ������� � ����� out ����� ������ ��� ��������,
���������� �� ����� ������ ������.
������� ������ ������� flatten:
Array<int> ints(2, 0);
ints[0] = 10;
ints[1] = 20;
flatten(ints, std::cout); // ������� �� ����� ������ "10 20"
Array< Array<int> > array_of_ints(2, ints);
flatten(array_of_ints, std::cout); // ������� �� ����� ������ "10 20 10 20"
Array<double> doubles(10, 0.0);
flatten(doubles, std::cout); // �������� ������ �� ������ ��� ���� int
Note: ���������� � ����������� ���������� ������� ����� �������������� ����������� ��������,
�. �. ��� ��� ��������� "10 20" ����� ��� �� ������, ��������, ������� "   10 20   ", �� �� ����� "1020".
Hint: ��������� ������� ���� ����� �����������,
�� ���������� ��������� ������� ����� ������� �������� �����������.
*/
#include <iostream>
#include <cstddef>

template <typename T>
class Array
{

public:
    explicit Array(size_t size = 0, const T& value = T()) : size_(size), data_(new T[size]) {
        for (size_t i = 0; i != size_; ++i){
            data_[i] = value;
        }
    }
    Array(const Array & obj) : size_(obj.size_), data_(new T[obj.size_]) {
        for (size_t i = 0; i != size_; ++i){
            data_[i] = obj.data_[i];
        }
    }
    Array& operator=(const Array & obj){
        if (this != &obj) {
            delete [] data_;
            size_ = obj.size_;
            data_ = new T[size_];
            for (size_t i = 0; i != size_; ++i) {
                data_[i] = obj.data_[i];
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }
    T& operator[](size_t i) {
        return data_[i];
    }
    const T& operator[](size_t i) const {
        return data_[i];
    }
    ~Array() {
        delete[] data_;
    }

private :
    size_t size_ ;
    T * data_ ;
};

template <typename Type>
void flatten(const Array<Type>& array, std::ostream& out)
{
    for (size_t i=0; i != array.size(); ++i){
        out << array[i] << " ";
    }
}
template <typename Type>
void flatten(const Array< Array<Type> >& array, std::ostream& out)
{
    for (size_t i=0; i != array.size(); ++i){
        flatten(array[i], out);
    }
}

int main(){

    Array<int> ints(2, 0);
    ints[0] = 10;
    ints[1] = 20;
    flatten(ints, std::cout); // ������� �� ����� ������ "10 20"
    Array< Array<int> > array_of_ints(2, ints);
    flatten(array_of_ints, std::cout); // ������� �� ����� ������ "10 20 10 20"
    Array<double> doubles(10, 0.0);
    flatten(doubles, std::cout);

    return 0;
}
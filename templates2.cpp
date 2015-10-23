/*
� ���������� ������ ��������������, ��� ��� ���� T ��������� �������� ������������ ��� �� ��� �� ����� (��������, ��� ����������� ����� �� �� �����). ��� �������� ��������� ������� ����������� (����� Array � �� ������) ������� ��������� �������������� ���������� � ����� ��������� ����������. ������� �������� ������, ���������� ����� Array �� ��������� �� ��, ��� ��� ���� T ��������� �������� ������������. Hints: ����������� placement new � ����� ����� ����������� (�������� ���� 3.4), ����� ��������� � ���������� �������, ������������ ��������� ����������� ������ ����� � ������� new char[N * sizeof(T)], ��� N - ���������� ��������� �������.

Sample Input:
There are no tests for this task
Sample Output:
OK
*/

#include <cstddef>
template <typename T>
class Array
{
    // ������ ��������:
    //
    // Array(size_t size, const T& value = T())
    //   ����������� ������, ������� �������
    //   Array ������� size, ����������� ����������
    //   value ���� T. �������� ��� � ���� T ����
    //   �����������, ������� ����� ������� ���
    //   ��� ����������, ���� �� ��� �� �����.
    //
    // Array()
    //   ����������� ������, ������� ����� �������
    //   ��� ����������. ������ ��������� ������
    //   Array.
    //
    // Array(const Array &)
    //   ����������� �����������, ������� �������
    //   ����� ���������. ��� ���� T ��������
    //   ����������� �� ���������.
    //
    // ~Array()
    //   ����������, ���� �� ��� ���������.
    //
    // Array& operator=(...)
    //   �������� ������������.
    //
    // size_t size() const
    //   ���������� ������ ������� (����������
    //                              ��������).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   ��� ������ ��������� ������� �� �������.

    public:
    Array(size_t size, const T& value = T()) {
        size_ = size;
        data_ = (T*) new char[size_ * sizeof(T)];
        for (size_t i = 0; i != size_; ++i){
            new (data_ + i) T(value);
        }
    }
    Array() {
        size_ = 0;
//        data_ = (T*) new char[size_ * sizeof(T)];
        data_ = 0;
    }
    Array(const Array & obj) {
        size_ = obj.size();
        data_ = (T*) new char[size_ * sizeof(T)];
        for (size_t i = 0; i != size_; ++i) {
            new (data_ + i) T(obj[i]);
        }
    }
    Array& operator=(const Array & obj){
        if (this != &obj) {
            mem_free();
            size_ = obj.size();
            data_ = (T*) new char[size_ * sizeof(T)];
            for (size_t i = 0; i != size_; ++i) {
                new (data_ + i) T(obj[i]);
            }
        }
        return *this;
    }

    size_t size() const {
        return size_;
    }
    T& operator[](size_t i) {
        //return data_[i]; �����������:
        return *(data_ + i);
    }
    const T& operator[](size_t i) const {
        //return data_[i]; �����������:
        return *(data_ + i);
    }
    ~Array() {
        mem_free();
    }

    void mem_free(){
        for (size_t i = 0; i != size_; ++i) {
            data_[i].~T();
        }
        // ������ �������� �����!!
        delete [] (char *) data_;
    }

    private :
        size_t size_ ;
        T * data_ ;
};

struct NonCopyable {
    // copy and assignment not allowed
    NonCopyable(const int value ): value_(value) {};
    NonCopyable& operator=(const NonCopyable & obj) = delete;
private:
    int value_;
};
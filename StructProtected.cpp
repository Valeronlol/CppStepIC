/*
��� ��� ����� Foo:

struct Foo {
    void say() const { std::cout << "Foo says: " << msg << "\n"; }
protected:
    Foo(const char *msg) : msg(msg) { }
private:
    const char *msg;
};
��� �����, ��������� ������ �� ����� ����� ��� ������������ � "�������" ����������� ������. �� ��� ����� ����� ������ ����� ������, ����� �������� ��� � ������� say_foo:

void foo_says(const Foo& foo) { foo.say(); }
� ���� ������� ��� ����� ����������� ������� get_foo (��������� ������� �������� �� ���������� � ������� ���������, ��� ����� �������� � ������� �� ��������������) ���, ����� ��������� ��� �������������� � �������:

foo_says(get_foo(msg));
��� msg � ������������ C-style ������. 

���������� � ����������: ��� ���������� ������� ��� ��������� ������� ����� ��������������� ������� � ������. ��������� �������� ����������� ������ Foo ��� ������� foo_says. ������� ��� �������� ���-���� �� �����. ������������� ������� main �� �����.
 */

/* ���� ��� ������ ����������� ��� �������� ����� Foo � ������� foo_says.
 * �� ����� ��� ����������������� �/��� ������.
 *
 * #include <iostream>
 *        
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 * 
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// ��� ����� ���������� ������� get_foo, ��� ������� � �������,
// ����� �������������� � ������� ��� ��������� ��������� ���:
//
// foo_says(get_foo("Hello!"));


Foo get_foo(const char *msg) {
    struct Foo1 : Foo {
        public:
        Foo1(const char *msg) : Foo(msg) { }
    };
    
    //��������� ������ ���������, � �������� � �������� ��������� msg � ��� ����������.
    Foo1 f = Foo1(msg);
    return f;
}
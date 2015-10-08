/*
� ���� ������� ��� ������������ ����������� �������� ������� Expression ��� ������������� �������������� ���������. ����������, ��� ����� ���������� ��� ������: Expression � ������� ����� ��������, Number � ��� ������������� ����� � BinaryOperation � ����� ����������� �������� �������� (+, �-, * ��� /).

����� Number ������ ������� �������� ���� double.

����� BinaryOperation ������ ������� ��������� �� ����� � ������ ��������, ������� ���� �������� ��������������� �����������, � ����� ��� �������� (+, �-, * ��� /), ������� ����� ��� ���� ����������.

�� ���� ������� ������ ���� ����� evaluate, ������� ���������� �������� ���� double � �������� ���������������� ��������������� ���������, ��������, �������� ���������� ���� Number � ��� �����, ������� �� ������, � ���� � ��� ���� ������ BinaryOperation � ��������� +, �� ����� ��������� �������� ������ � ������� �������� � ������� �� �����.

� ������ ������� ��� ����� ���������� �������� ����� virtual ���, ��� ��� ����������, ���������� ����� evalute ���, ��� ��� �� �������, � ����� ����������� �����������, ��� ��� ��� �����.

��� ���������� ����� ������� ������, ��� ��� ����������� ������� BinaryOperation �� �������� �� ����������� ������ � ������� ��������� (�������������, ��� ��� �������� � ������������ ������).

���������� � ����������: ��� ���������� ����� ������� �� ����� ������� ��� �������� ���-����. �� ������ �������� ����� ��������������� �������, ������ ��� ������, �� �� ����� ������������� ������� main.
*/

struct Expression
{
    
    virtual double evaluate() const = 0;
    virtual ~Expression() {};
};

struct Number : Expression
{
    
    Number(double value) : value(value) {}
    ~Number() {};
    double evaluate() {return value;}
    virtual double evaluate() const {return value;}
    

private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      ����� op ��� ���� �� 4 ��������: '+', '-', '*' ��� '/', ��������������� ���������,
      ������� ��� ����� �����������.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    ~BinaryOperation() {
        delete left;
        delete right;   
    }

    virtual double evaluate() const {
        
        if (op == '+') {
            return (left->evaluate() + right->evaluate());
        } else if (op == '-') {
            return (left->evaluate() - right->evaluate());
        } else if (op == '*') {
            return (left->evaluate() * right->evaluate());
        } else if (op == '/') {
            return (left->evaluate() / right->evaluate());
        }
        
    }

private:
    Expression const * left;
    Expression const * right;
    char op;
};
/*
��� ��� ����� Rational, ������� ��������� ������������ �����. � ��� ���������� ������ add, sub, mul � div, ������� ���������� � ���� �����, �������� �����, �������� �� ����� � ����� �� ����� ��������������. ����� ���� � ��� ��������� ����� neg, ������� ������ ���� �� ���������������. 

��� ����� ���������� ��������� +=, -=, *=, /= ��� ������ Rational ���, ����� ��� ����� ��������� � �������� ���������� � ������� ���� Rational � ����� �����. ����� ���� ��� ���������� ���������� ��������� �������� ������ � ����� ��� ������ Rational.
*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator *= (Rational rational) { 
        this->mul(rational); 
        return *this; 
    };
    
    Rational& operator /= (Rational rational) { 
        this->div(rational); 
        return *this; 
    };
    
    
    Rational operator + () const {
        return Rational(numerator_,denominator_);
    };
    
    Rational& operator += (Rational rational) { 
        this->add(rational); 
        return *this; 
    };
    
    Rational operator - () const {
        return Rational(-numerator_,denominator_);
    };
    
    Rational& operator -= (const Rational& rational) { 
        this->add(-rational); 
        return *this; 
    };


     
private:
    int numerator_;
    unsigned denominator_;
};




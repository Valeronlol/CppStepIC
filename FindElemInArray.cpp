//������� ��� ������ �������� � �������:
bool contains (int * m , int size , int value ) {
    for ( int i = 0; i != size ; ++ i )
        if ( m [ i ] == value )
            return true ;
    return false ;
}

bool contains (int * p , int * q , int value ) {
    for (; p != q ; ++ p )
        if (* p == value )
             return true ;
    return false ;
}

//������� ��� ������ ��������� � �������: ������ �������� �� �������
int max_element (int * p , int * q ) {
    int max = * p ;
    for (; p != q ; ++ p )
        if (* p > max )
            max = * p ;
    return max ;
}

//������� ��� ������ ��������� � �������: ������ ��������� �� �������
int * max_element ( int * p , int * q ) {
    int * pmax = p ;
    for (; p != q ; ++ p )
        if (* p > * pmax )
            pmax = p ;
    return pmax ;
}

//������� ��� ������ ��������� � �������: ������ �������� ����� ���������
bool max_element ( int * p , int * q , int * res ) {
    if ( p == q )
        return false ;
    *res = *p ;
    for (; p != q ; ++ p )
        if (* p > * res )
            *res = *p ;
    return true ;
}

//������� ��� ������ ��������� � �������: ������ �������� ����� ��������� �� //���������
bool max_element ( int * p , int * q , int ** res ) {
    if ( p == q )
       return false ;
    *res = p;
    for (; p != q ; ++ p )
        if (* p > ** res )
            * res = p;
    return true ;
}
#include "functions.h"



int main()
{
    float a=1,b=12,c=36;
    //scanf("%f %f %f", a, b, c);
   // printf ("%f %f %f", a, b, c);
    if (is_it_quadratic_equation(a,b,c)==0)
    {
        solve_not_quadratic(a,b,c);
        return 0;
    }
    else
    {
        float discriminate = solve_discriminate(a,b,c);
        solve_after_discriminate(a,b,c,discriminate);
        return 0;
    }
}
/*
    1)
    ����������, ���������� �� ���������
    2)
    ������ �� ����������, ���� ��� ������
    3)
    ���� ��������� ����������, ����� ������������
    4)
    �������� ������������ � 0, ������ �� ����� ������� ������� �� 3 ������
    5)
    ������ ������


*/

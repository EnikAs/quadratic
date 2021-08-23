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
    ќпределить, квадратное ли уравнение
    2)
    –ешить не квадратное, если оно таково
    3)
    ≈сли уравнение квадратное, найти дискриминант
    4)
    —равнить дискриминант с 0, исход€ из этого разбить рещение на 3 случа€
    5)
    –ешить случаи


*/

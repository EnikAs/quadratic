#include "functions.h"

int main()
{
    float a=0,b=0,c=0;
    scan_coefficients(&a,&b,&c);
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

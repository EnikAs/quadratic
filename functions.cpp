#include "functions.h"

double solve_discriminate (double a, double b, double c)
{
    double discriminate = 0;
    discriminate = b * b - 4 * a * c;
    return discriminate;
}

int scan_coefficients (double* a, double* b, double* c)
{
    int nInput = scanf("%lg %lg %lg", a, b, c);
    assert (std::isfinite (*a));
    assert (std::isfinite (*b));
    assert (std::isfinite (*c));
    if (nInput == 3) return CORRECT_INPUT;
    else return UNCORRECT_INPUT;
   //printf ("\n%lg %lg %lg",a ,b ,c);
}

int solve_linear (double b, double c, double* x)
{
    if (check_zero_value (b) == ZERO)
    {
        if (check_zero_value(c) == NOT_A_ZERO)
            {
                return NO_SOLUTIONS;
            }
        else return INFINITE_NUMBER_OF_SOLUTIONS;
    }
    else
    {
        *x = -c /b ;
        if (check_zero_value(c) == ZERO) *x = 0;
        return ONE_SOLUTION;
    }

}

int solve_quadratic (double a, double b, double c, double* x1, double* x2)
{
        double discriminate = solve_discriminate (a, b, c);
        double sqrt_disc = sqrt(discriminate);
        //printf ("Discriminate is %lg\n", discriminate);
        if (discriminate > 0)
        {
           *x1 = (-b + sqrt_disc)/2 /a;
           *x2 = (-b - sqrt_disc)/2 /a;
           return TWO_SOLUTIONS;
        }
        else if (check_zero_value(discriminate))
        {
           *x1 = -b /2 /a;
           return ONE_SOLUTION;
        }
        else if (discriminate < 0)
        {
           return NO_SOLUTIONS;
        }
}

int check_zero_value (double value)
{
    if ( fabs(value) < EPSILON ) return ZERO;
    else return NOT_A_ZERO;
}

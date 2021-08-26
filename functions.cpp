#include "functions.h"

double solve_discriminate (double a, double b, double c)
{
    assert(std::isfinite(a));
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    double discriminate = NAN;
    discriminate = b * b - 4 * a * c;
    return discriminate;
}

int scan_coefficients (double* a, double* b, double* c)
{
    assert(a);
    assert(b);
    assert(c);

    int nInput = scanf("%lg %lg %lg", a, b, c);

    if (nInput == 3) return CORRECT_INPUT;
    else             return UNCORRECT_INPUT;
}

int solve_linear (double b, double c, double* x)
{
    assert(x);
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    if (check_zero_value(b) == ZERO)
    {
        if (check_zero_value(c) == NOT_A_ZERO)
        {
            return NO_SOLUTIONS;
        }
        else
            return INFINITE_NUMBER_OF_SOLUTIONS;
    }
    else
    {
        *x = -c / b;
        if (check_zero_value(c) == ZERO)
            *x = fabs(*x);

        return ONE_SOLUTION;
    }

}

int solve_quadratic (double a, double b, double c, double* x1, double* x2)
{
        assert(std::isfinite(a));
        assert(std::isfinite(b));
        assert(std::isfinite(c));
        assert(x1);
        assert(x2);
        assert(x1 != x2);
        if (check_zero_value(c) == ZERO)
        {
            *x1 = 0;
            int tmp_solution_counter = solve_linear(a, b, x2) + 1;
            return tmp_solution_counter;
        }






        double discriminate = solve_discriminate (a, b, c);

        if (compare_two_doubles(discriminate, 0) == SECOND_IS_BIGGER)
        {
            return NO_SOLUTIONS;
        }

        double sqrt_disc = sqrt(discriminate);
        double a_multiply_2 = 2 * a;

        if (compare_two_doubles(discriminate, 0) == FIRST_IS_BIGGER)
        {
           *x1 = (-b + sqrt_disc) / a_multiply_2;
           *x2 = (-b - sqrt_disc) / a_multiply_2;
           return TWO_SOLUTIONS;
        }
        else if (check_zero_value(discriminate))
        {
           *x1 = -b / a_multiply_2;
           return ONE_SOLUTION;
        }
        else
        {
           return NO_SOLUTIONS;
        }
}

int check_zero_value (double value)
{
    assert(std::isfinite(value));

    if (compare_two_doubles(fabs(value), EPSILON) == SECOND_IS_BIGGER)
        return ZERO;
    else
        return NOT_A_ZERO;
}

int compare_two_doubles (double val1, double val2)
{
    assert(std::isfinite(val1));
    assert(std::isfinite(val2));

    if (fabs(val1 - val2) < EPSILON) return EQUAL;
    else if (val1 - val2 > 0 )       return FIRST_IS_BIGGER;
    else                             return SECOND_IS_BIGGER;
}

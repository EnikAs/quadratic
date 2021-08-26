#include "functions.h"

int main()
{
    double a = NAN, b = NAN, c = NAN;
    int input_check = scan_coefficients(&a, &b, &c);
    if (input_check == UNCORRECT_INPUT)
    {
        printf ("Uncorrect input!");
        return 0;
    }
    assert (std::isfinite (a));
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    double x1 = NAN, x2 = NAN;
    int nSolutions = NAN;

    if (check_zero_value(a) == NOT_A_ZERO)
    {
    nSolutions = solve_quadratic (a, b, c, &x1, &x2);
    }
    else nSolutions = solve_linear (b, c, &x1);

    switch (nSolutions)
    {
    case NO_SOLUTIONS: printf ("There are no solutions");
        break;

    case ONE_SOLUTION: printf ("The only solution is: %lg",x1);
        break;

    case TWO_SOLUTIONS: printf ("x1 = %lg, x2 = %lg", x1, x2);
        break;

    case INFINITE_NUMBER_OF_SOLUTIONS: printf ("Any number is solution");
        break;

    default: printf ("ERROR!!! %d solutions", nSolutions);
        break;
    }

    return 0;
}

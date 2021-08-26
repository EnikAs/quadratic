#ifndef FUNCTION_LIB
#define FUNCTION_LIB

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <cassert>

const double EPSILON = 1e-6;

enum check_correct_input
{
    CORRECT_INPUT,
    UNCORRECT_INPUT
};

enum check_zero
{
    NOT_A_ZERO,
    ZERO
};
enum number_of_solutions {
    NO_SOLUTIONS,
    ONE_SOLUTION,
    TWO_SOLUTIONS,
    INFINITE_NUMBER_OF_SOLUTIONS
};

double solve_discriminate (double a, double b, double c);

int scan_coefficients (double* a, double* b, double* c);

int solve_quadratic (double a, double b, double c, double* x1, double* x2);

int solve_linear (double b, double c, double* x);

int check_zero_value (double value);

#endif

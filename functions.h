#include <stdio.h>
#include <ctype.h>
#include <math.h>


int ab (int a, int b);

float is_it_quadratic_equation (float a, float b, float c);

void solve_not_quadratic (float a, float b, float c);

float solve_discriminate (float a, float b, float c);

void solve_after_discriminate (float a, float b, float c, float discriminate);

void scan_coefficients (float* a, float* b, float* c)

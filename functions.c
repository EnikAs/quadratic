#include "functions.h"

float is_it_quadratic_equation (float a, float b, float c)
{
    if (a==0||(b==0&c==0))return 0.0;
    else return 1.0;
}

void solve_not_quadratic (float a, float b, float c)
{
    if (a!=0||(a==b==c==0))printf("The solution is: 0");
    else
        {
            float x = (-1)*c/b;
            printf("The solution is: %f.1",x);
        }
}

float solve_discriminate (float a, float b, float c)
{
 float discriminate =0;
    discriminate = b*b-4*a*c;
    return discriminate;
}

void solve_after_discriminate (float a, float b, float c, float discriminate)
{
    if (discriminate==0)
    {
        float x;
        x = (-1)*b/(2*a);
        printf("The solution is: %.1f",x);
    }
    else if (discriminate<0)
    {
        printf("No solutions!");
    }
    else if (discriminate>0)
    {
        float x1,x2;
        x1 = ((-1)*b+sqrt(discriminate))/(2*a);
        x2 = ((-1)*b-sqrt(discriminate))/(2*a);
        printf("\nThe solutions are: %.2f and %.2f",x1,x2);
    }
}

void scan_coefficients (float* a, float* b, float* c)
{
    scanf("%f %f %f", a, b, c);
}

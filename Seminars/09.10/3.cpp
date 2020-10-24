#include <stdio.h>
#include <math.h>

double sq_eq_solver (double a, double b, double c,double x1, double x2, double E);
double f (double a, double b, double c, double x);


int main ()
    {
    double  a = 0,
            b = 0,
            c = 0;

    double x1 = 0,
           x2 = 0;

    double  E = 0;

    printf("Enter a, b, c: ");

    scanf("%lg %lg %lg", &a, &b, &c);

    printf("a = %lg b = %lg c = %lg\n", a, b, c);

    printf("Enter the spacing where x is: ");

    scanf("%lg %lg", &x1, &x2);

    printf("x1 = %lg x2 = %lg\n", x1, x2);

    printf("Enter accuracy: ");

    scanf("%lg", &E);

    printf("E = %lg\n", E);

    printf("One of the roots of the equation x = %lg", sq_eq_solver(a, b, c, x1, x2, E));

    }

double f (double a, double b, double c, double x)
    {
    return (a*x*x + b*x + c);
    }

double sq_eq_solver (double a, double b, double c, double x1, double x2, double E)
    {
    double x = 0;
    do
        {

        x = (x1 + x2) / 2;

        printf("x = %lg\n", x);

        printf("f = %lg\n", f(a, b, c, x));

        if (f(a,b,c,x)*f(a,b,c,x1) > 0)
            x1 = x;

        else if (f(a,b,c,x)*f(a,b,c,x1) < 0)
            x2 = x;

        else
            return x;

        }while (fabs(f(a,b,c,x)) > E);

    return x;

    }




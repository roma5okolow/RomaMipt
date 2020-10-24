#include <stdio.h>
#include <math.h>

double my_sin (double x, double E);

int main()
    {

    double x = 0;
    double E = 0;

    printf("Enter x, E: ");

    scanf("%lg %lg", &x, &E);

    printf("my_sin x = %lg\n", my_sin(x, E));
    printf("   sin x = %lg", sin(x));

    return 0;
    }

double my_sin (double x, double E)
    {
    int i = 0;

    double sin_x = x;
    double q = x;

    do
    {

    i++;

    q *= -x*x/(2*i)/(2*i+1);

    sin_x += q;

    }while(fabs(q) > E);

    return sin_x;
    }

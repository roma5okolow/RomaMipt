#include <stdio.h>
#include <math.h>

int main()
    {

    float x, y, a, b, h, z, h1;

    printf("Enter x0, x max, delta x, y0, delta y: ");

    scanf("%g %g %g %g %g", &a, &b, &h, &z, &h1);

    for (x = a, y = z; x <= b; x += h,y += h1)

        printf("sin(x + y) = %lg\n", sin(x+y));

    return 0;
    }

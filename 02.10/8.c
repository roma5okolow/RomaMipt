#include <stdio.h>
#include <math.h>

struct params
    {
    double x;
    double y;
    double r;
    };

int point_in_circle (double x, double y, struct params circle);

int main()
    {
    struct params cir_1 = {5,5,2};

    struct params cir_2;

    printf("Parameters of the first circle: x1 = %lg, y1 = %lg, r1 = %lg\n", cir_1.x, cir_1.y, cir_1.r);

    printf("Enter parameters of the second circle: ");

    scanf("%lg %lg %lg", &cir_2.x , &cir_2.y, &cir_2.r);

    double x = 0,
           y = 0;

    printf("Enter x and y: ");

    scanf ("%lg %lg", &x, &y);

    if (point_in_circle(x, y, cir_1) && point_in_circle(x, y, cir_2))
        printf("The point is in crossing\n");

    else if (point_in_circle(x, y, cir_1))
        printf("The point is only in circle 1\n");

    else if (point_in_circle(x, y, cir_2))
        printf("The point is only in circle 2\n");

    else
        printf("The point is outside the circles\n");

    return 0;
    }

int point_in_circle (double x, double y, struct params circle)
    {

    if (pow (x - circle.x, 2) + pow (y - circle.y, 2) <= pow(circle.r, 2))
        return 1;

    return 0;
    }


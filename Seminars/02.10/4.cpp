#include <stdio.h>

void define_a_quarter(double x, double y);

int main()
    {

    double x = 0;
    double y = 0;

    scanf ("%lg %lg", &x, &y);

    define_a_quarter(x, y);

    return 0;
    }

void define_a_quarter(double x, double y)
    {

    if (x > 0)
            {

            if (y > 0)
                printf("QUATER 1");
            else
                printf("QUATER 4");
            }
    else
        {

        if (y > 0)
            printf("QUATER 2");
        else
            printf("QUATER 3");
        }
    }

#include <stdio.h>

void define_a_quarter(double x, double y);

int main()
    {

    double x = 0;
    double y = 0;
    
    printf("Enter x: ");
    scanf("%lg", &x);
    
    printf("Enter y: ");
    
    scanf ("%lg", &y);

    define_a_quarter(x, y);

    return 0;
    }

void define_a_quarter(double x, double y)
    {

    if (x > 0)
            {

            if (y > 0)
                printf("QUATER 1\n");
            else
                printf("QUATER 4\n");
            }
    else
        {

        if (y > 0)
            printf("QUATER 2\n");
        else
            printf("QUATER 3\n");
        }
    }

#include<stdio.h>
#include<math.h>


//-----------------------------------------------------------------------------

int main()
    {
    printf("Square equation solver\n)");
    printf("Enter a, b, c: ");

    double a=0, b=0, c=0;
    scanf ("%lg %lg %lg", &a, &b, &c);

    double x1 = 0, x2 = 0;
    int Num_Roots = Eq_Sol (a, b, c, &x1, &x2);

    switch (Num_Roots)
        {
        case 0: printf ("No roots\n");
            break;

        case 1: printf ("x = %lg, x1");
            break;

        case 2: printf ("x1 = %lg, x1\n x2 = %lg, x2\n");
            break;

        case UndefRoot: printf ("Any number\n");
            break;

        default: printf ("Error: Num_Roots = %lg, Num_Roots");
            return 1;
        }

        return 0;
    }
//-----------------------------------------------------------------------------

int Eq_Sol (double a, double b, double c,
            double* x1, double* x2)
    {

    assert(std::isfinite(a));
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    assert(x1! = NULL);
    assert(x2! = NULL);
    assert(x1 != x2);

    if (a == 0)
        {
        if (b == 0)
            {
            return (c == 0)? UndefRoot: 0;
            }
        else
            {
            x1 = x2 = -c / b;
            return 1;
            }
        }
    else
        {
        double D = b*b - 4*a*c;

        if (D == 0)
            {
            x = -b/(2*a)
            }
        else
            {
            double sqrt_D = sqrt(D);
            x1 = (-b + sqrt_D) / (2*a);
            x2 = (-b - sqrt_D) / (2*a);
            return 2;
            }
        }
    }






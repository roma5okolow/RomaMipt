#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

#define UNDEF_ROOT -1

//-----------------------------------------------------------------------------
//! Solves a square equation ax2+bx+c = 0
//! @param [in]  a    a - coefficient
//! @param [in]  b    b - coefficient
//! @param [in]  c    c - coefficient
//! @param [out] x1   Pointer to the first root
//! @param [out] x2   Pointer to the second root
//!
//! return number of roots
//!
//! in case of infinite number of roots,
//! returns UNDEF_ROOT.
//-----------------------------------------------------------------------------

int Eq_Sol (double a, double b, double c,
            double* x1, double* x2)
    {

    printf("%p\n", x1);

    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);



    if (a == 0)
        {
        if (b == 0)
            {
            return (c == 0) ? UNDEF_ROOT: 0;
            }
        else
            {
            *x1 = *x2 = -c / b;
            return 1;
            }
        }
    else
        {
        double D = b*b - 4*a*c;

        if (D == 0)
            {
            *x1 = *x2 = -b / (2*a);
            }
        else
            {
            *x1 = (-b + sqrt(D)) / (2*a);
            *x2 = (-b - sqrt(D)) / (2*a);
            return 2;
            }
        }
    }

//-----------------------------------------------------------------------------

int Print_Roots (int Num_Roots, double x1, double x2)
    {
    switch (Num_Roots)
        {
        case 0: printf ("No roots\n");
            break;

        case 1: printf ("x = %lg", x1);
            break;

        case 2: printf ("x1 = %lg\nx2 = %lg\n", x1, x2);
            break;

        case UNDEF_ROOT: printf ("Any number\n");
            break;

        default: printf ("Error: Num_Roots = %lg", Num_Roots);
            return 1;
        }
    }

//-----------------------------------------------------------------------------

int main()
    {
    printf("Square equation solver\n)");
    printf("Enter a, b, c: ");

    double a=0, b=0, c=0;
    scanf ("%lg %lg %lg", &a, &b, &c);

    double x1 = 0, x2 = 0;
    printf("%p\n", &x1);
    int Num_Roots = Eq_Sol (a, b, c, &x1, &x2);

    int Print_Roots;

        return 0;
    }
//-----------------------------------------------------------------------------








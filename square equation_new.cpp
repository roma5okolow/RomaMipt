#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

#define UNDEF_ROOT -1
#define BORDER 1e-20

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
            double* x1, double* x2);

//-----------------------------------------------------------------------------
//! Print roots of equation
//! @param [in]  Num_Roots
//! @param [in]  x1
//! @param [in]  x2
//!
//!
//! in case of infinite number of roots,
//! returns UNDEF_ROOT.
//-----------------------------------------------------------------------------


void Solution_Checker();


void Print_Roots (int Num_Roots, double x1, double x2);

//-----------------------------------------------------------------------------

int main()
    {

    Solution_Checker();

    return 0;
    printf("Square equation solver\n");
    printf("Enter a, b, c: ");

    double a = 0, b = 0, c = 0;

    int GoodRead = 0;
    do
    {
        printf("Enter a, b, c: ");
        GoodRead = scanf ("%lg %lg %lg", &a, &b, &c);
        fflush(stdin);

    }while (GoodRead != 3);

    double x1 = 0, x2 = 0;

    int Num_Roots = Eq_Sol (a, b, c, &x1, &x2);

    Print_Roots(Num_Roots, x1, x2);

    return 0;
    }


int Eq_Sol (double a, double b, double c,
            double* x1, double* x2)
    {

    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);



    if (BORDER >= a && a >= -BORDER)
        {
        if (BORDER >= b && b >= -BORDER)
            {
            return (BORDER >= c && c >= -BORDER) ? UNDEF_ROOT: 0;
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

        if (BORDER >= D && D >= -BORDER)
            {
            *x1 = *x2 = -b / (2*a);
            return 1;
            }
        else if(D <= -BORDER)
            return 0;

        else
            {
            *x1 = (-b + sqrt(D)) / (2*a);
            *x2 = (-b - sqrt(D)) / (2*a);
            return 2;
            }
        }
    }

void Solution_Checker()
    {

    double x1 = 0, x2 = 0;

    #define CHECKER                                                                          \
        if ((Eq_Sol (a, b, c, &x1, &x2)) != exp_Num_Roots || x1 != exp_x1 || x2 != exp_x2)   \
            printf("Error, false roots (a = %d, b = %d, c = %d)\n", a, b, c);                \
        else                                                                                 \
            {                                                                                \
            printf("True\n");                                                                \
            x1 = x2 = 0;                                                                     \
            }

    int    exp_Num_Roots =  2;
    double exp_x1        = -1;
    double exp_x2        = -2;
    int    a             =  1;
    int    b             =  3;
    int    c             =  2;

    CHECKER;

    exp_Num_Roots =    1;
    exp_x1        = -0.5;
    exp_x2        = -0.5;
    a             =    4;
    b             =    4;
    c             =    1;

    CHECKER;

    exp_Num_Roots =    0;
    exp_x1        =    0;
    exp_x2        =    0;
    a             =    2;
    b             =    1;
    c             =    5;

    CHECKER;

    exp_Num_Roots =    UNDEF_ROOT;
    exp_x1        =    0;
    exp_x2        =    0;
    a             =    0;
    b             =    0;
    c             =    0;

    CHECKER;
    }



void Print_Roots (int Num_Roots, double x1, double x2)

    {

    assert(isfinite(x1));
    assert(isfinite(x2));

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

        default: printf ("Error: Num_Roots = %d", Num_Roots);
            break;
        }
    }

//-----------------------------------------------------------------------------










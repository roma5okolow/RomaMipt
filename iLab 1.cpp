#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

#define UNDEF_ROOT -1
#define BORDER 1e-10

//-----------------------------------------------------------------------------
//! Solves a square equation bx+c = 0
//! @param [in]  b    b - coefficient
//! @param [in]  c    c - coefficient
//! @param [out] x1    Pointer to the first root
//!
//! return number of roots
//!
//! in case of infinite number of roots,
//! returns UNDEF_ROOT.
//-----------------------------------------------------------------------------

int Lin_Eq_Sol(double b, double c,
               double* x1);

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

int Sq_Eq_Sol (double a, double b, double c,
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

//-----------------------------------------------------------------------------

void Print_Roots (int Num_Roots, double x1, double x2);

//-----------------------------------------------------------------------------

int main()
    {
    printf("Square equation solver\n");

    double a = 0, b = 0, c = 0;

    int GoodRead = 0;
    do
    {
        printf("Enter a, b, c: ");
        GoodRead = scanf ("%lg %lg %lg", &a, &b, &c);
        fflush(stdin);

    }while (GoodRead != 3);

    double x1 = 0, x2 = 0;

    int Num_Roots = Sq_Eq_Sol(a, b, c, &x1, &x2);

    Print_Roots(Num_Roots, x1, x2);

//    Solution_Checker();         /* Checks function Sq_Eq_Sol*/

    return 0;
    }

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

int Lin_Eq_Sol(double b, double c,
               double* x1)
    {

    if (b <= BORDER && b >= -BORDER)
        return (c <= BORDER && c >= -BORDER) ? UNDEF_ROOT : 0;

    else
        {
        *x1 = -c / b;
        if (*x1 <= BORDER && *x1 >- BORDER)
            *x1 = 0;
        return 1;
        }
    }

//-----------------------------------------------------------------------------

int Sq_Eq_Sol (double a, double b, double c,
               double* x1, double* x2)
    {


    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);


    double D = b*b - 4*a*c;

    if (BORDER >= a && a >= -BORDER)
        return Lin_Eq_Sol(b, c, x1);

    else
        if (BORDER >= D && D >= -BORDER)
            {
            *x1 = *x2 = -b / (2*a);
            return 1;
            }

        else if(D <= -BORDER)
            {
            return 0;
            }

        else
            {
            *x1 = (-b + sqrt(D)) / (2*a);
            *x2 = (-b - sqrt(D)) / (2*a);
            return 2;
            }
    }

//-----------------------------------------------------------------------------

void Print_Roots (int Num_Roots, double x1, double x2)

    {

    assert(isfinite(x1));
    assert(isfinite(x2));

    switch (Num_Roots)
        {
        case 0: printf ("No roots\n");
            break;

        case 1: printf ("x = %lg\n", x1);
            break;

        case 2: printf ("x1 = %lg\nx2 = %lg\n", x1, x2);
            break;

        case UNDEF_ROOT: printf ("Any number\n");
            break;

        default: printf ("Error: Num_Roots = %d\n", Num_Roots);
            break;
        }
    }

//-----------------------------------------------------------------------------

void Solution_Checker()
    {
    FILE *input;
    input = fopen("in.txt", "r");

    double x1 = 0, x2 = 0;
    int    exp_Num_Roots;
    double exp_x1;
    double exp_x2;
    double a;
    double b;
    double c;

    #define CHECKER                                                                           \
        if ((Sq_Eq_Sol (a, b, c, &x1, &x2)) != exp_Num_Roots || x1 != exp_x1 || x2 != exp_x2) \
            printf("Error, false roots (a = %d, b = %d, c = %d)\n", a, b, c);                 \
        else                                                                                  \
            {                                                                                 \
            printf("True\n");                                                                 \
            x1 = x2 = 0;                                                                      \
            }

    while (fscanf(input, "%d %lg %lg %lg %lg %lg", &exp_Num_Roots, &exp_x1, &exp_x2, &a, &b, &c) > 0)
        CHECKER;
    }

//-----------------------------------------------------------------------------

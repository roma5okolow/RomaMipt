#include <stdio.h>

int main()
    {

    double M = 0;
    int    N = 0;

    printf("Enter mass measure from 1 to 5: ");
    scanf("%d", &N);

    printf("Enter mass in your measure: ");
    scanf("%lg", &M);

    switch(N)
        {
        case (1) : printf("M = %lg kg\n", M);
            break;

        case (2) : printf("M = %lg kg\n", M * 1e-6);
            break;

        case (3) : printf("M = %lg kg\n", M * 1e-3);
            break;

        case (4) : printf("M = %lg kg\n", M * 1e3);
            break;

        case (5) : printf("M = %lg kg\n", M * 1e2);
            break;

        }

    return 0;
    }

#include <stdio.h>

int multiply (int x);

int main()
    {

    int x = 0;

    printf("%d\n", multiply (x));

    return 0;

    }

int multiply (int x)
    {

    printf("Enter x: ");

    scanf("%d", &x);

    return x * ((x > 0) ? 5 : 6);

    }

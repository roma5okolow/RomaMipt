#include <stdio.h>

int main()
    {
    int a[2][3] = {{4,5,6}, {7,8,9}};

    int x = 0;
    int y = 0;

    for (y = 0; y < 2; y++)
        {
        for (x = 0; x < 3; x++)
            printf ("%d %d ", a[y][x], &(a[y][x]));

        printf("\n");
        }
        
    printf("a         = %d\n", a);
    printf("a+1       = %d\n", a+1);
    printf("*a+1      = %d\n", *a+1);
    printf("*(a+1)    = %d\n", *(a+1));
    printf("*(*a+1)   = %d\n", *(*a+1));
    printf("*(*(a+1)) = %d\n", *(*(a+1)));
    printf("**a       = %d\n", **a);

    }

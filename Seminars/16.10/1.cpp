#include <stdio.h>

int main()
    {
    int a[2][3] = {{4,5,6}, {7,8,9}};

    int x = 0;
    int y = 0;

    for (y = 0; y < 2; y++)
        {
        for (x = 0; x < 3; x++)
            printf ("%u %u ", a[y][x],&a[y][x]);

        printf("\n");
        }
    printf("a[0][0] = *a = %u\n", *a);
    printf("a[1][2] = *(a + 1*3 + 2)", *(a + 1*3 + 2));


    /*printf("a+1       = %u\n", a+1);
    printf("*a+1      = %u\n", *a+1);
    printf("*(a+1)    = %u\n", *(a+1));
    printf("*(*a+1)   = %u\n", *(*a+1));
    printf("*(*(a+1)) = %u\n", *(*(a+1)));
    printf("**a       = %u\n", **a);
    */
    }

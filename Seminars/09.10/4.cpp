#include <stdio.h>

int main()
    {
    long int left  = 1,
             right = 1,
             p = 0,
             n = 1;


    do
        {

        p = p * 10 + n;

        left = 9 * p + (n + 1);

        right = right * 10 + 1;

        printf("n = %2d p = %10d left = %10d right = %d\n", n, p, left, right);

        n++;

        }while(left == right & n < 10);
    }

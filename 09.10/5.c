#include <stdio.h>
#include <limits.h>

int main()
    {
    int sum_posit = 0,
        sum_negat = 0,
        x_max = INT_MIN,
        x_min = INT_MAX,
        num = 0,
        x = 0;

    while(scanf("%d", &x) == 1)
        {
        if (x > 0)
            sum_posit += x;
        else 
            sum_negat += x;
        if (x > x_max)
            x_max = x;
        if (x < x_min)
            x_min = x;
        num++;
        }    
    printf("x_max = %d\nx_min = %d\nsum_posit = %d\nsum_negat = %d\nnum = %d\n", x_max, x_min, sum_posit, sum_negat, num);

    }

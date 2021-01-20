#include <stdio.h>
#include <limits.h>

int main()
    {
    int i = 0;
    int j = 0;
    int row[100] = {0};
    int x_max = INT_MIN;
    int x_min = INT_MAX;
    int i_min = 0;
    int i_max = 0;
    int swap  = 0;
    
    for(i = 0;scanf("%d", row+i) == 1; i++)
        {
        if (row[i] > x_max)
            {
            x_max = row[i];
            i_max = i;
            }
        if (row[i] < x_min)
            {
            x_min = row[i];
            i_min = i;
            }
        }
    for (j = 0; j < i; j++)
        {
        printf("%d ", row[j]);
        }
    printf("\n");
    
    swap = row[i_max];
    row[i_max] = row[i_min];
    row[i_min] = swap;
    
    
    
    }

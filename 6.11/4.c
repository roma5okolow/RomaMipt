#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int min(int* a, int N);

#define n 20

int main()
    {
    int array[n];
    
    srand(time(NULL));
    
    int i;
    for(i = 0; i < 20; i++)
        {
        array[i] = rand()%100;
        printf("%d ", array[i]);
        }
        
    printf("\nmin num = %d\n", min(array, n));
    return 0;
    }
    
int min(int* a, int N)
    {
    int min_num = INT_MAX;
    
    int i;
    for(int i = 0; i < n; i++)
        if (a[i] <= min_num)
            min_num = a[i];
    
    return(min_num);
    }

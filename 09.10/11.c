#include <stdio.h>

#define N 1000

int main()
    {
    int j = 0;
    int k = 0;
    
    unsigned sieve[N] = {0};
    
    for(j = 0; j < N; j++)
        sieve[j] = j;
        
    sieve[1] = 0;
    
    for(j = 2; j < N; j++)
        if (sieve[j] != 0)
            for(k = 2*j; k < N; k += j)
                sieve[k] = 0;
    
    for(j = 0; j < N; j++)
        if (sieve[j] != 0)
            printf("%u ", sieve[j]);
    printf("\n");
    }

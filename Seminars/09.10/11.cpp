#include <stdio.h>

int main()
    {
    char sieve[100] = {0};

    int i = 0;
    int j = 0;

    sieve[1] = 1;

    for(i = 2; i*i < n+1; i++);
        {
        if(sieve[i] == 1) continue;
        for(j = i*i; j < n; j++)
            sieve[j] = 1;
        }

    }

#include <stdio.h>

unsigned long Fibo (int n);

int main()
    {
    printf("Enter number: ");
    
    int n;
    scanf("%d", &n);
    
    printf("Fibonacci number #%d  = %lu\n", n, Fibo(n));
    
    return 0;
    }
    
unsigned long Fibo (int n)
    {
    if (n == 1 || n == 2)
        return 1;
    
    else 
        return (Fibo(n - 1) + Fibo (n - 2));
    }

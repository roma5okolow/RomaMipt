#include <stdio.h>

int fact (int n);

int main()
    {
    printf("Enter n: ");
    
    int n;
    scanf("%d", &n);

    printf("n! = %d\n", fact(n));
    
    return 0;
    }
    
int fact(int n)
    {
    if (n == 0 || n == 1)
        return 1;
    
    else    
        return (n * fact(n-1));
    }

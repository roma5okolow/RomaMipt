#include <stdio.h>

void hanoi(int n, int i, int k);

int main()
    {
    printf("Enter number of rings: ");
    int num;
    scanf("%d", &num);
    
    hanoi(num, 1, 2);
    
    return 0;
    }
    
void hanoi(int n, int i, int k)
    {
    if (n == 1)
        printf("Move disc 1 from pin %d to %d\n", i, k);
    else
        {
        int tmp = 6 - i- k;
        hanoi(n-1, i, tmp);
        printf("Move disc %d from pin %d to %d\n", n, i, k );
        hanoi(n-1, tmp, k);
        }
    }

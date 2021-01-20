#include <stdio.h>
#include <stdlib.h>

#define size 1000

int compare (const void* p1, const void* p2);

int main()
{
    int N = 0;
    scanf("%d", &N);
    
    int** a = (int**) calloc(N, sizeof(int*));
    
    int i, j;
    
    for(i = 0; i < N; i++)
        {
        a[i] = (int*) calloc (2, sizeof(int)); 
        for(j = 0; j < 2; j++)
            scanf("%d", *(a+i)+j);
        }
            
    

    qsort(a, N, sizeof(int*), compare);
    
    for(i = 0; i < N; i++)
        {
        for(j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
        printf("\n");
        }
        
}
    
int compare (const void* s1, const void* s2)
{
    int* p1 = (int*)s1;
    int* p2 = (int*)s2; 
    
    int S1 = (*p1) * (*(p1+1));
    
    int S2 = (*p2) * (*(p2+1));
    
    int P1 = 2*(*p1) + 2*(*(p1+1));
    
    int P2 = 2*(*p2) + 2*(*(p2+1));
    
    if (S1 == S2)
    {
        if (P1 == P2)
            return *(p1+1) - *(p2+1);
        else
            return P1 - P2;
    }
    else    
        return S1 - S2;
}

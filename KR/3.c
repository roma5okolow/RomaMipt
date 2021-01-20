#include <stdio.h>
#include <stdlib.h>

#define size 1000

int compare (const void* p1, const void* p2);

int main()
{
    int N = 0;
    scanf("%d", &N);
    
    int a[size][3];;
    
    int i, j;
    
    for(i = 0; i < N; i++)
        {
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
        }
            
    

    qsort(a, N, sizeof(int(*)[3]), compare);
    
    for(i = 0; i < N; i++)
        {
        for(j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
        }
        
}
    
int compare (const void* s1, const void* s2)
{
    int* p1 = (int(*)[3])s1;
    int* p2 = (int(*)[3])s2;
    
    int r1 = (p1[1]-90)*(p1[1]-90) + (p1[2]-60)*(p1[2]-60) + (p1[1]-90)*(p1[1]-90);
    
    int r2 = (p2[1]-90)*(p2[1]-90) + (p2[2]-60)*(p2[2]-60) + (p2[1]-90)*(p2[1]-90);
    
    if (r1 == r2)
    {
        if(p1[1] != p2[1])
            return p1[1] - p2[1];
        
        else if(p1[2] != p2[2])
            return p1[2] - p2[2];
        else
            return p1[3] - p2[3];
    }
    else    
        return r1 - r2;
}

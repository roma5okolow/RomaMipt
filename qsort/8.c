#include <stdio.h>
#include <stdlib.h>

int compare (const void* p1, const void* p2);

struct Point 
    {
    int x;
    int y; 
    };

int main()
{
    int N = 0;
    scanf("%d", &N);
    
    int* array = (int*) calloc(N, sizeof(int));
    
    for(int i = 0; i < N; i++)
        scanf("%d", array+i);
        
    qsort(array, N, sizeof(int), compare);
    
    for(int i = 0; i < N; i++)
        printf("%d ", array[i]);
    
    free(array);
}
    
int cmp_Point (const void* p1, const void* p2)
{
    struct Point* s1 = (struct Point*) p1;
    struct Point* s2 = (struct Point*) p2;
    
    int r1 = (s1->x)*(s1->x) + (s1->y)*(s1->y);
    int r2 = (s2->x)*(s2->x) + (s2->y)*(s2->y);
    
    return r1 - r2;
}

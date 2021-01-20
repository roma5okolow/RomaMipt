#include <stdio.h>
#include <stdlib.h>

int cmp_Point (const void* p1, const void* p2);

#define size 1000

struct Point 
    {
    int x;
    int y; 
    };


int main()
{
    int N = 0;
    scanf("%d", &N);
    
    struct Point array [size]; 
    
    int i;
    
    for(i = 0; i < N; i++)
        {
        scanf("%d",&(array[i].x));
        scanf("%d",&(array[i].y));
        }
        

    qsort(array, N, sizeof(struct Point), cmp_Point);
    
    for(i = 0; i < N; i++)
        printf("%d %d\n", array[i].x, array[i].y);   
    
}
    
int cmp_Point (const void* p1, const void* p2)
{
    struct Point* s1 = (struct Point*) p1;
    struct Point* s2 = (struct Point*) p2;
    
    int r1 = (s1->x)*(s1->x) + (s1->y)*(s1->y);
    int r2 = (s2->x)*(s2->x) + (s2->y)*(s2->y);
    
    if (r1 == r2)
        {
        if(s1->x != s2->x)
            return s1->x - s2->x;
        else
            return s1->y - s2->y;
        }
    return r1 - r2;
}


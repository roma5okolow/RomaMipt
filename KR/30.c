#include <stdio.h>
#include <stdlib.h>

int cmp_Params (const void* p1, const void* p2);

struct Params 
    {
    int G;
    int T;
    int B; 
    };

int main()
{
    int i;
    int N = 0;
    scanf("%d", &N);
    
    struct Params mass[1000];
    
    
    for(i = 0; i < N; i++)
        scanf("%d%d%d", &(mass[i].G), &(mass[i].T), &(mass[i].B) );
    
        
    qsort(mass, N, sizeof(mass[0]), cmp_Params);
    
    for(i = 0; i < N; i++)
        printf ("%d %d %d\n", (mass[i].G), (mass[i].T), (mass[i].B) );
    
    return 0;

}
    
int cmp_Params (const void* p1, const void* p2)
{
    struct Params* s1 = (struct Params*) p1;
    struct Params* s2 = (struct Params*) p2;
    
    int r1 = (s1->G-90)*(s1->G-90) + (s1->T-60)*(s1->T-60) + (s1->B-90)*(s1->B-90);
    int r2 = (s2->G-90)*(s2->G-90) + (s2->T-60)*(s2->T-60) + (s2->B-90)*(s2->B-90);
    
    
    
    if (r1 == r2)
    {
        if(s1->G != s2->G)
            return s2->G - s1->G;
        
        else if(s1->T != s2->T)
            return s1->T - s2->T;
        else
            return s2->B - s1->B;
    }
    else    
        return r1 - r2;
}

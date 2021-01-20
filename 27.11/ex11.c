#include <stdio.h>
#include <stdlib.h>

int cmp_Params (const void* p1, const void* p2);

struct Params 
{
    long len;
    long wid;
};

int main()
{
    int i;
    int N = 0;
    scanf("%d", &N);
    
    struct Params mass[1000];
    
    
    for(i = 0; i < N; i++)
        scanf("%ld%ld", &(mass[i].len), &(mass[i].wid));
    
        
    qsort(mass, N, sizeof(mass[0]), cmp_Params);
    
    for(i = 0; i < N; i++)
        printf ("%ld %ld\n", (mass[i].len), (mass[i].wid));
    
    return 0;

}
    
int cmp_Params (const void* p1, const void* p2)
{
    struct Params* s1 = (struct Params*) p1;
    struct Params* s2 = (struct Params*) p2;
    
    long S1 = (s1->len) * (s1->wid);
    
    long S2 = (s2->len) * (s2->wid);
    
    long P1 = 2*(s1->len) + 2*(s1->wid);
    
    long P2 = 2*(s2->len) + 2*(s2->wid);    
    
    long delta = S2-S1;
    
    if (S1 == S2)
    {
        if (P1 == P2)
            return s2->wid - s1->wid;
        else
            return P1 - P2;
    }
    else    
        if(delta > 0)
            return 1; 
        else
            return -1;
}

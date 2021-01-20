#include <stdio.h>
#include <stdlib.h>

int compare (const void* p1, const void* p2);

int main()
{
    int N = 0;
    scanf("%d", &N);
    
    float* a = (float*) calloc(N, sizeof(float));
    
    int i;
    
    for(i = 0; i < N; i++)
        scanf("%f", a+i);

    qsort(a, N, sizeof(float), compare);
    
    for(i = 0; i < N; i++)
        printf("%.2f ", a[i]);
    free(a);   
    
}
    
int compare (const void* p1, const void* p2)
{
    if ((*(float*)p1 - *(float*)p2) > 0)
        return 1;
    else if ((*(float*)p1 - *(float*)p2) > 0)
        return 0;
    else
        return -1;
}

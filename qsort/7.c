#include <stdio.h>
#include <stdlib.h>

int compare (const void* p1, const void* p2);

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
    
int compare (const void* p1, const void* p2)
{
    int a = *(int*)p1;
    int b = *(int*)p2;
    
    if ((a % 2) == 1 || (b % 2) == 1)
        return 0;
    else
        return a - b;
}

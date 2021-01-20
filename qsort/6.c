#include <stdio.h>
#include <string.h>
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
    
    if(a%10 != b%10)
        return a%10 - b%10;
    else if ( ((a/10)%10) != ((b/10)%10))
        return (a/10)%10 - (b/10)%10;
    else if (((a/100)%10) != ((b/100)%10))
        return (a/100)%10 - (b/100)%10;
    else 
        return a/1000 - b/1000;
}

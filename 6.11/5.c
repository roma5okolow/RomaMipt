#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare_ascending (const void* a1, const void* a2);
int compare_descending (const void* a1, const void* a2);

#define n 20

int main()
    {
    int array[n];
    
    srand(time(NULL));
    
    int i;
    for(i = 0; i < 20; i++)
        {
        array[i] = rand()%100;
        printf("%d ", array[i]);
        }
    
    qsort(array, n, sizeof(int), compare_ascending);
    
    printf("\nAscending: ");
    for(i = 0; i < 20; i++)
        printf("%d ", array[i]);
        
    qsort(array, n, sizeof(int), compare_descending);
    
    printf("\nDescending: ");
    for(i = 0; i < 20; i++)
        printf("%d ", array[i]);
        
    printf("\n");
   
    return 0;
    }
    
int compare_ascending (const void* a1, const void* a2)
    {
    return *(int*)a1 - *(int*)a2;
    }

int compare_descending (const void* a1, const void* a2)
    {
    return *(int*)a2 - *(int*)a1;
    }

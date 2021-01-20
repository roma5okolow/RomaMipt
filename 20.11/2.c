#include<stdio.h>
#include<stdlib.h>

void CreateArray();

int main()
    {
    
    CreateArray();
    
    }
    
void CreateArray()
    {
    int* adr = NULL;
    
    int n = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    adr = (int*)calloc(n, sizeof(int));
    
    int i;
    for(i = 0; i < n; i++)
        {
        printf("Enter element #%d: ", i);
        scanf("%d", &adr[i]);
        }
    
    for(i = 0; i < n; i++)
        printf("#%d - %d\n", i+1, adr[i]);
        
    free(adr);
    
    }

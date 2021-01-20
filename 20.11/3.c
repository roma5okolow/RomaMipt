#include<stdio.h>
#include<stdlib.h>

int* CreateArray(int* len);
int FindIndex (int* array, int* len);

int main()
    {
    int len = 0; 
    
    int* array = CreateArray(&len);
    
    int i = FindIndex (array, &len);
    
    printf("i = %d\n", i);
    
    
    }
    
int* CreateArray(int* len)
    {
    int* adr = NULL;
    
    printf("Enter the number of elements: ");
    scanf("%d", len);
    
    adr = (int*)calloc(*len, sizeof(int));
    
    int i;
    for(i = 0; i < *len; i++)
        {
        printf("Enter element #%d: ", i);
        scanf("%d", &adr[i]);
        }
    
    return(adr);
    }

int FindIndex (int* array, int* len)
    {
    int b = 0;
    printf("Enter the number you want to find: ");
    scanf("%d", &b);
    
    int left  = 0,
        right = (*len) -1, 
        i = right / 2;
    
    while( !(array[i] <= b && b < array[i+1]))
        {
        if (array[i] < b && array[i+1] <= b)
            left = i;
        else if(b <= array[i] && b < array[i])
            right = i;
        
        i = (left+right)/2;
        }
        
    return i;
}

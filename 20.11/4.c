#include<stdio.h>
#include<stdlib.h>

void CreateArray();

int main()
    {
    
    CreateArray();
    
    }
    
void CreateArray()
    {
    //float(*matr)[10];
    float** matr;
    
    int x, y = 0;
    printf("Enter x and y: ");
    scanf("%u%u", &x, &y);
    
    //matr = (float(*)[y]) calloc(x * y, sizeof(float));
    matr = (float**) calloc(y, sizeof(float*));
    
    int i, j;
    for(i = 0; i < y; i++)
        {
        
        *(matr + i) = (float*)calloc(x, sizeof(float));
        for(j = 0; j < x; j++)
            {
            printf("Enter matrix [%d][%d]: ", i, j);
            //scanf("%g", *(matr+i)+j);
            scanf("%g", *(matr + i*x)+j);
            }
        }
    
    for(i = 0; i < y; i++)
        {
        for(j = 0; j < x; j++)
            //printf("%g %p ",*(*(matr+i)+j), *(matr+i)+j );
            printf("%g %p ",*(*(matr+ x*i) + j), *(matr+ i*x) +j);
        printf("\n");
        }
    
    for(i = 0; i < y; i++)
        free(matr[i]);
    
    free(matr);
    
    }

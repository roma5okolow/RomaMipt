#include<stdio.h>
#include<stdlib.h>

void CreateArray(int x, int y);

int main()
    {
    FILE* fp = fopen("5.txt", "r");
    fseek(fp, 0L, SEEK_SET);
    
    int x, y = 0;
    
    fscanf(fp, "%d%d", &x, &y);
    
    printf("x = %d y = %d\n",x, y);
    
    fclose(fp);
    
    CreateArray(x, y);
    
    
    }
    
void CreateArray(int x, int y)
    {
    FILE* fp = fopen("5.txt", "r");
    fseek(fp, 4L, SEEK_SET);
    
    double(*matr)[10];
    
    
    matr = (double(*)[x]) calloc(x * y, sizeof(double));
   
    int i, j;
    for(i = 0; i < y; i++)
        for(j = 0; j < x; j++)
            fscanf(fp, "%lg", *(matr+i)+j);
    
    fclose(fp);
    
    for(i = 0; i < y; i++)
        {
        for(j = 0; j < x; j++)
            printf("%lg ", *(*(matr+i)+j));
        
        printf("\n");
        }
  
    double dist = 0;
    double max_dist = 0;
    
    for(i = 0; i < y-1; i++)
        {
        dist = 0;
        
        for(j = 0; j < x; j++)
            dist += matr[i][j] * matr[i+1][j];
        
        printf("(dist = %lg)\n", dist);
        
        if (dist > max_dist)
            max_dist = dist;
        }
       
    for(i = 0; i < y; i++)
        free(*(matr + i));
    
    printf("max_dist = %lg\n", max_dist);
    }

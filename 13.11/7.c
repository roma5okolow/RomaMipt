#include<stdio.h>

int main()
    {
    
    FILE* fp = fopen("7.txt", "w+");
    
    int i;
    
    
    for(i = 1; i <= 20; i++)
        {
        fprintf(fp,"%d", 10*i);
        putc(' ', fp);
        }
    
    fseek(fp, 0L, SEEK_SET);
    
    int x = 0;
    
    printf("Without skip: ");
    
    for(i = 0; i < ; i++)
        {
        fscanf(fp, "%d", &x);
        printf("%d ", x);
        }
        
    printf("\nsize of file = %lu\n", ftell(fp));
    printf("With skip: ");
    
    fseek(fp, 9L, SEEK_SET);
    
    for(i = 0; i < 20; i++)
        {
        fscanf(fp, "%d", &x);
        printf("%d ", x);
        }
    printf("\n");
    }

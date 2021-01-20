#include<stdio.h>

int main()
    {
    FILE* fp = fopen("abc", "a+");
    
    int i, j;
    int x = 0;
    
    for(i = 0; i < 10; i++)
        fprintf(fp, "%d ", i*20);
    
    fseek(fp, 0L, SEEK_SET);
    
    for(j = 0; j < 10; j++)
        {
        fscanf(fp, "%d", &x);
        printf("%d ",x);
        }
    fclose(fp);
    }

#include<stdio.h>

int main()
    {
    
    FILE* fp = fopen("9.txt", "w+");
    
    int i, j;
    
    for(i = 0; i < 20; i++)
        {
        for(j = 0; j < 5; j++)
            fprintf(fp, "%2d ", i+j);
        putc('\n', fp);
        }
    
    int buf[40] = {10};
    
    fseek(fp, 0L, SEEK_SET);
    
    for(i = 0; i < 40; i += 2)
        fscanf(fp, "%*d%d%*d%d%*d", buf+i, buf+i+1);
    
    for(j = 0; j < 40; j += 2)
        printf("%2d %2d\n", buf[j], buf[j+1]);
        
    }

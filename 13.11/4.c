#include<stdio.h>

int main()
    {
    FILE* fp = fopen("4.txt", "a+");
    
    int i, j;
    char x = 0;
    
    for(i = 'A'; i < 'A' + 10; i++)
        {
        putc(i, fp);
        }
    fseek(fp, 0L, SEEK_SET);
    
    for(j = 0; j < 10; j++)
        {
        printf("%c",getc(fp));
        }
    printf("\n");
    fclose(fp);
    }

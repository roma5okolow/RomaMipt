#include<stdio.h>

int main()
    {
    
    FILE* fp = fopen("8.txt", "a+");
    
    char ch;
    
    while((ch = getchar()) != EOF)
        putc(ch, fp);
        
    fseek(fp, 0L, SEEK_SET);
    
    while(!feof(fp))
        printf("%c", getc(fp));
    
    fclose(fp);
    
    }

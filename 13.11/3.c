#include<stdio.h>

int main()
    {
    FILE* fp = fopen("3.txt", "a+");
    
    char s[100] = "";
    
    fgets(s, 99, stdin);
    
    fputs(s, fp);
    
    fseek(fp, 0L, SEEK_SET);
    
    fgets(s, 100, fp);
    
    puts(s);
    
    fclose(fp);
    }

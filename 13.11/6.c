#include<stdio.h>

int main()
    {
    
    FILE* fp = fopen("6.txt", "r");
    
    char s[1000] = "";
    
    int i = 0;
    
    while(!feof(fp))
        {
        s[i] = getc(fp);
        i++;
        }
    
    puts(s);
    
    }

#include<stdio.h>
#include<string.h>

int main()
    {
    
    char s1 [100] = "";
    char s2 [100] = "";
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    s1[strcspn(s1, s2)] = '*';
    
    puts(s1);
    
    }

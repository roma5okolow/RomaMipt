#include <stdio.h>
#include <string.h>

int main()
    {
    
    char s1 [1000] = "";
    
    scanf("%s", s1);
    
    char* adr = strchr(s1 + 1, s1[0]);

    while ( (adr = strchr(s1 + 1, s1[0])) != NULL)
            *adr = '-';
    
    puts(s1);
   
    
    }
    


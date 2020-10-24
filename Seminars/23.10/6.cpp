#include <stdio.h>
#include <string.h>

int main()
    {

    char s1[10] = {};
    char s2[10] = {};

    gets(s1);
    gets(s2);

    char* adr = strstr(s1, s2);

    if (adr == NULL)
        printf("s1 don't includes s2");

    else
        strcpy(adr, adr+strlen(s2));
        *(adr+strlen(s2)) = '\0';

    puts(s1);
    }



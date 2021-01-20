#include <stdio.h>
#include <string.h>

int main()
    {

    char s1[10] = {};
    char s2[10] = {};

    gets(s1);
    gets(s2);

    strncpy(s1+4, s2+1, 3);

    puts(s1);
    puts(s2);

    }

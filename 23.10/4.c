#include <stdio.h>
#include <string.h>

int main()
    {

    char s1[10] = {};
    char s2[10] = {};

    gets(s1);
    gets(s2);

    strcat(s1, s2);

    printf("%s \nlen = %d\n", s1, strlen(s1));

    }

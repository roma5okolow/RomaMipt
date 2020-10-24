#include <stdio.h>
#include <string.h>

int main()
    {

    char s1[10] = {};
    char s2[10] = {};

    gets(s1);
    gets(s2);

    if (strncmp(s1, s2, 3) == 0)
        printf("First 3 chars are equal");
    else
        printf("First 3 chars are not equal");

    }

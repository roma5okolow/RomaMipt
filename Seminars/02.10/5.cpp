#include <stdio.h>

int main()
    {

    char c;

    scanf("%c", &c);

    if (c >= '0' && '9' >= c)
        printf("It's a digit");

    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("It's a letter");

    else
        printf("It's a sign");

    return 0;
    }

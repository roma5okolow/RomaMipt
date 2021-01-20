#include <stdio.h>


int main()
    {

    char c;

    scanf("%c", &c);

    if (c >= '0' && '9' >= c)
        printf("It's a digit\n");

    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("It's a letter\n");

    else
        printf("It's a sign\n");

    return 0;
    }

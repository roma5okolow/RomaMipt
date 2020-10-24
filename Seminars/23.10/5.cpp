#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
    {

    char c;
    char s[15] = "";


    printf("Enter char: ");

    c = getchar();

    scanf("%s", s); //почему не работал gets и puts

    char* adr1 = strchr(s, c);
    char* adr2 = strrchr(s, c);

    if (adr1 == NULL)
        printf("NULL");

    else
        *adr1 = '*';

    if (adr2 == NULL)
        printf("NULL");

    else
        *adr2 = '*';

    printf("%s", s);
    }

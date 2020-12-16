#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000
#define K 2500

void replace(char* d, char* s);

int main()
{
    char s[N];
    char d[K];

    while (scanf("%1000s", s) == 1)
    {
        replace(d, s);
        printf("%s ", d);
    }
    return 0;
}

void replace(char* d, char* s)
{
    char* p;

    d[0] = '\0';

    if((p = strstr(s, "bomb")) != NULL)
    {
        strncat(d, s, (int)(p-s));
        strcat(d, "watermelon");
        strcat(d, p+4);
    }
    else
        strcat(d, s);

}

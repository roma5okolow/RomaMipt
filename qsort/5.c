#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 1000

int compare (const void* p1, const void* p2);

int main()
{
    char str[size+1];
    int i = 0;
    char c;
    while((c = getchar()) != '.')
        {
        str[i] = c;
        i++;
        }
    str[i] = '.';

    qsort(str, i, sizeof(char), compare);
    
    for(int j = 0; j <= i; j++)
        printf("%c", str[j]);
    
}
    
int compare (const void* p1, const void* p2)
{
    int a = *(char*)p1;
    int b = *(char*)p2;
    return a - b;
}
       
    

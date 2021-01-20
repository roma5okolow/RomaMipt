#include<stdio.h>
#include<string.h>
#include<math.h>

int convert (const char * src);

int main()
    {
    printf("%d", convert("123"));
    }

int convert (const char * src)
    {
    int len = strlen(src);
    
    int i;
    int Decimal = 0;
    for(i = 0; i < len; i++)
        Decimal += (int)src[i]*(int)pow(8, len-i-1);
    return Decimal;
    }

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct _Decimal 
{
    char * a; 
    unsigned int n;   
}Decimal;

Decimal* mult10 (const Decimal * a);

int main()
{
    Decimal * a; 
    Decimal * res;
    
    a = (Decimal*) calloc(1, sizeof(Decimal));
    
    char array[3] = {8,5,6};
    a->n = 2;
    
    a->a = array;

    res = mult10(a);   

    int i;
    for(i = res->n; i >= 0; i--)
        printf("%d", res->a[i]);
    
    printf("\n");

//    free(a);

    return 0;
}
    
Decimal* mult10 (const Decimal* a)
{
    Decimal* res = (Decimal*) calloc(1, sizeof(Decimal));
    
    if(a->n == 0 && a->a[0] == 0)
    {
        res->a = (char*) calloc(1, sizeof(char));
        res->a[0] = 0;
        res->n = 0;
    }
    else
    {
        res->a = (char*) calloc(1, sizeof(char));
        res->a[0] = 0;
        res->n = a->n + 1;
        
        int i;
        
        for(i = 1; i <= res->n ; i++)
            res->a[i] = a->a[i-1];
    }
    return res;
}


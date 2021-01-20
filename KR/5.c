#include <stdio.h>

typedef struct _Decimal 
{
    unsigned char * a ;
    unsigned int n;
}Decimal;

Decimal * half (const Decimal * a);

int main() {
    Decimal * res;
    Decimal * d;
    d = set(1247);          
    
    res = half(d);          
    
    print_elong(res);       // ожидаю 06 23
    
    elong_free(res);         // нужно реализовать эту функцию 
    // тут освобождается память для числа d
    
    return 0;
}

Decimal * half (const Decimal * a);


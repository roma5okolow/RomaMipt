#include<stdio.h>

#define N 100

struct _Decimal 
    {
    char a[N]; 
    unsigned int n; 
    };
typedef struct _Decimal Decimal;

void half (Decimal * res, Decimal * num);

int main()
    {
    Decimal num;
    Decimal *num_adr = &num;
    
    FILE* fp = fopen("11.txt", "a+");
    fseek(fp, 2L, SEEK_SET);
    
    int c;
    int i;
    for(i = 0; fscanf(fp, "%d", &c) == 1; i++)
        {
        num.a[i] = c;
        fseek(fp, 1L, SEEK_CUR);
        }
    fseek(fp, 1L, SEEK_CUR);
    fscanf(fp, "%d", &(num.n));
    
    Decimal res = {{0}, 0};
    Decimal *res_adr = &res;
    
    half(res_adr, num_adr);
    
    fprintf(fp, "{{");
    for(i = 0; i < res.n; i++)
        fprintf(fp, "%d, ",res.a[i]);
    
    fprintf(fp, "%d}, %d}",res.a[res.n], res.n);
    
    fclose (fp);
    
    }

void half (Decimal * res, Decimal * num)
    {
    int len = num->n;
    
    res->n = len;
    
    res->a[len] = num->a[len] / 2;
    
    for(int i = len - 1; i >= 0; i--)
        {
        res->a[i] = ((num->a[i+1] % 2)*10 + num->a[i]) / 2;
        }
    }

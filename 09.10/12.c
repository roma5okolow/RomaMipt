#include <stdio.h>

#define N 100000

void delete (int row[], int n, int len);
void PrintRow (int row[],int len);

int main()
    {

    int i = 0;
    int j = 0;
    int k = 0;

    int row [N] = {0};
    
    while(scanf("%d", &row[i]) == 1)
        i++;
    
    PrintRow(row, i);

    for (j = 0; j < i; j++)
        for(k = j + 1; k < i; k++)
            while(row[k] == row[j] && row[k] != 0)
                {
                delete(row, k, i);
                } 
    PrintRow(row, i); 
    }
    
void delete (int row[], int n, int len)
    {
    int x = 0;
    
    row[n] = 0;
    
    for(x = n+1; x < len; x++)
        row[x-1] = row[x];
    
    row[len - 1] = 0;
    }

void PrintRow (int row[], int len)
    {
    int j;
    
    for(j = 0; j < len && row[j] != 0; j++)
        printf("%d ", row[j]);
        
    printf("\n");
    }



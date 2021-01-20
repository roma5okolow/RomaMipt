#include <stdio.h>

void swap (int* a,int* b);

int main()
    {
    int i        = 0;
    int j        = 0;
    int k        = 0;
    int row[100] ={0};
    int len_neg      = 0; 

    while(scanf("%d", row+i) == 1) //scan row
        i++;
        
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);

    printf("\n");
    
    for (j = 0; j < i; j++)
        if (row[j] < 0)
            for (k = j; k > 0; k--)
                {
                if (row[k-1] > 0)
                    swap(row+k, row+k-1);
                else 
                    break;
                }
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);
    
    printf("\n");
    }
void swap (int* a,int* b)
    {
    int c = 0;
    c  = *a;
    *a = *b;
    *b = c;
    }





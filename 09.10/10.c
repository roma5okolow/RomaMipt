#include <stdio.h>
#include <limits.h>

void swap (int* a,int* b);
void bubble (int row [], int len);
void choice (int row[], int len);
void insertion(int row[], int len);

int main()
    {
    int i        = 0;
    int j        = 0;
    int k        = 0;
    int row[100] ={0};

    while(scanf("%d", row+i) == 1) //scan row
        i++;
        
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);

    printf("\n");


    bubble(row, i);
    printf("Bubble: ");
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);
    printf("\n");           

    
    choice(row, i);
    printf("Choice: ");
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);
    printf("\n");           
    
    insertion(row, i);
    printf("Insertion: ");
    for (j = 0; j < i; j++)        //print row
        printf("%d ", row[j]);
    printf("\n"); 
    }
    
void bubble (int row [], int len)
    {
    int k = 0;
    int j = 0;
    
    
    for(j = 0; j < len; j++)
        for(k = 0; k < len-j; k++)
            if (row[k] > row[k+1])
                swap(row+k+1, row + k);
    }
    
void choice (int row[], int len)
    {
    int j = 0;
    int k = 0;
    int x_min = INT_MAX;
    int i_min = 0;
    
    
    for(j = 0; j < len; j++)
        {
        for(k = j; k < len; k++)
            if (row[k] < x_min)
                {
                x_min = row[k];
                i_min = k;
                }
        swap(&row[j],&row[i_min]);
        x_min = INT_MAX;
        }
    }
    
void insertion(int row[], int len)
{
    int newElement, location;
    int j = 0;
    
    for (j = 1; j < len; j++)
        {
        newElement = row[j];
        location = j - 1;
        while(location >= 0 && row[location] > newElement)
            {
            row[location+1] = row[location];
            location -= 1;
            }
        row[location+1] = newElement;
        }
}

    
void swap (int* a,int* b)
    {
    int c = 0;
    c  = *a;
    *a = *b;
    *b = c;
    }

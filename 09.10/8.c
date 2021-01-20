#include <stdio.h>

int main()
    {
    int i        = 0;
    int j        = 0;
    int row[100] ={0};
    int num      = 2;
    int num_max  = 2;
    
    
    while(scanf("%d", row+i) == 1)
        i++;
        
    for (j = 0; j < i; j++)
        printf("%d ", row[j]);

    printf("\n");
    
    
    for(j = 1; j < i-1; j++)
        {
        
        if (2 * row[j] == row[j-1] + row[j+1])
            num += 1;
            
        else 
            {
            if (num > num_max)
                num_max = num;
            num = 2;
            }
    if (num > num_max)
        num_max = num;
        
        }
    
    printf("max num = %d\n", num_max);
    }


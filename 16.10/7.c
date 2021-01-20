#include<stdio.h>
#include<time.h>
#include<stdlib.h>

const int Sq_Size = 3;

int main()
    {
    srand(time(NULL));

    int a = rand()%10,
        b = rand()%10,
        c = rand()%10;
        
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);
        
    int i, j;
    
    int square[Sq_Size][Sq_Size];
        
    for ( i = 0; i < Sq_Size; i++)
        for (j = 0; j < Sq_Size; j++)
            square[i][j] = 0;
    
    square[0][0] = a + b;
    square[0][1] = a + 2*b + 2*c;
    square[0][2] = a + c;
    square[1][0] = a + 2*c;
    square[1][1] = a + b + c;
    square[1][2] = a + 2*b;
    square[2][0] = a + 2*b + c;
    square[2][1] = a;
    square[2][2] = a + b + 2*c;
    
    for ( i = 0; i < Sq_Size; i++)
        {
        for (j = 0; j < Sq_Size; j++)
            printf("%2d ", square[i][j]);
        
        printf("\n");
        }

    }

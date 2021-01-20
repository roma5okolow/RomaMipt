#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
    {
    int lab[10][20];
    srand(time(NULL));
    
    int n, m;
    for(n = 0; n < 10; n++)
        {
        for(m = 0; m < 20; m++)
            {
            lab[n][m] = rand() % 2;
            printf("%d", lab[n][m]);
            }
        printf("\n");
        }
    int i = rand() % 2, j = rand() % 2;
    
    while(lab[i][j] != 0)
        {
        i = rand() % 8 + 2;
        j = rand() % 18 + 2;
        }
    
    Escape(lab, i, j);
    
    
    }
    
Escape (int(*lab)[40], int i, int j)
    {
    if (i == 40 || i == 1 || j == 40 || j == 1)
        printf("There is an exit!");
    
    else if (a[i][j+1] == 0)
        {
        j++
        Escape(lab, i, j); 
        }
        
    else if (a[i][j-1] == 0)
        {
        Escape(lab, i, j); 
        j--
        }
    
    else if (a[i+1][j] == 0)
        {
        i++
        Escape(lab, i, j); 
        }
    
    else if (a[i-1][j] == 0)
        {
        i--
        Escape(lab, i, j); 
        }
    
    else
        printf("There is no exit!");
    
    return ?;
    }*/

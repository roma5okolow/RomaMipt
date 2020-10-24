#include <stdio.h>

int point (int(*a)[3]);

int main()
    {
    int a[3][3] = {{4,5,6}, {8,7,9}, {1,2,99}};

    int i = 0;
    int j = 0;

    for (i = 0; i < 3; i++)
        {
        for (j = 0; j < 3; j++)
            printf ("%u ", a[i][j]);

        printf("\n");
        }
    printf("Sedlovaya tochka : %d", point(a));
    }

int point (int(*a)[3])
    {

    int i = 0,
        j = 0,
        t = 0;

    int found = 0;

    for(i = 0; i < 3 && !found; i++)
        {
        for(j = 0; j < 3 && !found; j++)
            {

            found = 1;

            for(t = 0; t < 3; t++)    //проверяем на столбец
                if(a[t][j] > a[i][j])
                    found = 0;

            for(t = 0; t < 3; t++)    //проверяем на строку
                if(a[i][t] < a[i][j])
                    found = 0;
            }
        }

    if (found)
        return(a[i-1][j-1]);

    }


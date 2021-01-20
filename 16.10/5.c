#include <stdio.h>

void PrintMatrix (int(*a)[3]);
void swap (int* a, int* b);
void transp(int(*a)[3]);

int main()
    {
    int a[3][3] = {{4,5,6}, {7,8,9}, {1,2,3}};

    int x = 0,
        y = 0;

    printf("Your old matrix: \n");

    PrintMatrix (a);

    transp(a);

    printf("\nYour transp matrix: \n");

    PrintMatrix (a);
    }

void swap (int* a, int* b)
    {

    int c = 0;

    c  = *a;
    *a = *b;
    *b = c;
    }

void PrintMatrix (int(*a)[3])
    {
    int x = 0,
        y = 0;

    for (y = 0; y < 3; y++)
        {
        for (x = 0; x < 3; x++)
            printf ("%u ", a[y][x]);

        printf("\n");
        }
    }
void transp(int(*a)[3])
    {
    int x = 0,
        y = 0;

    for (y = 0; y < 3; y++)
        {
        for (x = y; x < 3; x++)
            swap(&a[x][y], &a[y][x]);
        }
    }



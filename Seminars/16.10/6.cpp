#include <stdio.h>

void PrintMatrix (int(*a)[3]);
void MultiplyMatrix (int(*a)[3], int(*b)[3], int(*p)[3]);

int main()
    {
    int A[3][3] = {{2,3,4}, {5,6,7}, {8,9,10}};
    int B[3][3] = {{2,3,4}, {5,6,7}, {8,9,10}};
    int AB[3][3] = {0};

    printf("matrix A: \n");

    PrintMatrix (A);

    printf("\nmatrix B: \n");

    PrintMatrix (B);

    MultiplyMatrix (A, B, AB);

    printf("\nmatrix AB: \n");

    PrintMatrix (AB);
    }
void MultiplyMatrix (int(*A)[3], int(*B)[3], int(*AB)[3])
    {
    int i = 0;
    int j = 0;

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            {

            AB[i][j] = A[i][1]*B[j][1] + A[i][2]*B[j][2] + A[i][3]*B[j][3];

            }
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


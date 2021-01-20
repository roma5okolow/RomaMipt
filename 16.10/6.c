#include <stdio.h>

#define N 3

void PrintMatrix (int(*a)[N]);
void MultiplyMatrix (int(*a)[N], int(*b)[N], int(*p)[N]);

int main()
    {
    int A[N][N] = {{2,3,4}, {5,6,7}, {8,9,10}};
    int B[N][N] = {{2,3,4}, {5,6,7}, {8,9,10}};
    int AB[N][N] = {0};

    printf("matrix A: \n");

    PrintMatrix (A);

    printf("\nmatrix B: \n");

    PrintMatrix (B);

    MultiplyMatrix (A, B, AB);

    printf("\nmatrix AB: \n");

    PrintMatrix (AB);
    }
void MultiplyMatrix (int(*A)[N], int(*B)[N], int(*AB)[N])
    {
    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            for(k = 0; k < N; k++ )
                AB[i][j] += A[i][k] * B[k][j];

            
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


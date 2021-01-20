#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define n 10

int determinant (int **matrix, int size);
void getmatrixWithoutRowAndCol(int **matrix, int size, int row, int col, int **newMatrix);

int main()
    {
    int **matrix;
    for(int i = 0; i < n; i++)
            {
            int Column[n];
            matrix[i] = Column;
            }
    srand(time(NULL));
    
    int i, j;
    for(i = 0; i < n; i++)
        {
        for(j = 0; j < n; j++)
            {
            matrix[i][j] = rand() % 10;
            printf("%d", matrix[i][j]);
            }
        printf("\n");
        }
    
    determinant(matrix, n);
    }

void getmatrixWithoutRowAndCol(int **matrix, int size, int row, int col, int **newMatrix)
    {
    int offsetRow = 0; 
    int offsetCol = 0; 
    
    
    for(int i = 0; i < size-1; i++) 
        {
        if(i == row) 
            offsetRow = 1; 

        offsetCol = 0; 
        
        for(int j = 0; j < size-1; j++) 
            {
            if(j == col) 
                offsetCol = 1; 
            

            newMatrix[i][j] = matrix[i + offsetRow][j + offsetCol];
            }
    }
}

int determinant (int **matrix, int size)
    {
    int det = 0;
    int degree = -1;
    
    if(size == 1)
        return matrix[0][0];
    
    else if(size == 2)
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    
    else
        {
        int **newMatrix;
        for(int i = 0; i < size-1; i++)
            {
            int newColumn[size-1];
            newMatrix[i] = newColumn;
            }
 
        for (int j = 0; j < size-1; j++)
            {
            getmatrixWithoutRowAndCol(matrix, size, 0, j, newMatrix);
        
            det += (degree * matrix[0][j]*determinant(newMatrix, size - 1));
        
            degree *= -1;
            }
    
        for(int i = 0; i < size-1; i++) 
            {
            newMatrix[i] = 0;
            }
        newMatrix = 0;
    
        }
    return det;
    }

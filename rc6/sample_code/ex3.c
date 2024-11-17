#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MATRIX_SIZE 1000

void displayReverse(int matrix[MATRIX_SIZE][MATRIX_SIZE]);
void readRowMajor(int matrix[MATRIX_SIZE][MATRIX_SIZE]);
void readColumnMajor(int matrix[MATRIX_SIZE][MATRIX_SIZE]);

int main()
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    srand(time(0));

    // Initialize matrix with random integers
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            matrix[i][j] = rand() % 100; // Random integers between 0 and 99
        }
    }

    // Display matrix in reverse order
    displayReverse(matrix);
    return 0;
}

void displayReverse(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    for (int i = MATRIX_SIZE - 1; i >= 0; i--)
    {
        for (int j = MATRIX_SIZE - 1; j >= 0; j--)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void readRowMajor(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            int value = matrix[i][j];
        }
    }
}

void readColumnMajor(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
    for (int j = 0; j < MATRIX_SIZE; j++)
    {
        for (int i = 0; i < MATRIX_SIZE; i++)
        {
            int value = matrix[i][j];
        }
    }
}

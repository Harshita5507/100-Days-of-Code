//Add two matrices.
#include <stdio.h>

int main() 
{
    int rows1, cols1;
    int rows2, cols2;
    int i, j;

    // Input dimensions of the first matrix
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    // Input first matrix elements
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of the second matrix
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    // Input second matrix elements
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices must have the same dimensions.\n");
        return 1;
    }

    // Add matrices and print result
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("The sum of the matrices is: %d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}


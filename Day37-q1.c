//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int rows, cols,i,j,sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];


    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

     // Calculate sum of each row
    for (int i = 0; i < rows; i++) 
    {
        rowSum[i] = 0; // Initialize sum for this row
        for (int j = 0; j < cols; j++) 
        {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
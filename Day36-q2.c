//Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int rows, cols,i,j,sum=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("the sum of all elements is: %d", sum);
    
    return 0;
}
/* Write a program to print the following pattern:
*****
*****
*****
*****
*****  */

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("The pattern is as follows:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");  // move to the next row
    }

    return 0;
}
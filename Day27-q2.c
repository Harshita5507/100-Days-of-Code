/* Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *  */

#include <stdio.h>
int main()
{
    int n, i, j, space, stars;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &n);

    // Upper half (pyramid)
    for (i = 1; i <= n; i++)
    {
        // spaces
        for (space = 1; space <= n - i; space++)
            printf(" ");

        // stars
        for (stars = 1; stars <= 2 * i - 1; stars++)
            printf("*");

        printf("\n");
    }

    // Lower half (inverted pyramid)
    for (i = n - 1; i >= 1; i--)
    {
        // spaces
        for (space = 1; space <= n - i; space++)
            printf(" ");

        // stars
        for (stars = 1; stars <= 2 * i - 1; stars++)
            printf("*");

        printf("\n");
    }
    return 0;
}


    

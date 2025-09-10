#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Prompt user for input and ensure it's a positive integer
    do {
        printf("Enter a positive integer (n) to find the sum of the first n odd numbers: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Calculate the sum of the first n odd numbers
    // The k-th odd number can be represented as (2*k - 1)
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // Add the current odd number to the sum
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
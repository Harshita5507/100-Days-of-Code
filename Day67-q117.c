//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    printf("Enter size of second array (n): ");
    scanf("%d", &n);

    int arr1[m], arr2[n], merged[m + n];
    int i, j, k;

    // Input first sorted array
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter elements of second sorted array:\n");
    for (j = 0; j < n; j++) {
        scanf("%d", &arr2[j]);
    }

    // Merge both arrays
    i = j = k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}

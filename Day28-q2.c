//Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() {
    int n,i;

    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d numbers:\n", n );

    for (i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }

    printf("elements of array are: \n" );
     for (i=0; i<n; i++)
    {
    printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
//Find the second largest element in an array.
#include <stdio.h>
int main ()
{
    int n,i,j,largest,second_largest;

    scanf("%d", &n );

    int arr1[n];
    for (i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    
    //looping through first two elements.
    if (arr1[0] > arr1[1]) {
        largest = arr1[0];
        second_largest = arr1[1];
    } else {
        largest = arr1[1];
        second_largest = arr1[0];
    }

    // Loop through remaining elements
    for (i = 2; i < n; i++) {
        if (arr1[i] > largest) {
            second_largest = largest;
            largest = arr1[i];
        } else if (arr1[i] > second_largest && arr1[i] != largest) {
            second_largest = arr1[i];
        }
    }

    if (largest == second_largest) {
        printf("All elements are the same or no second largest exists.\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }
    return 0;
}
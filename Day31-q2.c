//Reverse an array without taking extra space.
#include <stdio.h>
#include <stdio.h>

int main() {
    int i,,n,x;
    
    printf("enter the number of elements");

    int arr[n];

    printf("enter the elements: ");
    for (i=0; i<n; i++)
    scanf("%d", &arr[i]);
   

    // Reverse using loop
    for (i = 0; i < n / 2; i++) {
        x = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = x;
    }

    // Print reversed array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
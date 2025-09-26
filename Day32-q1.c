//Merge two arrays.
#include <stdio.h>
int main ()
{
    int i,merge_array,n1,n2;

    printf("enter size of 1st array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("enter elements of 1st array: ");
    for (i=0;i<n1;i++)
    {
        scanf("%d", &arr1[n1]);
    }
    
    //size for second array
    printf("Enter size of 2nd array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements- second array
    printf("Enter %d elements of second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    merge_array= arr1[n1]+ arr2[n2];

    // Print merged array
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merge_array);
    }

    return 0;
}

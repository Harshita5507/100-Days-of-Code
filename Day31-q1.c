//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int i,n,arr[i],key, found=0;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    printf("enter %d numbers: \n", n);
    for(i=0; i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }

     printf("Enter element to search: ");
     scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d is not present in the array\n", key);
    }

    return 0;
}

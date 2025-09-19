//Find the maximum and minimum element in an array.
#include <stdio.h>
int main ()
{
    int n,i,min,max;

    printf("enter n: ");
    scanf("%d", &n);

    int arr[n]; //store numbers in an array.

    printf("enter the elements: ");
    for (i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }

       for (i=1; i<n; i++)
       {
        if (arr[i]<max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
     }
        printf("Max element is: %d", max);
        printf("Min element is: %d ", min);


    return 0;
}
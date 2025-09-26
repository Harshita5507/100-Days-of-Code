//Insert an element in an array at a given position.
#include <stdio.h>
int main ()
{
    int n,new_element,i,j,position;

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter elements of array: ");

    int arr[n+1];

    for (i=0;i<n;i++)
    scanf("%d", &arr[i]);

    printf("enter the index where the no is to be inserted: ");
    scanf("%d", &position);

    printf("enter the element to be inserted at the position: ");
    scanf("%d",&new_element);

    for (i=0;i<n;i++)
    {
       if (arr[i]>new_element)
       {
         break;
       }
    }

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int j=n; j>position ;j--)
    {
        arr[j]=arr[j-1];
    }

    arr[position]=new_element;
    n++;

    for (i=0;i<n;i++)
    printf("%d ", arr[i]);

    return 0;
}

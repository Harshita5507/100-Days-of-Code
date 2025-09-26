//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main ()
{
    int n,new_element,i,index;

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter elements of array: ");

    int arr[n+1];

    for (i=0;i<n;i++)
    scanf("%d", &arr[i]);

    printf("enter the element to be inserted at the position: ");
    scanf("%d",&new_element);

    for (i=0;i<n;i++)
    {
       if (arr[i]>new_element)
       {
         break;
       }
    }

    for (int j=n; j>i ;j--)
    {
        arr[j]=arr[j-1];
    }

    arr[i]=new_element;
    n++;

    for (i=0;i<n;i++)
    printf("%d ", arr[i]);

    return 0;
}

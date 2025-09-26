//delete an array from an array.
#include <stdio.h>
int main ()
{
    int n,i,position;

    scanf("%d", &n);

    int arr1[n];

    for (i=0;i<n;i++)
    {
       scanf("%d", &arr1[i]);
    }
    scanf("%d", &position);

    if (position<0 || position>n)
    printf("invalid! please enter correct position.");
    
    for (i=position;i<n-1;i++)
    {
        arr1[i]=arr1[i+1];
    }
    n--;
    
    for (i=0;i<n;i++)
    printf("%d", arr1[i]);

    return 0;
}
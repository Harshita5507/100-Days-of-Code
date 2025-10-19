//Write a Program take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence

#include <stdio.h>

int main() 
{
    int n, x;
    printf("enter number of elements in : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements: ");

    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter x: ");
    scanf("%d", &x);

    int index=0, num;
     
    for (int i=0 ;i<n;i++)
    {
        if (arr[i]>=x)
        {
           index=i; 
           break;
        }
        else
        index=-1;
    }
    printf("%d \n", index);

    return 0;
}

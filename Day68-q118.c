//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main()
{
    int n,i,found,j,missing=0;
    printf("enter the no of numbers you want to enter: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements of the array: ");
    scanf("%d", &arr[n]);

    for (i=0; i<n; i++)
    {
        found=0;
        for (j=0;j<n;j++)
        {
            if (arr[j]=i)
            {
            found=1;
            break;
            }
        }

        if (found==0)
        missing=i;
        break;

    }
    printf("The missing number is: %d", missing);

    return 0;
}
//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
int main()
{
    int n,i,j,k;

    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter k: ");
    scanf("%d", &k);


    for (i=0;i<n-1;i++)
    {
        for (j=i+1; j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }

    if (k >= 1 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}

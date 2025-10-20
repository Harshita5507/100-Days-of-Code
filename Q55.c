//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int majority=0, x=n/2;

    for (i=0;i<n;i++) //takes each element.
    {
        int count=0;
        for(j=0;j<n;j++) //compares each element.
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count>x)
        {
            majority= arr[i];
            break;
        }
        else 
        majority=-1;

    }
      printf("%d\n", majority);

    return 0;
}
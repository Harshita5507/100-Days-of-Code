//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int main()
{
    int n,i;

    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter an array: ");
    for(i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
     int current_sum = arr[0];
     int max_sum = arr[0];

    for(int i = 1; i < n; i++)
     {
        if (current_sum < 0)
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
        
    }

    for (i=arr[0]; i<=arr[i]; i++)
    {
        if (arr[i]<0)
        return -1;
    }

    printf("The maximum sum of subarray is: %d", max_sum);

   return 0;
}
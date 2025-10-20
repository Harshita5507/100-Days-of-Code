//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
int main()
{
    int n,i;
    
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (i=0;i<n;i++)
    {
        arr[i]= i+1;
    }

    int x=-1;

    for (int pivot_no=0; pivot_no<n; pivot_no++)
  {
      int left_sum = 0;
      int right_sum = 0;


    for (i=0;i<=pivot_no;i++)
    {
       left_sum += arr[i];
    }

    for (i=pivot_no; i<n;i++)
    {
        right_sum += arr[i];
    }
      if (left_sum==right_sum)
      {
         x=arr[pivot_no];
      break;
      }
  }
     printf("%d\n", x);
    return 0;
}
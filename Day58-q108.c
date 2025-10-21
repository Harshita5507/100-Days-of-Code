//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter n: ");
    scanf("%d", &n);

    int nums[n];

    printf("enter an array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }

     
    int answer[n];  //creating an array to store product array.

    for (i=0;i<n;i++)
    {
        int product=1;
        for (j=0; j<n ;j++)
        {
            if (i!=j)
            {
               product *= nums[j];
            }
        }
         answer[i]=product;
    }

    for (i=0;i<n;i++)
    {
        printf("%d, ", answer[i]);
    }
      
    return 0;
}
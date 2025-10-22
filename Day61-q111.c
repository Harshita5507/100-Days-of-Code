//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int arr[50];
int n,k;

void negative()
{
    int n,i,j;

    for (i=0;i<n-k;i++)
    {
        int x=0;

        for (j=i;j<i+k;j++)
        {
            if (arr[j]<0)
            {
                x=1;
                break;
            }
        }

        if (!x)
        printf("0 ");

    }
      printf("\n");
}


int main()
{
    printf("enter the size of array,n: ");
    scanf("%d", &n);

    printf("enter the elements of array: ");

    for (int i=0;i<n;i++)
    {
    scanf("%d", &arr[i]);
    }

    printf("enter subarray size, k: ");
    scanf("%d", &k);

    printf("First negative integer in each subarray of size %d: ", k);
    negative();

    return 0;
}
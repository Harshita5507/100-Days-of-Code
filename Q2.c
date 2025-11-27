//take input, dynamicaly allocate memory, and count and display frequency of each number.
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int *ptr;
    int n,i;
    int count=0;

    printf("Enter the size of array; ");
    scanf("%d", &n);

    ptr= (int*) malloc (n*sizeof (int));

    printf("Enter the elements of array: ");
    for (i=0;i<n;i++)  
    {
        scanf("%d", &ptr[i]);
    }

    for (i=0;i<n;i++)
    {
        count++;
    }

    for (i=0;i<n;i++)
    {
       printf("The frequency of %d is: %d", i, count);

    }

    return 0;
}
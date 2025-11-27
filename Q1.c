#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n,i;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    ptr= (int* ) malloc (n* sizeof(int));


    printf("enter the elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &ptr[i]);
        
    }

    
    int x;
    printf("enter the element to be inserted: ");
    scanf("%d", &x);


    int index;
    printf("enter the position where it is to be inserted: ");
    scanf("%d", &index);


    ptr= (int*) realloc(ptr, (n+1)* sizeof (int)); //increasing array size by 1.


    for (i=n;i>index;i--)
    {
        ptr[i]= ptr[i-1];    //shifting element to right
    }

    
    ptr[index]=x ;

    n++;

    printf("The array after inserting new element: \n");
    for(i=0;i<n;i++)
    {
        printf("%d", ptr[i]);
    }


    return 0;
}
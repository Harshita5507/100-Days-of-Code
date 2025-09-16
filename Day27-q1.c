/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*   */
#include <stdio.h>
int main ()
{
    int i,j;

    for(i=1;i<=9; i++)
    {
        for (j=1;j<=i;j++)
        {
            if (i%2==0)
            break;
            printf("*");
        } 
        printf("\n");
    }
    
    return 0;
}
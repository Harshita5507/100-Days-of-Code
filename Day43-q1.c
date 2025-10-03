//Reverse a string.
#include <stdio.h>
int main ()
{
    int i,n=0;
    char str[50];

    printf("enter a string: ");
    scanf("%[^\n]s" , str);

    while (str[n] != '\0')
   {
    n++;
   }

      for (i=n-1;i>=0;i--)
       {
           printf("%c", str[i]);
       }
   
    return 0;
}
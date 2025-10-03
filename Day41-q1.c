//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main ()
{
    char str1[20];
    int n=0;

    printf("enter the string: ");
    scanf("%[^\n]", str1);

    while (str1[n] != '\0' )
    {
        n++;
    }
    printf("the length of string is: %d", n);
    return 0;
}
//Print each character of a string on a new line.
#include <stdio.h>
int main ()
{
    int i=0;
    char str1[30]={"Hello! Good Day."};

    while (str1[i] != '\0')
    {
       printf("%c \n", str1[i]);
       i++;
    }
    return 0;
}
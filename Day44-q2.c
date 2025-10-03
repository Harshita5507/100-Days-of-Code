//Replace spaces with hyphens in a string.
#include <stdio.h>
int main ()
{
    int i=0;
    char str[20];

    printf("enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i]== ' ')
        {
            str[i]= '-';
        }
        i++;
    }
      printf("Modified string: %s \n",  str);

return 0;
}
//Print the initials of a name.
#include <stdio.h>
int main ()
{
   char str1[100];
   int i,j;

   printf("Enter your name: ");
   scanf("%[\n]", str1);

   printf("Initials of your name: "); 

   if (str1[i] != ' ')
    printf("%c", str1[i]);

   while (str1[i] != '\0')
   {
      if (str1[i]== ' ' && str1[i+1] != ' ' && str1[i+1] != '\0' )
      {
      printf("%c", str1[i+1]);
   }

   i++;
}   
    return 0;
}
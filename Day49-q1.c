//Print the initials of a name.
#include <stdio.h>
int main ()
{
   char str1[100];
   int i=0,j;

   printf("Enter your name: ");
   scanf("%[^\n]", str1);

   if (str1[0] != ' ' && str1[0] != '\n') {
        printf("%c", str1[0]);
    }

   while (str1[i] != '\0')
   {
      if (str1[i]== ' ' && str1[i+1] != ' ' && str1[i+1] != '\0' )
      {
      printf("%c", str1[i+1]); 
   }

   i++;
}   
    printf("\n");
    return 0; 
}

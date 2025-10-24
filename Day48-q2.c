//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main ()
{
  int i,j;
  char str[100];
  int start,end,temp; 
  
  printf("Enter a sentence: "); 
  scanf("%[^/n]", str);

    while (str[i] != '\0')
      {
        start=i; 
      

        while (str[i] != ' ' && str[i] != '\0')
         {
           i++;
         }
          end=i-1;

        while (start < end) 
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        i++; // Move past the space
      }
    
      printf("The reversed words in the string in the same word order is: %s", str);

      return 0;
}
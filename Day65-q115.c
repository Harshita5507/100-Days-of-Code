//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>

int anagram(char s[50], char t[50])
{
    int i,len1=0,len2=0;
    int Anagram=1;

    //calculate length of first string.
     for (i = 0; s[i] != '\0'; i++) 
      {
        len1++;
      }

    // Calculate length of second string
    for (i = 0; t[i] != '\0'; i++) 
     {
        len2++;
     }

    if (len1 != len2) 
      {
        Anagram = 0;
      } 
    

    else 
    {
        // Match each character of str1 in str2

        for (i = 0; i < len1; i++) 
        {
            int found = 0;

            for (int j = 0; j < len2; j++) 

            {
                if (s[i] == t[j])
                
                {
                    // marking this character as used

                    t[j] = '\0';
                    found = 1; 
                    break;
                }
            }
            

            if (found == 0)
            
            {
                Anagram = 0;
                break;
            }
        }
    }



     if (Anagram == 1)
        printf("Anagram\n");

    else
        printf("Not anagram.\n");

    return 0;
}
    


int main()
{
   char s[50],t[50];
   printf("enter first string in lowercase: ");
   scanf(" %[^\n]", s);

   printf("enter second string in lowercase: ");
   scanf(" %[^\n]", t);

   anagram(s,t);


    return 0;
}
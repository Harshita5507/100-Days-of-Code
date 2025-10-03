//Count vowels and consonants in a string. 
#include <stdio.h>
int main()
{
    int i=0;
    int vowel=0, consnt=0;
    char str1[100]={"Good Morning. This is a code to count the number of vowels and consonants in a string."};

    while (str1[i] != '\0')
 {
    char ch= str1[i];

          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel++;
            } else {
                consnt++;
            }
            i++;
        }
        
        printf("The no. of vowels: %d and no. of consonants: %d", vowel, consnt);
        return 0;
}


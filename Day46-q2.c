//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() 
{
    char str[100];
    int freq[26] = {0}; // Count array
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  // reads one word only

    
    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            int index = str[i] - 'a';

            freq[index]++;

            if(freq[index] == 2) 
            { 
                //repeating
                printf("First repeating lowercase letter: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}


  


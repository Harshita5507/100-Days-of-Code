//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int found, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Calculate length of first string
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    // Calculate length of second string
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    if (len1 != len2) {
        isAnagram = 0;
    } 
    
    else 
    {
        // Match each character of str1 in str2
        for (i = 0; i < len1; i++) 
        {
            found = 0;

            for (j = 0; j < len2; j++) 
            {
                if (str1[i] == str2[j]) 
                {
                    // marking this character as used
                    str2[j] = '\0';
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}

//Count frequency of a given character in a string.
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i, freq = 0;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word 
    printf("Enter the character to count: ");
    scanf(" %c", &ch);  // space before %c to skip newline

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            freq++;
    }

    printf("The character '%c' occurs %d times.\n", ch, freq);

    return 0;
}

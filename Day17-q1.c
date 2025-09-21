//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // extract each digit, cube it, and add to result
    while (originalNum != 0) {
        remainder = originalNum % 10;      // get last digit
        result += remainder * remainder * remainder;  // cube and add
        originalNum /= 10;                 // remove last digit
    }
    // check if Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


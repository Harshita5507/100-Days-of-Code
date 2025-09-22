//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Loop from 1 to minimum of num1 and num2
    int min = (num1 < num2) ? num1 : num2;

    for(i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i; // store largest common factor
        }
    }

    printf("HCF (GCD) is: %d\n", hcf);

    return 0;
}

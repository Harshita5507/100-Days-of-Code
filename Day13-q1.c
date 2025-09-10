//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main () {
    char operator;
    int num1, num2;
    
    printf("Enter an operator (+, -, *, /, % ): ");
    scanf("%s", &operator);

    printf("Enter two operands: ");
    scanf("%d%d", &num1, &num2);

    switch(operator) {

        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d= %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d= %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;

}

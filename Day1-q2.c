//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
  int main() {
    float num1,num2;
    float sum, difference, product, quotient;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

     sum= num1+num2;
     difference=num1-num2;
     product=num1*num2;
     quotient= num1/num2;

     printf("Sum: %f", sum);
     printf("Difference: %f", difference);
     printf("Product: %f", product);

     if (num2 !=0) {
     printf("Quotient: %f", quotient);
     }
     else {
      printf("Division by zero is not allowed.");
     }

    return 0;


  }

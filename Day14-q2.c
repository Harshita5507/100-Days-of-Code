//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int num,i,product=1;
    printf ("enter a number: ");
    scanf("%d", &num);
    
      for (i=2; i<=num;i+=2){
        product *= i;
        }
    
        printf("product of even nos: %d", product);

    return 0;
}

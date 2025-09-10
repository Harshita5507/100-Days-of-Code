//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num,sum=0,i;
    printf("enter a number to find sum of its odd numbers: ");
    scanf("%d", &num);

    while (num>0) {
        i=num%10;
        if (i%2 !=0){
            sum+=i;
        }
        num=num/10;
    }
    printf("sum of odd digits of %d is: %d", num, sum);

    return 0;
}

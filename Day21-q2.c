//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num,i,sum;
    printf("enter a number: ");
    scanf("%d", &num);

    for (i=1; i<=num/2;i++)
    {
        if (num%i==0){
            sum +=i;
        }
    }
     if (sum==num && num !=0) {
        printf("The number is a perfect number.");
    }
    else
    {
        printf("The number is not perfect number.");
    }
    return 0;
}


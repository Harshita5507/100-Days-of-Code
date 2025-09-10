#include <stdio.h>
int main()
{
int num,sum=0,digit;

printf("Enter a number whose sum of digits is to be found: ");
scanf("%d", num);

while (num !=0)
{
    digit= num%10;
    sum += digit;
    num/=10;
}
     printf("the sum of digits is: %d", sum);
    return 0;
}

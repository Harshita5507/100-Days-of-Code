/*Write a program to find the sum of the series: 
2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
#include <stdio.h>

int main() {
    int num,i;
    double sum=0.00;
    double numerator= 2;
    double denominator= 3;

    printf("Enter the number of numbers upto which sum is to be calulated: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        sum+=(double)numerator/denominator;
        numerator += 2;
        denominator += 4;

    }
    printf("The sum upto %d terms of the series is: %.2f\n",num, sum);

    return 0;
}
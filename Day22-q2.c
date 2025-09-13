#include <stdio.h>
int main() {
    int n,i;
    double sum=0.00;
    printf("enter the numbers of terms upto which you wish to calculate sum: ");
    scanf("%d", &n);

    for (i=1; i<=n;i++)
    {
        double numerator= (double)(2*i-1);
        double denominator= (double)(2*i);
        sum+= numerator/denominator;
    }
    printf("Sum of series upto %d terms is: %.2f\n", n, sum);
    
    return 0;
}
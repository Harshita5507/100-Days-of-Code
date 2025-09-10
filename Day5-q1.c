//Write a program to calculate simple and compound interest for given principal, rate, and time.
# include <math.h>
# include <stdio.h>
int main () {
    int principal, SI, CI;
    float rate, time;
    
    printf("Enter the principal, rate and time: ");
    scanf("%d %f %f", principal, rate, time);

    SI= (principal*rate*time)/100;

    printf("The Simple Interest is: %f", SI);

    printf("Enter the principal, rate and time: ");
    scanf("%d %f %f", principal, rate, time);

    CI= pow(principal* (1+ (rate)/100),time);

    printf("The Compound Interest is: %f", CI);
    return 0;

}

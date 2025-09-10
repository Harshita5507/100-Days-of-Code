#include <stdio.h>
int main () {
    int days, fine;
    printf("Enter the number of late days to calculate library fine: ");
    scanf("%d", fine);

    if (days<=5) 
    {
        fine=days*2;
        printf("Fine: %d\n", fine);
    }
    else if (days<=10) 
    {
        fine=10 + (days-5)*4;
        printf("Fine: %d\n", fine);
    }
    else if (days<=20) 
    {
        fine=30+ (days-10)*6;
        printf("Fine: %d\n", fine);
    }
    else 
    {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
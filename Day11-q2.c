#include <stdio.h>
int main () {
    float CP,SP,loss,profit,percentage;
    
    printf("Enter the Cost Price: ");
    scanf("%d", &CP);

    printf("Enter the Selling Price: ");
    scanf("%d", &SP);

    if (SP>CP)
    {
        profit=SP-CP;
        percentage= (profit/CP)*100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f\n", percentage);
    }
    else if (CP>SP)
    {
        loss=CP-SP;
        percentage= (loss/CP)*100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f\n", percentage);
    }

    return 0;
}
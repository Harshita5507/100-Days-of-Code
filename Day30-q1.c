//Write a program to count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n,i;
    int even=0,odd=0;
    printf("enter n: ");
    scanf("%d", &n);

    int arr1[n];

    printf("enter numbers: ");
    for (i=0;i<n;i++){
    scanf("%d", &arr1[n]);
    }

    for (i=0;i<n;i++)
    {
        if (arr1[i] %2 ==0)
        even++;  
        else
        odd++;
    }
        printf("count of odd nos: %d \n", odd);
        printf("count of even nos: %d", even); 
    return 0;
}
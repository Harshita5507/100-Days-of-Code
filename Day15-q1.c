#include <stdio.h>
int main() {
    int num,i,factorial=1;
    printf("Enter a number whose factorial is to be found: ");
    scanf("%d", num);

    if (num<0)
    {
        printf("Factorial not possible for negative number.");
    }
    else if (num==0)
    {
        printf("Factorial of 0 is 1.");
    }
    else {
    for (i=1; i<=num; i++)
      {
      factorial *= i;
      }
         printf("The factorial of num is %d: ", factorial);
}
    return 0;
}
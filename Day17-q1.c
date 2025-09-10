#include <stdio.h>
int main() {

    int num,prime,i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num<=1)
    {
        prime=0;
    }
    else if (num==2) 
    {
        prime=1;
    }
    else if (num%2==0)
    {
        prime=0;
    }
    else 
    {
        for (i=3; i<=num; i++)
        {
             if (num % i == 0) {
                prime = 0;
        }
    }
}

    if (prime){
    printf("Prime number");
    }
    else {
        printf("Not a prime number.");
    }

    return 0;

}

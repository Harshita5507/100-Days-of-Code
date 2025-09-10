//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int r,n,c,s=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    c=n;
    while(n>0) 
    {
        r=n%10;  // get last digit
        s=r+(s*10); // build reversed number
        n=n/10; // remove last digit
    }
    if(c==s) 
    {
        printf("Palindrome Number.");
    }
    else 
    {
        printf("Not a Palindrome Number.");
    }

    return 0;
}



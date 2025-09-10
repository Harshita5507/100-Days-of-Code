#include <stdio.h>
int main (){
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if (percentage>=90 && percentage<=100) {
    printf("Grade A");
    }
    else if (percentage>=80 && percentage<=89){
        printf("Grade B");
    }
    else if (percentage>=70 && percentage<=79){
        printf("Grade C");
    }
    else if (percentage>=60 && percentage<=69){
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}
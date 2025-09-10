//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main () {
    int a,b,c;
    printf("enter the three sides of a triangle: ");
    scanf("%d %d %d", &a , &b , &c);

    if (a==b && b==c && a==c){
        printf("Equilateral triangle."); //checking condition for equality, i.e. if all are equal only then
    }
    else if (a==b || b==c ||a==c ){
        printf("Equilateral triangle."); //checking condition for iscoseles triangle.
    }
    else {
        printf("Scalene triangle.");
    }
    return 0;
}


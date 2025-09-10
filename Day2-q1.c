//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
  int main() {
    int length, breadth;
    int perimeter, area;

    printf("Enter length of rectangle: ");
    scanf("%d", length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", breadth);

    perimeter=2 * (length+ breadth);
    area= length*breadth;

    printf("The perimeter of the rectangle is: %d", perimeter);

    printf("The area of the rectangle is: %d", area);


    return 0;


  }

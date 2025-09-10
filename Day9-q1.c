#include <stdio.h>
#include <math.h>
int main () {
    int discriminant,a,b,c, root1,root2;
    printf("Enter coefficients of a,b and c:  ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant=b^b- 4*a*c;

    if (discriminant>0) {
       root1 = (-b + sqrt(discriminant)) / (2 * a);
       root2 = (-b - sqrt(discriminant)) / (2 * a);
       printf("The roots are REAL and DISTINCT.");
        printf("Root 1 = %d\n", root1);
        printf("Root 2 = %d\n", root2);
    }
    else if (discriminant==0) {
       root1 = root2 = -b / (2 * a);
       printf("Roots are real and equal.\n");
       printf("Root 1 = Root 2 = %d\n", root1);
    }
    else {
        printf("Roots are complex.");
    }

    return 0;
}
#include <stdio.h>
 int main() {
    float a, b, c;
    // Input sides of triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    // Check triangle validity using triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
        // Check for Equilateral
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        // Check for Right-angled using Pythagoras Theorem
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("It is a Right-angled triangle.\n");
        }
        // Otherwise, it's Scalene
        else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }
    return 0;
}

#include <stdio.h>
 #include <math.h>
 int main() {
    float x1, y1, x2, y2, x3, y3, area;
    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);
    // Calculate the area using the determinant formula
    area = 0.5 * fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
    // Check for collinearity
    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are NOT collinear.\n");
    }
}
    return 0;
}

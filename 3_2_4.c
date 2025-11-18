#include <stdio.h>
 int main() {
    float population = 100000;
    int year;
    printf("Population growth over the last 10 years:\n\n");
    for (year = 1; year <= 10; year++) {
        population = population + (0.10 * population); // increase by 10%
        printf("Year %d: Population = %.0f\n", year, population);
    }

    return 0;
 }

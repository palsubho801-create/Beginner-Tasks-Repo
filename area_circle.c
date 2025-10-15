// area_circle.c
#include <stdio.h>

// Define PI for accurate calculation
#define PI 3.14159

/**
 * Calculates the area of a circle.
 * Formula: A = π * r^2
 */
double calculate_area(double radius) {
    return PI * radius * radius;
}

int main() {
    double r = 5.0;
    // Test the function
    printf("Radius: %.2f\n", r);
    printf("Area: %.4f\n", calculate_area(r));

    r = 10.0;
    printf("Radius: %.2f\n", r);
    printf("Area: %.4f\n", calculate_area(r));
    
    return 0;
}
#include <stdio.h>

// Define the constant value for PI
#define PI 3.14159

double calculate_circle_area(double radius) {
    // Area formula: A = π * r^2
    return PI * radius * radius;
}


int main() {
    double radius;
    double area;

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    
    // Read the double value from the user
    scanf("%lf", &radius);

    // Check for negative input, as radius cannot be negative
    if (radius < 0) {
        printf("Error: Radius cannot be a negative value.\n");
        return 1; // Exit with an error code
    }

    // Calculate the area by calling the function
    area = calculate_circle_area(radius);

    // Print the final result formatted to four decimal places
    printf("The area of the circle with radius %.2f is %.4f\n", radius, area);

    return 0; // Indicate successful execution
}
// temp_convert.c
#include <stdio.h>

/**
 * Converts temperature from Celsius to Fahrenheit.
 * Formula: F = C * 9/5 + 32
 */
double celsiusToFahrenheit(double celsius) {
    // Using 9.0/5.0 for floating-point division
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius; 
    
    // Prompt for user input
    printf("Enter temperature in Celsius: ");
    
    // Use scanf to read the double from the terminal
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    
    // Calculate and print the conversion
    printf("\n%.2f Celsius is equal to %.2f Fahrenheit.\n", 
           celsius, 
           celsiusToFahrenheit(celsius));
    
    return 0;
}
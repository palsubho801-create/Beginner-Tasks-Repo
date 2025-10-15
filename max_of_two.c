// max_of_two.c
#include <stdio.h>

// Function to find the maximum of two integers
int find_max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    
    // Prompt for user input
    printf("Enter the first integer: ");
    // Use scanf to read the integer from the terminal
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }
    
    printf("Enter the second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }
    
    // Calculate and print the maximum
    printf("\nThe maximum of %d and %d is: %d\n", num1, num2, find_max(num1, num2));
    
    return 0;
}
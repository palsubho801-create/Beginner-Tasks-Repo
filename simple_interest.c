// simple_interest.c
#include <stdio.h>

/**
 * Calculates Simple Interest. Formula: I = (P * R * T) / 100
 */
double calculate_simple_interest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double p = 1000.0; // Principal
    double r = 5.0;    // Rate
    double t = 2.0;    // Time (years)

    printf("Principal: %.2f, Rate: %.2f, Time: %.2f\n", p, r, t);
    printf("Simple Interest: %.2f\n", calculate_simple_interest(p, r, t));

    return 0;
}
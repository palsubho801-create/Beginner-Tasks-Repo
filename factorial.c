// factorial.c
#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    // Handle base case 0! = 1
    if (n == 0) return 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 7;
    printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}
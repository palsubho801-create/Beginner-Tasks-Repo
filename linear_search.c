// linear_search.c
#include <stdio.h>

/**
 * Searches for a target value in an array using Linear Search.
 * Returns the index of the target, or -1 if not found.
 */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int numbers[] = {10, 50, 30, 70, 80, 20, 90, 40};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int target1 = 30;
    int target2 = 99;

    printf("Target %d found at index: %d\n", target1, linearSearch(numbers, n, target1));
    printf("Target %d found at index: %d\n", target2, linearSearch(numbers, n, target2));

    return 0;
}
// reverse_string.c
#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char str[]) {
    int n = strlen(str);
    int i;
    for (i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char myString[] = "Hacktoberfest";

    printf("Original string: %s\n", myString);

    reverseString(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}
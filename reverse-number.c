#include <stdio.h>

int main(void) {
    int number;
    long long reversed = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Take each last digit and add it to the reversed number.
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %lld\n", reversed);
    return 0;
}

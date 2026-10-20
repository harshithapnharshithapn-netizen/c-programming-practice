#include <stdio.h>

int main(void) {
    int number;
    int original;
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

    original = number;

    // Reverse the digits so the result can be compared with the original.
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if ((long long)original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

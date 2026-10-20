#include <stdio.h>

int main(void) {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (up to 20): ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 20! is the largest factorial that fits in unsigned long long.
    if (number < 0 || number > 20) {
        printf("Please enter a number from 0 to 20.\n");
        return 1;
    }

    // Multiply all integers from 1 through the entered number.
    for (int i = 1; i <= number; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("%d! = %llu\n", number, factorial);
    return 0;
}

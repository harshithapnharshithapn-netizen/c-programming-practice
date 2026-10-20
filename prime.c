#include <stdio.h>

int main(void) {
    int number;
    int is_prime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Numbers less than 2 are not prime.
    if (number < 2) {
        is_prime = 0;
    } else {
        // Check whether any number from 2 to number / 2 divides it evenly.
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}

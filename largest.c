#include <stdio.h>

int main(void) {
    int first, second;

    // Read the two values to compare.
    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (first > second) {
        printf("The largest number is %d.\n", first);
    } else if (second > first) {
        printf("The largest number is %d.\n", second);
    } else {
        printf("Both numbers are equal: %d.\n", first);
    }

    return 0;
}

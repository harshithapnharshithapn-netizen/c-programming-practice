#include <stdio.h>

int main(void) {
    int first, second;

    // Read the two values that will be added.
    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum: %d\n", first + second);
    return 0;
}

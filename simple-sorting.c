#include <stdio.h>

int main(void) {
    int numbers[100];
    int count;

    printf("How many numbers do you want to sort (1-100)? ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100) {
        printf("Please enter a count from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d integers: ", count);
    for (int i = 0; i < count; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Bubble sort: swap neighboring values whenever they are out of order.
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temporary = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporary;
            }
        }
    }

    printf("Numbers in ascending order: ");
    for (int i = 0; i < count; i++) {
        printf("%d", numbers[i]);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

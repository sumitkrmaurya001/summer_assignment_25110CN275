#include <stdio.h>

int main(void) {
    int n;
    if (printf("Enter the number of elements: ") < 0) return 1;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Please enter at least two elements.\n");
        return 1;
    }

    int largest;
    int second;
    int second_exists = 0;

    if (printf("Enter element 1: ") < 0) return 1;
    if (scanf("%d", &largest) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i < n; i++) {
        int value;
        if (printf("Enter element %d: ", i + 1) < 0) return 1;
        if (scanf("%d", &value) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (value > largest) {
            second = largest;
            second_exists = 1;
            largest = value;
        } else if (value < largest) {
            if (!second_exists || value > second) {
                second = value;
                second_exists = 1;
            }
        }
    }

    if (!second_exists) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}

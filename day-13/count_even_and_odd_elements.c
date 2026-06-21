#include <stdio.h>

int main(void) {
    int n;
    if (printf("Enter number of elements: ") && fflush(stdout), scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int count_even = 0, count_odd = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        printf("Enter element %d: ", i + 1);
        if (fflush(stdout), scanf("%d", &x) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (x % 2 == 0) count_even++; else count_odd++;
    }

    printf("Even elements: %d\n", count_even);
    printf("Odd elements: %d\n", count_odd);
    return 0;
}

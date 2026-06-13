#include <stdio.h>

int isPerfect(int n) {
    if (n <= 1) {
        return 0;
    }

    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            int d = n / i;
            if (d != i) {
                sum += d;
            }
        }
    }

    return sum == n;
}

int main(void) {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

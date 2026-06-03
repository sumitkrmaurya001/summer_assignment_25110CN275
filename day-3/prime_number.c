#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    // A prime number has exactly 2 divisors: 1 and itself
    if (count == 2) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    return 0;
}

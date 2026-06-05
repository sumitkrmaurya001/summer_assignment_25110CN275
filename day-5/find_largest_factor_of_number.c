#include <stdio.h>

int main() {
    long n;
    printf("Enter number: ");
    scanf("%ld", &n);

    long max = -1;

    while (n % 2 == 0) {
        max = 2;
        n /= 2;
    }


    for (long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max = i;
            n /= i;
        }
    }

    if (n > 2) {
        max = n;
    }

    printf("Largest prime factor: %ld\n", max);
    return 0;
}

#include <stdio.h>

long long fibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    long long a = 0;
    long long b = 1;
    long long c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    return 0;
}

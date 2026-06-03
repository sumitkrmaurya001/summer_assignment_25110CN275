#include <stdio.h>

int main() {
    int a, b, i, gcd, x;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
         x=(a * b) / gcd ;
    printf("LCM of %d and %d = %d", a, b, x);

    return 0;
}
#include <stdio.h>

int main() {
    int base,exponent;
        printf("Enter the base number: ");
    scanf("%d", &base);
        printf("Enter the exponent: ");
    scanf("%d", &exponent);
    long long result = 1;

   
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d to the power of %d is %lld\n", base, exponent, result);
    return 0;
}

#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    unsigned int number;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factorial of %u is %llu\n", number, factorial(number));
    return 0;
}

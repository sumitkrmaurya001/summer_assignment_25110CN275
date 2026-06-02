#include <stdio.h>

int main() {
    int num, c, digit;
    long long product = 1; 

    printf("Enter an integer: ");
    scanf("%d", &num);
    c = num;

    if (c == 0) {
        product = 0;
    }

    while (c != 0) {
        digit = c % 10;    
        if (digit < 0) {
            digit = -digit;
        }

        product *= digit;      
        c /= 10;            
    }

    printf("Product of digits of %d is: %lld\n", num, product);

    return 0;
}

#include <stdio.h>

int main() {
    int num, sum = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        r = num % 10; 
        sum += r;     
        num = num / 10;       
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
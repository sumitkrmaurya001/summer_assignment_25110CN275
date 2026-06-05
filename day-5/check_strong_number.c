#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, sum = 0;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        lastDigit = num % 10; 
        fact = 1;
        for (int i = 1; i <= lastDigit; i++) {
            fact *= i;
        }

        sum += fact;        
        num /= 10;           
    }
    if (sum == originalNum) {
        printf("%d is a STRONG NUMBER.\n", originalNum);
    } else {
        printf("%d is NOT A STRONG NUMBER.\n", originalNum);
    }

    return 0;
}

#include <stdio.h>


int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    
    reversed = (reversed * 10) + (num % 10);
     // Recursive call with the remaining digits
    return reverseNumber(num / 10, reversed);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = reverseNumber(num, 0);

    printf("Reversed number: %d\n", result);

    return 0;
}

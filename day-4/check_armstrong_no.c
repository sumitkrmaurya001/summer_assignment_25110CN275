#include <stdio.h>
#include <math.h>

int main() {
    int n, originaln, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originaln = n;

    // Step 1: Count the total number of digits
    while (originaln != 0) {
        originaln /= 10;
        digits++;
    }

    originaln = n;

    // Step 2: Calculate the sum of power of individual digits
    while (originaln != 0) {
        remainder = originaln % 10;
        
        // Use round() to prevent floating-point inaccuracies from pow()
        result += round(pow(remainder, digits));
        
        originaln /= 10;
    }

    // Step 3: Check if the sum matches the original number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

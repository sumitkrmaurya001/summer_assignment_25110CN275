#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits, sum;

    // Get range from user
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0;

        // Count number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;

        // Calculate sum of digits raised to the power of 'digits'
        while (temp != 0) {
            remainder = temp % 10;
            // round() prevents potential floating-point inaccuracies from pow()
            sum += round(pow(remainder, digits));
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (i == sum) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

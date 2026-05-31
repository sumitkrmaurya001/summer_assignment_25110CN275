#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter two integers: ");
    
    // Read two integers from the user
    scanf("%d %d", &num1, &num2);
    // Calculate the sum using the addition operator
    sum = num1 + num2;

    // Display the final result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

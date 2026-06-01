#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // formula for first n natural numbers
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        
    }
else{
        sum = n * (n + 1) / 2;
    

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);}

    return 0;
}

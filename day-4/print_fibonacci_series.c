#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1;
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            printf("%d, ", a);
            continue;
        }
        if (i == 2) {
            printf("%d, ", b);
            continue;
        }
        // Calculates the next term
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        printf("%d, ", nextTerm);
    }
    return 0;
}

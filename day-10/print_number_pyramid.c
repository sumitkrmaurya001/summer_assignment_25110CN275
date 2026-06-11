#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        // Print ascending numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print descending numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}

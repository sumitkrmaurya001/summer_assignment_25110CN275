#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        // Print ascending characters
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        
        // Print descending characters
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        
        printf("\n");
    }
    
    return 0;
}

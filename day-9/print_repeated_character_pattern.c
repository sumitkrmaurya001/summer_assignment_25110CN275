#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        char ch = 'A' + (i - 1);
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
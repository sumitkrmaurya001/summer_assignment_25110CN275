#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 9; i > 0; i -= 2) {
        for (j = 0; j < i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

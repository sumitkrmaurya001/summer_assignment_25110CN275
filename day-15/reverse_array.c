#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d%c", arr[i], i ? ' ' : '\n');
    }

    return 0;
}

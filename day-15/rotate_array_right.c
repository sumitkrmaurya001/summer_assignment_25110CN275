#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (scanf("%d", &k) != 1) {
        free(arr);
        return 0;
    }

    k %= n;
    if (k < 0) {
        k += n;
    }

    int *rotated = malloc(n * sizeof(int));
    if (!rotated) {
        free(arr);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int new_index = (i + k) % n;
        rotated[new_index] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", rotated[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    free(arr);
    free(rotated);
    return 0;
}

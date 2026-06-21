#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, d;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    printf("Enter number of positions to rotate left: ");
    if (scanf("%d", &d) != 1) {
        fprintf(stderr, "Invalid input\n");
        free(arr);
        return 1;
    }

    d %= n;
    if (d < 0) {
        d += n;
    }

    if (d > 0) {
        int *temp = malloc(d * sizeof(int));
        if (!temp) {
            fprintf(stderr, "Memory allocation failed\n");
            free(arr);
            return 1;
        }
        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }
        for (int i = 0; i < n - d; i++) {
            arr[i] = arr[i + d];
        }
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
        free(temp);
    }

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    if (scanf("%d", &n1) != 1 || n1 < 0) return 0;
    int *a = malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    if (scanf("%d", &n2) != 1 || n2 < 0) { free(a); return 0; }
    int *b = malloc(n2 * sizeof(int));
    for (int i = 0; i < n2; ++i) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    int n3 = n1 + n2;
    int *c = malloc(n3 * sizeof(int));
    for (int i = 0; i < n1; ++i) c[i] = a[i];
    for (int i = 0; i < n2; ++i) c[n1 + i] = b[i];

    printf("Merged array:\n");
    for (int i = 0; i < n3; ++i) {
        printf("%d", c[i]);
        if (i < n3 - 1) printf(" ");
    }
    printf("\n");

    free(a); free(b); free(c);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    printf("Duplicate elements:\n");
    for (int i = 0; i < n; i++) {
        int already_seen = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                already_seen = 1;
                break;
            }
        }
        if (already_seen) {
            continue;
        }

        int duplicate = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) {
            printf("%d\n", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}

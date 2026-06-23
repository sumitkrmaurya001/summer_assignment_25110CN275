#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of elements in the array (one number is missing from 1..n+1): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int size = n + 1;
    int arr[n];

    printf("Enter %d numbers from 1 to %d with one missing:\n", n, size);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = size * (size + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
